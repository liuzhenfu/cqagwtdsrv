/**
*  Copyright (c) 2019 Archforce Financial Technology.  All rights reserved.
*  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
*  For more information about Archforce, welcome to archforce.cn.
**/
#ifndef ATP_GW_MSG_MAP__H_
#define ATP_GW_MSG_MAP__H_
#include "messages_agw_external.h"
#include "factory.h"
namespace atp
{
namespace gw
{
class FactoryClassATP_GW { };
#define MP_REGISTER_MESSAGE_ATP_GW(cls, packet_no) static mp::ClassRegister<mp::RootPacket, cls, atp::gw::MsgTypeNo_def, atp::gw::FactoryClassATP_GW> cls##Register(packet_no);
#define MP_CREATE_MESSAGE_ATP_GW(type) mp::Factory<mp::RootPacket, atp::gw::MsgTypeNo_def, atp::gw::FactoryClassATP_GW>::Create(type);
}
}
#endif // ATP_GW_MSG_MAP__H_