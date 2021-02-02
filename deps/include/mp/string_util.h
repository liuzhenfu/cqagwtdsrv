/** 
  *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
  *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
  *  For more information about Archforce, welcome to archforce.cn.
  **/
/**
* @file       string_util.h
* @author     liujie
* @date       20170210
*/


#ifndef MP_STRING_UTIL_H_
#define MP_STRING_UTIL_H_

#include <stdint.h>
#include <string>
#include <cstring>
#include <boost/array.hpp>
#include <boost/endian/conversion.hpp>

namespace mp
{

template <size_t Size>
inline void CopyToArray(const std::string& from, 
						boost::array<char, Size>& to)
{
	size_t min = std::min(from.size(), Size);
	std::memcpy(&to[0], from.c_str(), min);
	if (min < Size)
	{
		std::memset(&to[min], ' ', Size - min);
	}
}

template <size_t Size>
inline std::string AsString(const boost::array<char, Size>& from)
{
	return std::string(&from[0], Size);
}

template <size_t Size>
inline void CopyToArray(const char* buf,
						size_t buf_len,
						boost::array<char, Size>& to)
{
	size_t min = std::min(buf_len, Size);
	if (min <= 0)
	{
		std::memset(&to[0], ' ', Size);
	}
	else
	{
		std::memcpy(&to[0], buf, min);
		if (min < Size)
		{
			std::memset(&to[min], ' ', Size - min);
		}
		
		if (buf[min - 1] == 0)
		{
			to[min - 1] = ' ';
		}
	}
}

template <size_t Size, int CArraySize>
inline void CopyToArray(const char (&c_array)[CArraySize],
						boost::array<char, Size>& target)
{
	CopyToArray(&c_array[0], CArraySize, target);
}

template <size_t Size>
inline std::string AsStringTrim(const boost::array<char, Size>& from)
{
	size_t i = Size;
	while (true)
	{
		if (from[--i] != ' ')
			break;
		
		if (i == 0)
			return std::string();
	}
	
	return std::string(&from[0], i + 1);
}

inline uint64_t HostToNetwork(uint64_t host64)
{
	return boost::endian::native_to_big(host64);
}

inline uint32_t HostToNetwork(uint32_t host32)
{
	return boost::endian::native_to_big(host32);
}

inline uint16_t HostToNetwork(uint16_t host16)
{
	return boost::endian::native_to_big(host16);
}

inline uint8_t HostToNetwork(uint8_t host8)
{
    return host8;
}

inline uint64_t HostToNetwork(int64_t host64)
{
	return boost::endian::native_to_big(host64);
}

inline uint32_t HostToNetwork(int32_t host32)
{
	return boost::endian::native_to_big(host32);
}

inline uint16_t HostToNetwork(int16_t host16)
{
	return boost::endian::native_to_big(host16);
}

inline uint8_t HostToNetwork(int8_t host8)
{
    return host8;
}

inline uint64_t NetworkToHost(uint64_t net64)
{
	return boost::endian::big_to_native(net64);
}

inline uint32_t NetworkToHost(uint32_t net32)
{
	return boost::endian::big_to_native(net32);
}

inline uint16_t NetworkToHost(uint16_t net16)
{
	return boost::endian::big_to_native(net16);
}

inline uint8_t NetworkToHost(uint8_t net8)
{
    return net8;
}

inline uint64_t NetworkToHost(int64_t net64)
{
	return boost::endian::big_to_native(net64);
}

inline uint32_t NetworkToHost(int32_t net32)
{
	return boost::endian::big_to_native(net32);
}

inline uint16_t NetworkToHost(int16_t net16)
{
	return boost::endian::big_to_native(net16);
}
inline uint8_t NetworkToHost(int8_t net8)
{
    return net8;
}
}

#endif // MP_STRING_UTIL_H_
