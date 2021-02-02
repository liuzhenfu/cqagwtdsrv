/** 
 *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
 *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
 *  For more information about Archforce, welcome to archforce.cn. 
 * */ 

 /**
* @file     types.h
* @author   wanghz,luojian
* @brief    类型定义
*/
#ifndef _AGW_API_TYPES_
#define _AGW_API_TYPES_

#include "boost/shared_ptr.hpp"
#include <vector>
#include <serialize_buffer.h>
#include <types_agw_external.h>

namespace agw
{
	///// 消息编码
	//using ExternalMessageType = atp::gw::MsgTypeNo_def; 	
	///// 二进制buffer
	//using ExternalBuffer = mp::SerializeBuffer;		
	///// buffer的智能指针			
	//using ExternalBufferPtr = boost::shared_ptr<ExternalBuffer>; 
	///// 消息基类	
	//using ExternalMessage = mp::RootPacket;			
	///// 消息的智能指针		
	//using ExternalMessagePtr = boost::shared_ptr<ExternalMessage>;

	/// 消息编码
	typedef atp::gw::MsgTypeNo_def  ExternalMessageType;
	/// 二进制buffer
	typedef mp::SerializeBuffer  ExternalBuffer ;
	/// buffer的智能指针			
	typedef boost::shared_ptr<ExternalBuffer> ExternalBufferPtr;
	/// 消息基类	
	typedef  mp::RootPacket ExternalMessage;
	/// 消息的智能指针		
	typedef  boost::shared_ptr<ExternalMessage> ExternalMessagePtr;

}// namespace agw


#endif

