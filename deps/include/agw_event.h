/** 
 *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
 *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
 *  For more information about Archforce, welcome to archforce.cn. 
 * */ 

/**
* @file     agw_event.h
* @author   wanghz,luojian
* @brief    事件文件
* @note     华锐标准网关的API客户端事件，错误码
*/

#ifndef _GW_FRAMEWORK_AGW_API_AGW_EVENT_H_
#define _GW_FRAMEWORK_AGW_API_AGW_EVENT_H_

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



#include <iostream>
#include <string>
#include"boost/shared_ptr.hpp"
#include "root_packet.h"
#include "types.h"
namespace agw
{
    /**
    *   @brief 错误码
    */
    enum ErrorCode
    {
        kSuccess = 0,       ///< 成功 
        kNoSetClientHandler,   ///< 未设置处理句柄
        kLocationsError,   ///未设置ip和端口
        kUserPwdError,     ///用户名或密码错误
        kNoConnection,      ///< 没有建立连接
        kNoSyncFinished,      ///<没有完成回报同步请求
        kAlreadyConnected,  ///< 已连接
        kFailure,           ///< 失败
    };

    /**
    *   @brief 事件级别
    */
    enum  EventLevel
    {
        kInfoEvent,  ///< 重要信息级别
        kWarnEvent,  ///< 警告级别
        kErrorEvent, ///< 错误级别
        kFatalEvent  ///< 致命错误级别
    };

    /**
    *   @brief 事件类型
    */
    enum  EventType
    {
        kConnected,             ///< 已连接
        kConnectFailure,        ///< 连接失败
        kConnectTimeout,        ///连接超时
        kLogin,                 ///登录成功
        kLogout,                ///登录失败
        kEndOfConnection,      ///连接结束，不会再自动发起连接
        kError,                 ///< 错误
        kHeartbeatTimeout,      ///< 接收心跳超时
        kClosed                 ///< 连接关闭
    };

    /**
    *   @brief 日志级别
    */
    enum  LogLevel
    {
        kTraceLog, ///< 最低级别
        kDebugLog, ///< 调试级别
        kInfoLog,  ///< 重要信息级别
        kWarnLog,  ///< 警告级别
        kErrorLog, ///< 错误级别
        kFatalLog  ///< 严重错误级别
    };

    /**
    *   @brief 事件结构
    */
    struct Event
    {
        EventLevel level;   ///< 事件级别
        EventType type;     ///< 事件类型
        std::string what;   ///< 事件的原因
    };


    /**
    *   @brief 处理句柄
    *   @note  需继承实现处理函数
    */
    class AGW_API ClientHandler
    {
    public:
        /*
        * @brief 事件回调函数
        * @param[in] event : 回调事件 
        * @return void
        */
        virtual void OnEvent(const Event& event) = 0;
        /*
        * @brief 消息回调函数
        * @param[in] msg_type : 消息类型
        * @param[in] message  : 消息信息
        * @return void 
        */
        virtual void OnMessage(const ExternalMessageType msg_type, const ExternalMessagePtr& message) = 0;
        /*
        * @brief 日志处理
        * @param[in] level : 日志级别
        * @param[in] message: 日志信息
        * @return void
        */
        virtual void OnLog(LogLevel level, const std::string& message) = 0;
    };

    class AGW_API JsonClientHandler:public ClientHandler
    {
    public:
        /*
        * @brief 事件回调函数
        * @param[in] event : 回调事件 
        * @return void
        */
        virtual void OnEvent(const Event& event) = 0;
        /*
        * @brief 消息回调函数
        * @param[in] msg_type : 消息类型
        * @param[in] message  : 消息信息
        * @return void 
        */
        
        virtual void OnMessage(const ExternalMessageType msg_type, const std::string& jsonMsg) = 0;
        /*
        * @brief 日志处理
        * @param[in] level : 日志级别
        * @param[in] message: 日志信息
        * @return void
        */
        virtual void OnLog(LogLevel level, const std::string& message) = 0;
    private:
        virtual void OnMessage(const ExternalMessageType msg_type, const ExternalMessagePtr& message);
    };
}

#endif