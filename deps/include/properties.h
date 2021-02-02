/** 
 *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
 *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
 *  For more information about Archforce, welcome to archforce.cn. 
 * */ 

/**
* @file     properties.h
* @author   wanghz
* @brief    配置属性类
*/
#ifndef AGW_PROPERTIES_H_
#define AGW_PROPERTIES_H_

#if defined _WIN32
#   if    defined AGW_API_USE_STATIC
#      define  AGW_API  
#   elif  defined AGW_API_BUILD_EXPORT	
#      define  AGW_API __declspec(dllexport)
#   else
#      define  AGW_API __declspec(dllimport)
#   endif
#else 
#      define  AGW_API  
#endif

#include "boost/cstdint.hpp"
#include <string>
#include <vector>
#include <map>

namespace agw
{
///类型定义
//using StringVector = std::vector<std::string>;
//using IntIntMap = std::map<boost::uint8_t, boost::int32_t>;

typedef  std::vector<std::string>  StringVector;
typedef  std::map<boost::uint8_t, boost::int32_t> IntIntMap;

/// 前置声明：配置属性实现类			    
class PropertiesImpl;

/**
 * @brief 配置属性类
 * @note 用于存储配置属性集，可存储不同类型的配置字段。
 */
class AGW_API Properties
{
public:
    /**
     * @brief 构造函数
     */
    Properties();

    /**
     * @brief 拷贝构造函数
     *
     * @param[in] properties 用于复制的配置属性
     */
    Properties(const Properties& properties);

    /**
     * @brief 析构函数
     */
    ~Properties();

    /**
     * @brief 赋值操作符
     * @param[in] properties 用于复制的配置属性
     * @return 对自身的引用
     */
    Properties& operator=(const Properties& properties);

    /**
     * @brief 设置属性值
     * @param[in] key 属性名称
     * @param[in] value 属性值
     */
    void SetValue(const std::string& key, const std::string& value);

    /**
     * @copydoc Properties::SetValue(const std::string&, const std::string&)
     */
    void SetValue(const std::string& key, const char* value);

    /**
     * @copydoc Properties::SetValue(const std::string&, const std::string&)
     */
    void SetValue(const std::string& key,boost::int32_t value);

    /**
     * @copydoc Properties::SetValue(const std::string&, const std::string&)
     */
    void SetValue(const std::string& key, bool value);

    /**
     * @copydoc Properties::SetValue(const std::string&, const std::string&)
     */
    void SetValue(const std::string& key, const StringVector& value);

    /**
     * @copydoc Properties::SetValue(const std::string&, const std::string&)
     */
    void SetValue(const std::string& key, const IntIntMap& value);

    /**
     * @brief 获取属性值
     * @param[in] key 属性名称
     * @param[in] default_value 属性值
     * @return 获取到的属性值
     */
    std::string GetValue(const std::string& key, const std::string& default_value) const;

    /**
     * @copydoc Properties::GetValue(const std::string&, const std::string&)
     */
    std::string GetValue(const std::string& key, const char* default_value) const;

    /**
     * @copydoc Properties::GetValue(const std::string&, const std::string&)
     */
    boost::int32_t GetValue(const std::string& key, boost::int32_t default_value) const;

    /**
     * @copydoc Properties::GetValue(const std::string&, const std::string&)
     */
    bool GetValue(const std::string& key, bool default_value) const;

    /**
     * @copydoc Properties::GetValue(const std::string&, const std::string&)
     */
    StringVector GetValue(const std::string& key, const StringVector& default_value) const;

    /**
     * @copydoc Properties::GetValue(const std::string&, const std::string&)
     */
    IntIntMap GetValue(const std::string& key, const IntIntMap& default_value) const;

private:
    PropertiesImpl* impl_; ///< 配置属性实现类
};

} // namespace agw

#endif /* AGW_PROPERTIES_H_ */
