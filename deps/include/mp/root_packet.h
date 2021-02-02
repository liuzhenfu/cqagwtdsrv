/** 
  *  Copyright (c) 2018 Archforce Financial Technology.  All rights reserved. 
  *  Redistribution and use in source and binary forms, with or without  modification, are not permitted.   
  *  For more information about Archforce, welcome to archforce.cn.
  **/
/**
* @file       root_packet.h
* @author     liujie
* @date       20170210
*/


#ifndef MP_ROOT_PACKET_H_
#define MP_ROOT_PACKET_H_

#include <stdint.h>
#include <string>
#include "boost/property_tree/json_parser.hpp"
#include "error_code.h"
#include "message_decoder.h"
#include "message_encoder.h"
#include "msg_proto_types.h"

namespace mp
{
template <typename ListType>
inline size_t GetSequenceSize(const ListType& list_data)
{
	size_t size = 0;
	typename ListType::const_iterator element = list_data.begin();
	for (; element != list_data.end(); ++element)
	{
		size += element->GetSize();
	}
	return size;
}


class RootPacket
{
public:
	virtual ~RootPacket() {}

	virtual size_t GetSize() const = 0;

	inline ErrorCode PushFields(MessageEncoder& encoder) const
	{
		return Encode(encoder);
	}

	inline ErrorCode PushFields(SerializeBuffer& buffer, bool host_to_network = false) const
	{
		MessageEncoder encoder(buffer, false, host_to_network);
		return PushFields(encoder);
	}

	inline ErrorCode PopFields(MessageDecoder& decoder)
	{
		return Decode(decoder);
	}

	inline ErrorCode PopFields(const SerializeBuffer& data, bool host_to_network = false)
	{
		if (data.Empty())
		{
			return mp::kSuccess;
		}
		return PopFields(&data[0], data.Size(), host_to_network);
	}

	inline ErrorCode PopFields(const char* data, size_t size, bool host_to_network = false)
	{
		MessageDecoder decoder(data, size, host_to_network);
		ErrorCode result = Decode(decoder);
		if (result)
		{
			return result;
		}

		// 兼容深交所协议接口新添加字段 by Ma Zhen 2020/12/28 09:19:30
		/*
		if (decoder.left_bytes() > 0)
		{
			return mp::kNotReadAll;
		}
		*/

		return mp::kSuccess;
	}

	virtual void DumpAsString(std::ostream& os) const
	{
	}

	virtual void WriteJson(boost::property_tree::ptree& ptree_node) const
	{
	}
	
	virtual void ReadJson(const boost::property_tree::ptree& ptree_node)
	{
	}

    virtual void FillDefaultValue()
    {
    }

	std::string ToString()
	{
		std::stringstream ss;
		this->DumpAsString(ss);
		return ss.str();
	}

	virtual mp::MsgTypeNo_def GetTypeID() const { return 0; };
protected:
	virtual ErrorCode Decode(MessageDecoder& decoder) = 0;
	virtual ErrorCode Encode(MessageEncoder& encoder) const = 0;
};
}

#endif // MP_ROOT_PACKET_H_
