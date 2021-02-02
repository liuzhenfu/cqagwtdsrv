/** 
 *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
 *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
 *  For more information about Archforce, welcome to archforce.cn. 
 * */ 

/**
* @file     agw_client.h
* @author   wanghz,luojian
* @brief    AGW客户端
* @note     连接华锐标准网关的API客户端
*/
#ifndef AGW_AGW_CLIENT_
#define AGW_AGW_CLIENT_

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

#include <map>
#include"boost/tuple/tuple.hpp"
#include "agw_event.h"
#include "properties.h"

namespace agw
{
    /**
    * @brief    AGW客户端实现类
    * @note     连接华锐标准网关的API客户端实现类
    */
    class AgwClientImpl;

    /**
    * @brief    AGW客户端
    * @note     连接华锐标准网关的API客户端
    */
    class AGW_API AgwClient
    {
    public:
        /**
        *  @brief 构造函数
        */
        AgwClient();
        /**
        *  @brief 析构函数
        */
        ~AgwClient();

   
        /*
            首先实现：自动处理登录，会话，自动重连，多个IP，故障恢复
            以后实现：通过key value方式处理消息。 负载均衡。
        */

		ErrorCode SendMessage(const ExternalMessageType msg_type, 
                              const ExternalMessagePtr& message,
                              ClientHandler* handler);

        /**
         * @brief 发起异步连接
         * @param[in] property 连接参数，可用参数：
         *        "User": string ，登录的用户名 必填
         *        "PasswordSha256":string 登录的密码，sha256散列后的密码，必填
         *        "Locations": 连接地址，vector<string>，每个连接地址为"ip:port"形式，必填
         *        "HeartbeatIntervalMilli": 发心跳间隔时间，int32_t，单位：毫秒，默认值：5000
         *        "HeartbeatTimeoutMilli": 检测心跳超时时间，int32_t，单位：毫秒，默认值：HeartbeatInterval*3
         *        "ConnectTimeoutMilli": 连接超时时间，int32_t，单位：毫秒，默认值：5000
         *        "ReconnectTime": 重试连接次数，int32_t，默认值：连接地址数
		 *        "ReconnectDelayMilli":重连延迟事件，int32_t,单位：毫秒，默认值：5000
         *        "ReportSync": 回报同步数据，map<boost::uint8_t, int32_t>，默认值：空
         *        "RecordMessageFilename": 消息记录文件名，string，默认值："AGW_API"
         *        "RecordMessageDir": 消息记录文件目录，string，默认值：当前目录
         * @note  连接成功或者失败事件应在ClientHandler中进行处理
         */
        ErrorCode Connect(const Properties& properties, 
                          ClientHandler* handler);

        //新加Json接口
        ErrorCode Connect(const std::string& jsonProps,  
                          ClientHandler* handler);

        /**
        *   @brief      异步发送消息
        *   @param[in]  msg_type：待发送消息的编码;
        *   @param[in]  message ：待发送的消息,shared_ptr类型
        *   @note       发送失败后将会回调ClientHandler进行处理
        *   @return     发送错误时返回错误码
        */
        ErrorCode SendMessage(const ExternalMessageType msg_type, 
                              const ExternalMessagePtr& message);
        /**
        *   @brief      异步发送消息
        *   @param[in]  msg_type：待发送消息的编码;
        *   @param[in]  message*：待发送的消息,指针类型
        *   @note       发送失败后将会回调ClientHandler进行处理
        *   @return     发送错误时返回错误码
        */
        ErrorCode SendMessage(const ExternalMessageType msg_type, 
                              const ExternalMessage* message);
        /**
        *   @brief  异步发送消息
        *   @param[in]  message：待发送的消息，编码后的消息
        *   @note       发送失败后将会回调ClientHandler进行处理
        *   @return     发送错误时返回错误码
        */
        ErrorCode SendMessage(const std::string& message) ;

        /**
        *   @brief      异步发送消息
        *   @param[in]  msg_type：待发送消息的编码;
        *   @param[in]  jsonMsg：待发送的消息,字符串类型
        *   @note       发送失败后将会回调ClientHandler进行处理
        *   @return     发送错误时返回错误码
        */
        //新加Json接口
        ErrorCode SendMessage(const ExternalMessageType msg_type, 
                              const std::string& jsonMsg);
        /**
        *   @brief  异步关闭连接
        *   @return 关闭连接时返回错误
        */
        ErrorCode Close();

       
        /*
        *   @brief 消息编码
        *   @note  此消息进行按照华锐二进制协议进行编码
        *   @param[in]     msg_type: 待发送消息编码
        *   @param[in]     message : 待编码的消息W
        *   @return[out]   std::tuple<bool,std::string>         
        *                  bool: 编码是否成功
        *                  std::string: 编码后的二进制
        */
        static boost::tuple<bool,std::string> EncodeMessage(
                    const ExternalMessageType msg_type,
                    const ExternalMessagePtr& message);

        /*
        *   @brief 消息解码
        *   @note  此消息进行按照华锐二进制协议进行解码
        *   @param[in]     message: 待解码的消息
        *   @return[out]     bool : 解码是否成功
        *       ExternalMessageType：解码后的消息类型
        *       ExternalMessagePtr : 解码后的消息
        */
        static boost::tuple<bool,ExternalMessageType,ExternalMessagePtr> 
                        DecodeMessage(const std::string& message) ;

    private:
        AgwClientImpl* impl_; ///< the implements of agw client
    };

}

#endif
