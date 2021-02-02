/**
 *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved.
 *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
 *  For more information about Archforce, welcome to archforce.cn.
 * */

 /**
* @file     setvalue.h
* @author   wanghz,luojian
* @brief    SetValue函数
*/

#ifndef ATP_GW_SETVALUE_H_
#define ATP_GW_SETVALUE_H_

#include <string>
#include "boost/static_assert.hpp"
#include "boost/array.hpp"
#include "boost/algorithm/string/trim.hpp"
#include "boost/type_traits.hpp"

namespace agw
{
	namespace notstd
	{
		template<class T>
		struct is_array :boost::is_array<T> {};

		template<class T, std::size_t N>
		struct is_array<boost::array<T, N> > :boost::true_type {};

		template<class T>
		struct std_array
		{
			//typedef T type;
		};

		template<class T, std::size_t N>
		struct std_array<boost::array<T, N> > :boost::integral_constant<std::size_t, N>
		{
			typedef T type;
		};

	}

	/**
	* @brief char[] -> string
	*/
	template<typename T>
	typename boost::enable_if_c<boost::is_array<T>::value&&boost::is_same<char, typename boost::remove_extent<T>::type>::value, void>::type
		SetValue(std::string& str_value, const T& t, bool trim_right = true)
	{
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T>::value&&boost::is_same<char, typename boost::remove_extent<T>::type>::value), "type must be char array");
		str_value.assign(t, boost::extent<T>::value);
		if (trim_right)
		{
			boost::algorithm::trim_right(str_value);

		}
	}

	/**
	* @brief string ->char[]
	*/
	template<typename T>
	typename boost::enable_if_c<boost::is_array<T>::value&&boost::is_same<char, typename boost::remove_extent<T>::type>::value, void>::type
		SetValue(T& t, const std::string& str_value, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T>::value&&boost::is_same<char, typename boost::remove_extent<T>::type>::value), "type must be char array");

		std::size_t min_len = std::min(boost::extent<T>::value, str_value.size());
		memcpy((typename boost::decay<T>::type)t, str_value.c_str(), min_len);
		if (fill_space&&min_len < boost::extent<T>::value)
		{
			memset((typename boost::decay<T>::type)t + min_len, ' ', boost::extent<T>::value - min_len);
		}
	}


	/**
	*	@brief string -> string
	*/
	inline void SetValue(std::string& str1, const std::string& str2, bool trim_right = true)
	{
		str1.assign(str2);
		if (trim_right)
		{
			boost::algorithm::trim_right(str1);

		}
	}

	/**
	*	@brief char[] -> char[]
	*/
	template<typename T1, typename T2>
	typename boost::enable_if_c<boost::is_array<T1>::value&&
		boost::is_same<char, typename boost::remove_extent<T1>::type>::value&&
		boost::is_array<T2>::value&&
		boost::is_same<char, typename boost::remove_extent<T2>::type>::value
		, void>::type
		SetValue(T1& t1, const T2& t2, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T1>::value&&boost::is_same<char, typename boost::remove_extent<T1>::type>::value), "type must be char array");
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T2>::value&&boost::is_same<char, typename boost::remove_extent<T2>::type>::value), "type must be char array");


		std::size_t min_len = std::min(boost::extent<T1>::value, boost::extent<T2>::value);
		memcpy((typename boost::decay<T1>::type)t1, (typename boost::decay<T2>::type)t2, min_len);

		if (fill_space&&min_len < boost::extent<T1>::value)
		{
			memset((typename boost::decay<T1>::type)t1 + min_len, ' ', boost::extent<T1>::value - min_len);
		}
	}

	/**
	*	@brief array<char> -> char[]
	*/
	template<typename T1, typename T2>
	typename boost::enable_if_c<boost::is_array<T1>::value&&
		boost::is_same<char, typename boost::remove_extent<T1>::type>::value&&
		notstd::is_array<T2>::value&&
		boost::is_same<char, typename notstd::std_array<T2>::type>::value
		, void>::type
		SetValue(T1& t1, const T2& t2, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T1>::value&&boost::is_same<char, typename boost::remove_extent<T1>::type>::value), "type must be char array");
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T2>::value&&boost::is_same<char, typename notstd::std_array<T2>::type >::value), "type must be char array");

		std::size_t min_len = std::min(boost::extent<T1>::value, notstd::std_array<T2>::value);
		memcpy((typename boost::decay<T1>::type)t1, (typename notstd::std_array<T2>::type*)t2.data(), min_len);
		if (fill_space&&min_len < boost::extent<T1>::value)
		{
			memset((typename boost::decay<T1>::type)t1 + min_len, ' ', boost::extent<T1>::value - min_len);
		}
	}

	/**
	*	@brief char[] -> array<char>
	*/
	template<typename T1, typename T2>
	typename boost::enable_if_c<notstd::is_array<T1>::value&&
		boost::is_same<char, typename notstd::std_array<T1>::type>::value&&
		boost::is_array<T2>::value&&
		boost::is_same<char, typename boost::remove_extent<T2>::type>::value
		, void>::type
		SetValue(T1& t1, const T2& t2, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T1>::value&&boost::is_same<char, typename notstd::std_array<T1>::type >::value), "type must be char array");
		BOOST_STATIC_ASSERT_MSG((boost::is_array<T2>::value&&boost::is_same<char, typename boost::remove_extent<T2>::type>::value), "type must be char array");


		std::size_t min_len = std::min(boost::extent<T2>::value, notstd::std_array<T1>::value);
		memcpy((typename notstd::std_array<T1>::type*)t1.data(), (typename boost::decay<T2>::type)t2, min_len);
		if (fill_space&&min_len < notstd::std_array<T1>::value)
		{
			memset((typename  notstd::std_array<T1>::type*)t1.data() + min_len, ' ', notstd::std_array<T1>::value - min_len);
		}
	}

	/**
	*	@brief string -> array<char>
	*/
	template<typename T>
	typename boost::enable_if_c<notstd::is_array<T>::value&&
		boost::is_same<char, typename notstd::std_array<T>::type>::value
		, void>::type
		SetValue(T& t, const std::string& str_value, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T>::value&&boost::is_same<char, typename notstd::std_array<T>::type >::value), "type must be char array");


		std::size_t min_len = std::min(notstd::std_array<T>::value, str_value.size());
		memcpy((typename notstd::std_array<T>::type*)t.data(), str_value.c_str(), min_len);
		if (fill_space&&min_len < notstd::std_array<T>::value)
		{
			memset((typename  notstd::std_array<T>::type*)t.data() + min_len, ' ', notstd::std_array<T>::value - min_len);
		}
	}



	/**
	* @brief array<char> ->string
	*/
	template<typename T>
	typename boost::enable_if_c<notstd::is_array<T>::value&&
		boost::is_same<char, typename notstd::std_array<T>::type>::value
		, void>::type
		SetValue(std::string& str_value, const T& t, bool trim_right = true)
	{
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T>::value&&boost::is_same<char, typename notstd::std_array<T>::type >::value), "type must be char array");

		str_value.assign((typename notstd::std_array<T>::type*)t.data(), notstd::std_array<T>::value);
		if (trim_right)
		{
			boost::algorithm::trim_right(str_value);

		}
	}

	/**
	* @brief array<char> -> array<char>
	*/
	template<typename T1, typename T2>
	typename boost::enable_if_c<notstd::is_array<T1>::value&&
		boost::is_same<char, typename notstd::std_array<T1>::type>::value&&
		notstd::is_array<T2>::value&&
		boost::is_same<char, typename notstd::std_array<T2>::type>::value
		, void>::type
		SetValue(T1& t1, const T2& t2, bool fill_space = true)
	{
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T1>::value&&boost::is_same<char, typename notstd::std_array<T1>::type >::value), "type must be char array");
		BOOST_STATIC_ASSERT_MSG((notstd::is_array<T2>::value&&boost::is_same<char, typename notstd::std_array<T2>::type >::value), "type must be char array");

		std::size_t min_len = std::min(notstd::std_array<T1>::value, notstd::std_array<T2>::value);
		memcpy((typename notstd::std_array<T1>::type*)t1.data(), (typename notstd::std_array<T2>::type*)t2.data(), min_len);

		if (fill_space&&min_len < notstd::std_array<T1>::value)
		{
			memset((typename  notstd::std_array<T1>::type*)t1.data() + min_len, ' ', notstd::std_array<T1>::value - min_len);
		}
	}

	/**
	* @brief arithmetic
	*/
	template<typename T1, typename T2>
	typename boost::enable_if_c<boost::is_arithmetic<T1>::value&&boost::is_arithmetic<T2>::value&&boost::is_convertible<T2, T1>::value, void>::type
		SetValue(T1& t1, const T2& t2)
	{
		t1 = t2;
	}
}


#endif  //ATP_GW_SETVALUE_H_