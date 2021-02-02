/**
*  Copyright (c) 2019 Archforce Financial Technology.  All rights reserved.
*  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
*  For more information about Archforce, welcome to archforce.cn.
**/
#ifndef ATP_GW_MESSAGES_AGW_EXTERNAL_H_
#define ATP_GW_MESSAGES_AGW_EXTERNAL_H_
#include <stdint.h>
#include <string>
#include <map>
#include "boost/property_tree/json_parser.hpp"
#include "root_packet.h"
#include "string_util.h"
#include "error_code.h"
#include "msg_proto_types.h"
#include "export_macro.h"
#include "types_agw_external.h"
#include "constants_agw_external.h"
using mp::MessageEncoder;
using mp::MessageDecoder;
using mp::AsString;
using mp::CopyToArray;
namespace atp
{
namespace gw
{
typedef mp::ErrorCode error_code;
const MsgTypeNo_def kAgwMsgLogin = 3; ///< 登录消息
const MsgTypeNo_def kAgwMsgLogout = 4; ///< 注销消息
const MsgTypeNo_def kAgwMsgHeartBeat = 0; ///< 心跳消息
const MsgTypeNo_def kAgwMsgTestRequest = 1; ///< 测试请求消息
const MsgTypeNo_def kAgwMsgSync = 5; ///< 回报同步消息
const MsgTypeNo_def kAgwMsgSyncFinish = 6; ///< 回报同步结束消息
const MsgTypeNo_def kAgwMsgRealTimeControlInstruction = 910001; ///< 实时控制指令消息
const MsgTypeNo_def kAgwMsgRealTimeControlInstructionResult = 910003; ///< 
const MsgTypeNo_def kAgwMsgBizRejection = 800002; ///< 外部业务拒绝消息
const MsgTypeNo_def kAgwMsgCustLogoutReq = 800007; ///< 登出请求
const MsgTypeNo_def kAgwMsgCustLogoutResp = 800008; ///< 登出应答
const MsgTypeNo_def kAgwMsgCustLoginReq = 800005; ///< 登入请求
const MsgTypeNo_def kAgwMsgCustLoginResp = 800006; ///< 登入应答
const MsgTypeNo_def kAgwMsgExtFundTransfer = 800009; ///< 外部资金划拨请求
const MsgTypeNo_def kAgwMsgExtFundTransferResult = 800010; ///< 外部资金划拨应答
const MsgTypeNo_def kAgwMsgCustAuthReq = 800012; ///< 认证请求
const MsgTypeNo_def kAgwMsgCustAuthResp = 800013; ///< 认证应答
const MsgTypeNo_def kAgwMsgCashAuctionOrder = 100101; ///< 现货集中竞价业务委托消息
const MsgTypeNo_def kAgwMsgTibAfterHourAuctionOrder = 109701; ///< 科创板股票盘后定价业务委托消息
const MsgTypeNo_def kAgwMsgOptionAuctionOrder = 100401; ///< 期权集中竞价业务委托消息
const MsgTypeNo_def kAgwMsgIssueOrder = 101301; ///< 网上发行业务委托消息
const MsgTypeNo_def kAgwMsgRightsIssueOrder = 101401; ///< 配股业务委托消息
const MsgTypeNo_def kAgwMsgOptionExerciseOrder = 101601; ///< 期权行权业务委托消息
const MsgTypeNo_def kAgwMsgDesignationOrder = 102001; ///< 转托管业务委托消息
const MsgTypeNo_def kAgwMsgDesignatedTransactionOrder = 102201; ///< 指定交易业务委托消息
const MsgTypeNo_def kAgwMsgWarrantExerciseOrder = 102301; ///< 权证行权业务委托消息
const MsgTypeNo_def kAgwMsgFDEPCancelOrder = 190003; ///< FDEP公共撤单消息
const MsgTypeNo_def kAgwMsgCancelOrder = 190001; ///< 通用撤单消息
const MsgTypeNo_def kAgwMsgBatchCancelOrder = 190002; ///< 一键撤单消息
const MsgTypeNo_def kAgwMsgOptionCancelOrder = 190401; ///< 期权撤单消息
const MsgTypeNo_def kAgwMsgOrderStatusAck = 290001; ///< 委托状态响应
const MsgTypeNo_def kAgwMsgCashAuctionTradeER = 210115; ///< 现货集中竞价业务成交回报
const MsgTypeNo_def kAgwMsgOptionAuctionTradeER = 210415; ///< 期权集中竞价业务成交回报
const MsgTypeNo_def kAgwMsgTibAfterHourAuctionTradeER = 219715; ///< 科创板股票盘后定价业务成交回报
const MsgTypeNo_def kAgwMsgRepoAuctionOrder = 100201; ///< 质押式回购集中竞价业务委托消息
const MsgTypeNo_def kAgwMsgRepoAuctionTradeER = 210215; ///< 质押式回购集中竞价业务成交回报
const MsgTypeNo_def kAgwMsgSwapPutbackOrder = 101501; ///< 债券转股回售委托
const MsgTypeNo_def kAgwMsgOptionAuctionForceCloseOrder = 100402; ///< 期权强平业务委托消息
const MsgTypeNo_def kAgwMsgLOFOrder = 101701; ///< 开放式基金申赎业务订单
const MsgTypeNo_def kAgwMsgLOFTradeER = 211715; ///< 开放式基金申赎成交回报
const MsgTypeNo_def kAgwMsgPledgeInOrOutOrder = 101901; ///< 质押出入库业务消息
const MsgTypeNo_def kAgwMsgPledgeInOrOutTradeER = 211915; ///< 质押出入库成交回报
const MsgTypeNo_def kAgwMsgPasswordServiceOrder = 102401; ///< 密码服务业务消息
const MsgTypeNo_def kAgwMsgNetVotingOrder = 102101; ///< 网络投票业务消息
const MsgTypeNo_def kAgwMsgTenderOfferOrder = 101801; ///< 要约收购业务消息
const MsgTypeNo_def kAgwMsgETFRedemptionOrder = 101201; ///< ETF申赎业务委托消息
const MsgTypeNo_def kAgwMsgETFRedemptionTradeER = 211215; ///< ETF申赎业务成交回报
const MsgTypeNo_def kAgwMsgBondDistributionOrder = 100301; ///< 债券分销委托
const MsgTypeNo_def kAgwMsgBondDistributionTradeER = 210315; ///< 债券分销成交回报
const MsgTypeNo_def kAgwMsgStructuredFundOrder = 103101; ///< 分级基金实时拆分合并委托消息
const MsgTypeNo_def kAgwMsgStructuredFundTradeER = 213115; ///< 分级基金实时拆分合并成交回报
const MsgTypeNo_def kAgwMsgDcomCancelOrder = 7190701; ///< 深结算dcom撤单委托
const MsgTypeNo_def kAgwMsgCreditAuctionOrder = 7100701; ///< 信用账户普通买入/普通卖出业务委托消息
const MsgTypeNo_def kAgwMsgCreditAuctionTradeER = 7200715; ///< 信用账户普通买入/普通卖出成交回报
const MsgTypeNo_def kAgwMsgMarginTradingOrder = 7101701; ///< 融资买入/融券卖出业务委托消息
const MsgTypeNo_def kAgwMsgMarginTradingTradeER = 7201715; ///< 融资买入/融券卖出成交回报
const MsgTypeNo_def kAgwMsgCollateralInOrOutOrder = 7103701; ///< 担保品划转业务委托消息
const MsgTypeNo_def kAgwMsgThirdCollateralInOrder = 7192701; ///< 第三方担保品转入直达信用节点业务委托消息
const MsgTypeNo_def kAgwMsgBuySecuRepayOrder = 7104701; ///< 买券还券业务委托消息
const MsgTypeNo_def kAgwMsgBuySecuRepayTradeER = 7204715; ///< 买券还券成交回报
const MsgTypeNo_def kAgwMsgCurSecuRepayOrder = 7105701; ///< 现券还券业务委托消息
const MsgTypeNo_def kAgwMsgExtDirectRepay = 7102701; ///< 直接还款请求
const MsgTypeNo_def kAgwMsgExtDirectRepayResult = 7202702; ///< 直接还款应答
const MsgTypeNo_def kAgwMsgCreditVote = 7107701; ///< 信用投票业务消息
const MsgTypeNo_def kAgwMsgCreditVoteResult = 7207702; ///< 信用投票业务应答
const MsgTypeNo_def kAgwMsgExtDirectRepayAppoint = 7108701; ///< 指定合约还款请求
const MsgTypeNo_def kAgwMsgExtDirectRepayAppointResult = 7208702; ///< 指定合约还款应答
const MsgTypeNo_def kAgwMsgExtQueryMaxOrderQty = 300001; ///< 最大可委托数查询消息
const MsgTypeNo_def kAgwMsgNewExtQueryMaxOrderQty = 300013; ///< 增强型最大可委托数查询消息
const MsgTypeNo_def kAgwMsgExtQueryMaxOrderQtyResult = 310001; ///< 最大可委托数查询结果消息
const MsgTypeNo_def kAgwMsgExtQueryAccountContractShare = 300007; ///< 合约账户持仓查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultAccountContractShare = 310007; ///< 合约账户持仓查询结果
const MsgTypeNo_def kAgwMsgExtQueryAccountContractFund = 300008; ///< 指定合约账户资金查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultAccountContractFund = 310008; ///< 指定合约账户资金查询结果
const MsgTypeNo_def kAgwMsgExtQueryTradeOrder = 300003; ///< 成交查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultTradeOrder = 310003; ///< 成交查询结果
const MsgTypeNo_def kAgwMsgExtQueryFund = 300004; ///< 资金查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultFund = 310004; ///< 资金查询结果
const MsgTypeNo_def kAgwMsgExtQueryShare = 300005; ///< 股份持仓查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultShare = 310005; ///< 股份查询结果
const MsgTypeNo_def kAgwMsgExtQueryIPOQty = 300006; ///< 新股发行申购额度查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultIPOQty = 310006; ///< 新股发行申购额度查询结果
const MsgTypeNo_def kAgwMsgExtQueryTIBIPOQty = 300010; ///< 科创板新股发行申购额度查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultTIBIPOQty = 310010; ///< 科创板新股发行申购额度查询结果
const MsgTypeNo_def kAgwMsgExtQueryTradeCollect = 300009; ///< 成交汇总查询消息
const MsgTypeNo_def kAgwExtQueryResultTradeCollect = 310009; ///< 成交汇总查询结果
const MsgTypeNo_def kAgwMsgExtQueryOrder = 300002; ///< 订单查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultOrder = 310002; ///< 订单查询结果
const MsgTypeNo_def kAgwExternalInsTETransFundReq = 810001; ///< 按证券账户划转资金请求消息
const MsgTypeNo_def kAgwExternalInsTETransFundResp = 810002; ///< 按证券账户划转资金响应消息
const MsgTypeNo_def kAgwMsgExtQuerySecurityInfo = 7300701; ///< 证券信息查询
const MsgTypeNo_def kAgwMsgExtQueryResultSecurityInfo = 7400701; ///< 证券信息查询结果
const MsgTypeNo_def kAgwMsgExtQueryMd = 7300702; ///< 行情信息查询
const MsgTypeNo_def kAgwMsgExtQueryResultMd = 7400702; ///< 行情信息查询结果
const MsgTypeNo_def kAgwMsgExtQueryIPOInfo = 7300703; ///< 新股信息查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultIPOInfo = 7400703; ///< 新股信息查询结果
const MsgTypeNo_def kAgwMsgExtQueryAssetDebts = 7390700; ///< 资产负债查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultAssetDebts = 7490700; ///< 资产负债查询结果
const MsgTypeNo_def kAgwMsgExtQueryTargetStk = 7390702; ///< 标的证券查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultTargetStk = 7490702; ///< 标的证券查询结果
const MsgTypeNo_def kAgwMsgExtQueryCreditDebtsDetail = 7390703; ///< 信用客户融资融券合约明细查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultCreditDebtsDetail = 7490703; ///< 信用客户融资融券合约明细查询结果
const MsgTypeNo_def kAgwMsgExtQueryCreditDebts = 7390704; ///< 信用客户融资融券合约查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultCreditDebts = 7490704; ///< 信用客户融资融券合约查询结果
const MsgTypeNo_def kAgwMsgExtQueryFundMaxdraw = 7390701; ///< 可取资金查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultFundMaxdraw = 7490701; ///< 可取资金查询结果
const MsgTypeNo_def kAgwMsgExtQueryPledgeStk = 7390705; ///< 担保证券查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultPledgeStk = 7490705; ///< 担保证券查询结果
const MsgTypeNo_def kAgwMsgExtQueryCreditVote = 7390706; ///< 信用投票客户查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultCreditVote = 7490706; ///< 信用投票客户查询结果
const MsgTypeNo_def kAgwMsgExtQueryCreditVoteCount = 7390707; ///< 信用投票可投票数查询消息
const MsgTypeNo_def kAgwMsgExtQueryResultCreditVoteCount = 7490707; ///< 信用投票可投票数查询结果
const MsgTypeNo_def kAgwMsgETFQueryOrderEx = 7301729; ///< ETF申赎成交查询消息
const MsgTypeNo_def kAgwMsgETFQueryResultTradeOrder = 7401729; ///< 成交查询结果
const MsgTypeNo_def kAgwMsgETFRedemptionTradeDealER = 2012015; ///< ETF业务成交回报
class EXPORT_MACRO_DEFINE MsgMapper
{
public:
static std::map<MsgTypeNo_def, std::string> msg_mapper_g;
};
/*
 * @brief id string mapping
 */
inline std::string GetPacketName(const MsgTypeNo_def id)
{
    std::map<MsgTypeNo_def, std::string>::iterator iter = 
        MsgMapper::msg_mapper_g.find(id);
    if (iter != MsgMapper::msg_mapper_g.end())
    {
        return iter->second;
    }
    else
    {
        return "";
    }
}
/*
 * @brief 消息头
 */
class EXPORT_MACRO_DEFINE AgwHeader : public mp::RootPacket
{
public:
MsgTypeNo_def msg_type; 		///< 消息类型
SeqNum_def seq_num; 		///< 消息序号
BodyLength_def body_length; 		///< 消息长度
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 4 + 8 + 4;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwHeader& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 登录消息
 */
class EXPORT_MACRO_DEFINE AgwMsgLogin : public mp::RootPacket
{
public:
SenderCompID_def sender_comp_id; 		///< 发送方代码
TargetCompID_def target_comp_id; 		///< 接收方代码
HeartBtInt_def heart_bt_int; 		///< 心跳间隔时间
Password_def password; 		///< 用户登录密码
DefaultAppVerID_def default_app_ver_id; 		///< 协议版本
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 32 + 32 + 4 + 32 + 32;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgLogin& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgLogin;  }
};
/*
 * @brief 注销消息
 */
class EXPORT_MACRO_DEFINE AgwMsgLogout : public mp::RootPacket
{
public:
SessionStatus_def session_status; 		///< 退出时的会话状态
TextRes_def text; 		///< 注销原因
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 4 + 256;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgLogout& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgLogout;  }
};
/*
 * @brief 心跳消息
 */
class EXPORT_MACRO_DEFINE AgwMsgHeartBeat : public mp::RootPacket
{
public:
TestReqID_def test_req_id; 		///< 测试请求标志，全空表示心跳消息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 32;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgHeartBeat& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgHeartBeat;  }
};
/*
 * @brief 测试请求消息
 */
class EXPORT_MACRO_DEFINE AgwMsgTestRequest : public mp::RootPacket
{
public:
TestReqID_def test_req_id; 		///< 测试请求标志，全空表示心跳消息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 32;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgTestRequest& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgTestRequest;  }
};
/*
 * @brief 分区记录号信息数组
 */
class EXPORT_MACRO_DEFINE AgwNoPartitionArray : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 回报记录号
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 4;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwNoPartitionArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 回报同步消息
 */
class EXPORT_MACRO_DEFINE AgwMsgSync : public mp::RootPacket
{
public:
std::vector<AgwNoPartitionArray> no_parition_array; 		///< 分区记录号信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgSync& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgSync;  }
};
/*
 * @brief 回报同步结束消息
 */
class EXPORT_MACRO_DEFINE AgwMsgSyncFinish : public mp::RootPacket
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgSyncFinish& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgSyncFinish;  }
};
/*
 * @brief 实时控制指令消息
 */
class EXPORT_MACRO_DEFINE AgwMsgRealTimeControlInstruction : public mp::RootPacket
{
public:
TimeStamp_def send_time; 		///< 发送时间
InstructionID_def instruction_id; 		///< 指令ID，同一登陆会话唯一
InstructionType_def instruction_type; 		///< 网关支持的实时指令类型
String_def instruction_data; 		///< Json
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgRealTimeControlInstruction& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgRealTimeControlInstruction;  }
};
/*
 * @brief 
 */
class EXPORT_MACRO_DEFINE AgwMsgRealTimeControlInstructionResult : public mp::RootPacket
{
public:
InstanceID_def from; 		///< 结果源
TimeStamp_def send_time; 		///< 发送时间
InstructionID_def instruction_id; 		///< 指令ID
InstructionType_def instruction_type; 		///< 网关支持的实时指令类型
Result_def result; 		///< 处理结果
String_def instruction_data; 		///< Json
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgRealTimeControlInstructionResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgRealTimeControlInstructionResult;  }
};
/*
 * @brief 外部业务拒绝消息
 */
class EXPORT_MACRO_DEFINE AgwMsgBizRejection : public mp::RootPacket
{
public:
TimeStamp_def transact_time; 		///< 回报时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
MsgType_def msg_type; 		///< 被拒绝消息的消息类型
RejectReasonCode_def reject_reason_code; 		///< 订单拒绝原因
BusinessRejectText_def business_reject_text; 		///< 拒绝原因描述
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 8 + 4 + 2 + 50 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBizRejection& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBizRejection;  }
};
/*
 * @brief 登出请求
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLogoutReq : public mp::RootPacket
{
public:
Time_def time; 		///< 发起登验证时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLogoutReq& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustLogoutReq;  }
};
/*
 * @brief 登出应答
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLogoutResp : public mp::RootPacket
{
public:
Time_def time; 		///< 发起登验证时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
PermissonErrorCode_def permisson_error_code; 		///< 密码校验服务错误码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 8 + 16 + 16 + 10 + 12 + 1 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLogoutResp& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustLogoutResp;  }
};
/*
 * @brief 登入请求
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLoginReq : public AgwMsgCustLogoutReq
{
public:
OrderWay_def order_way; 		///< 委托方式
PWD_def password; 		///< 客户密码
Pwd_Type_def pwd_type; 		///< 密码加密类型
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLoginReq& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustLoginReq;  }
};
/*
 * @brief 登入应答证券账户重复组
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLoginRespAccountUnit : public mp::RootPacket
{
public:
AccountID_def account_id; 		///< 证券账户ID
MarketID_def market_id; 		///< 证券账户所属市场
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 12 + 2;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLoginRespAccountUnit& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 登入应答资金账户重复组
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLoginRespFundAccountUnit : public mp::RootPacket
{
public:
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
FundAccountAttr_def fund_account_attr; 		///< 资金账户属性
std::vector<AgwMsgCustLoginRespAccountUnit> account_array; 		///< 登入应答证券账户重复组
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLoginRespFundAccountUnit& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 登入应答
 */
class EXPORT_MACRO_DEFINE AgwMsgCustLoginResp : public mp::RootPacket
{
public:
SeqNum_def client_seq_id; 		///< 用户系统消息序号
TimeStamp_def transact_time; 		///< 处理时间
CustID_def cust_id; 		///< 客户号
CustName_def cust_name; 		///< 客户姓名
PermissonErrorCode_def permisson_error_code; 		///< 密码校验服务错误码
std::vector<AgwMsgCustLoginRespFundAccountUnit> fund_account_array; 		///< 登入应答资金账户重复组
UserInfo_def user_info; 		///< 用户私有信息
Qty_def pwd_err_time; 		///< 登录错误次数
BankCode_def bank_code; 		///< 银行代码
String_def pwd_ciphertext; 		///< 密码密文
Pwd_Type_def pwd_type; 		///< 密码加密类型
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustLoginResp& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustLoginResp;  }
};
/*
 * @brief 外部资金划拨请求
 */
class EXPORT_MACRO_DEFINE AgwMsgExtFundTransfer : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Bool_def is_account_partition; 		///< 账户是否按证券账户分区 1-是 0否
Currency_def currency; 		///< 货币种类
TransferWay_def transfer_way; 		///< 划拨方式：1-转入；2-转出
Amt_def transfer_value; 		///< 划拨金额
String_def remark; 		///< 备注
PWD_def password; 		///< 密码
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtFundTransfer& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtFundTransfer;  }
};
/*
 * @brief 外部资金划拨应答
 */
class EXPORT_MACRO_DEFINE AgwMsgExtFundTransferResult : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 索引号
RejectReasonCode_def reject_reason_code; 		///< 订单拒绝原因
String_def reject_desc; 		///< 拒绝原因描述
TimeStamp_def transact_time; 		///< 回报时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Currency_def currency; 		///< 货币种类
Amt_def init_amt; 		///< 日初可用余额
Amt_def order_frozen; 		///< 委托预冻结
Amt_def buy_trade; 		///< 买入成交
Amt_def sell_trade; 		///< 卖出成交
Amt_def unusual_frozen; 		///< 异常冻结
Amt_def unusual_frozen_cancel; 		///< 异常冻结取消
Amt_def fee_frozen; 		///< 冻结费用
Amt_def fee_trade; 		///< 成交费用
Amt_def today_in; 		///< 当日入金
Amt_def today_out; 		///< 当日出金
Amt_def temp_add; 		///< 临时调增
Amt_def temp_sub; 		///< 临时调减
Amt_def temp_frozen; 		///< 临时冻结
Amt_def temp_frozen_cancel; 		///< 临时冻结取消
Amt_def pre_balance; 		///< 调整前资金余额
Amt_def pre_available_t0; 		///< 调整前T+0可用资金
Amt_def pre_on_the_way_t1; 		///< 调整前T+1在途可用资金
Amt_def pre_on_the_way_t2; 		///< 调整前T+2在途可用资金
Amt_def pre_on_the_way_t3; 		///< 调整前T+3在途可用资金
Amt_def transfer_value; 		///< 转移金额
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtFundTransferResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtFundTransferResult;  }
};
/*
 * @brief 认证请求
 */
class EXPORT_MACRO_DEFINE AgwMsgCustAuthReq : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
CustID_def cust_id; 		///< 客户号
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustAuthReq& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustAuthReq;  }
};
/*
 * @brief 认证应答
 */
class EXPORT_MACRO_DEFINE AgwMsgCustAuthResp : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
CustID_def cust_id; 		///< 客户号
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 8 + 16 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCustAuthResp& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCustAuthResp;  }
};
/*
 * @brief 委托公共部分字段
 */
class EXPORT_MACRO_DEFINE AgwMsgOrder : public mp::RootPacket
{
public:
BusinessType_def business_type; 		///< 业务类型
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 市场ID
TimeStamp_def client_order_time; 		///< 委托时间
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金帐号
AccountID_def account_id; 		///< 账户id
Side_def side; 		///< 买卖方向
OrdType_def order_type; 		///< 订单类型
Price_def price; 		///< 委托价格
Qty_def order_qty; 		///< 申报数量(张)/ETF份额
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
OrderWay_def order_way; 		///< 委托方式
UserInfo_def user_info; 		///< 用户私有信息
PWD_def password; 		///< 密码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 带强制风险标识委托公共部分字段
 */
class EXPORT_MACRO_DEFINE AgwNewMsgOrder : public AgwMsgOrder
{
public:
EnforceFlag_def enforce_flag; 		///< 强制风险标识
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwNewMsgOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 现货集中竞价业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCashAuctionOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
CashMargin_def cash_margin; 		///< 信用标识
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCashAuctionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCashAuctionOrder;  }
};
/*
 * @brief 科创板股票盘后定价业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgTibAfterHourAuctionOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
CashMargin_def cash_margin; 		///< 信用标识
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgTibAfterHourAuctionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgTibAfterHourAuctionOrder;  }
};
/*
 * @brief 期权集中竞价业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgOptionAuctionOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
PositionEffect_def position_effect; 		///< Y 开仓/平仓,‘C’=平仓‘O’=开仓
CoveredOrUncovered_def covered_or_uncovered; 		///< 备兑标签,0=Covered 1=UnCovered
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOptionAuctionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOptionAuctionOrder;  }
};
/*
 * @brief 网上发行业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgIssueOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgIssueOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgIssueOrder;  }
};
/*
 * @brief 配股业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgRightsIssueOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgRightsIssueOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgRightsIssueOrder;  }
};
/*
 * @brief 期权行权业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgOptionExerciseOrder : public AgwNewMsgOrder
{
public:
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOptionExerciseOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOptionExerciseOrder;  }
};
/*
 * @brief 转托管业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgDesignationOrder : public AgwNewMsgOrder
{
public:
ClOrdNO_def orig_cli_ord_no; 		///< 客户订单编号
DesignationTransType_def designation_trans_type; 		///< 转托管注册类型
PBUID_def transferee_pbu_id; 		///< 转入交易单元代码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgDesignationOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgDesignationOrder;  }
};
/*
 * @brief 指定交易业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgDesignatedTransactionOrder : public AgwNewMsgOrder
{
public:
PBUID_def designated_pbu_id; 		///< 指定的交易单元
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgDesignatedTransactionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgDesignatedTransactionOrder;  }
};
/*
 * @brief 权证行权业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgWarrantExerciseOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgWarrantExerciseOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgWarrantExerciseOrder;  }
};
/*
 * @brief FDEP公共撤单消息
 */
class EXPORT_MACRO_DEFINE AgwMsgFDEPCancelOrder : public AgwMsgOrder
{
public:
ClOrdNO_def orig_cli_ord_no; 		///< 原委托的客户订单编号
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgFDEPCancelOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgFDEPCancelOrder;  }
};
/*
 * @brief 通用撤单消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCancelOrder : public AgwMsgOrder
{
public:
ClOrdNO_def orig_cli_ord_no; 		///< 原委托的客户订单编号
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCancelOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCancelOrder;  }
};
/*
 * @brief 一键撤单消息
 */
class EXPORT_MACRO_DEFINE AgwMsgBatchCancelOrder : public AgwMsgOrder
{
public:
BranchID_def branch_id; 		///< 营业部代码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBatchCancelOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBatchCancelOrder;  }
};
/*
 * @brief 期权撤单消息
 */
class EXPORT_MACRO_DEFINE AgwMsgOptionCancelOrder : public AgwMsgOrder
{
public:
ClOrdNO_def orig_cli_ord_no; 		///< 原委托的客户订单编号
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOptionCancelOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOptionCancelOrder;  }
};
/*
 * @brief 报告公共字段
 */
class EXPORT_MACRO_DEFINE AgwMsgOrderReport : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 索引号
BusinessType_def business_type; 		///< 业务类型
ClOrdNO_def client_order_no; 		///< 客户订单号
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 市场ID
ExecType_def exec_type; 		///< 当前委托执行类型
OrdStatus_def order_status; 		///< 当前申报的状态
CustID_def cust_id; 		///< 客户号ID
FundAccountID_def fund_account_id; 		///< 资金账户ID
AccountID_def account_id; 		///< 投资者帐号
Price_def price; 		///< 委托价格
Qty_def order_qty; 		///< 委托数量
Qty_def leaves_qty; 		///< 未成交数量
Qty_def cum_qty; 		///< 累计成交数量
Side_def side; 		///< 买卖方向
TimeStamp_def transact_time; 		///< 回报时间
UserInfo_def user_info; 		///< 用户私有信息
OrderID_def order_id; 		///< 交易所订单编号, 取值为数字
ClOrdID_def cl_ord_id; 		///< 申报合同号,上交所：以QP1开头,表示为交易所保证金强制平仓；以CV1开头,表示为交易所备兑强制平仓；
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOrderReport& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 成交执行报告
 */
class EXPORT_MACRO_DEFINE AgwMsgTradeExecutionReport : public AgwMsgOrderReport
{
public:
ExecID_def exec_id; 		///< 成交编号
Amt_def last_px; 		///< 成交价格
Qty_def last_qty; 		///< 成交数量
Amt_def total_value_traded; 		///< 成交金额
Amt_def fee; 		///< 费用
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgTradeExecutionReport& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 委托状态响应
 */
class EXPORT_MACRO_DEFINE AgwMsgOrderStatusAck : public AgwMsgOrderReport
{
public:
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClOrdNO_def orig_cli_ord_no; 		///< 对于撤单返回的状态响应，为原始委托的客户合同号，指示被撤消订单的ClOrdID; 对于委托确认，取值为空
Amt_def frozen_trade_value; 		///< 冻结交易金额
Amt_def frozen_fee; 		///< 冻结费用
RejectReasonCode_def reject_reason_code; 		///< 拒绝代码
OrdRejReason_def ord_rej_reason; 		///< 拒绝原因描述信息
OrdType_def ord_type; 		///< 订单类型
TimeInForce_def time_in_force; 		///< 订单有效时间类型
PositionEffect_def position_effect; 		///< 开仓/平仓
CoveredOrUncovered_def covered_or_uncovered; 		///< 备兑标签
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 8 + 8 + 8 + 8 + 2 + 5 + 1 + 1 + 1 + 1 + 6;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOrderStatusAck& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOrderStatusAck;  }
};
/*
 * @brief 现货集中竞价业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgCashAuctionTradeER : public AgwMsgTradeExecutionReport
{
public:
CashMargin_def cash_margin; 		///< 信用标识
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8 + 1;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCashAuctionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCashAuctionTradeER;  }
};
/*
 * @brief 期权集中竞价业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgOptionAuctionTradeER : public AgwMsgTradeExecutionReport
{
public:
PositionEffect_def position_effect; 		///< Y 开仓/平仓,‘C’=平仓‘O’=开仓
CoveredOrUncovered_def covered_or_uncovered; 		///< 备兑标签,0=Covered 1=UnCovered
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8 + 1 + 1 + 6;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOptionAuctionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOptionAuctionTradeER;  }
};
/*
 * @brief 科创板股票盘后定价业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgTibAfterHourAuctionTradeER : public AgwMsgTradeExecutionReport
{
public:
CashMargin_def cash_margin; 		///< 信用标识
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8 + 1;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgTibAfterHourAuctionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgTibAfterHourAuctionTradeER;  }
};
/*
 * @brief 质押式回购集中竞价业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgRepoAuctionOrder : public AgwNewMsgOrder
{
public:
Amt_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效时间类型
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgRepoAuctionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgRepoAuctionOrder;  }
};
/*
 * @brief 质押式回购集中竞价业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgRepoAuctionTradeER : public AgwMsgTradeExecutionReport
{
public:
Date8_def maturity_date; 		///< 到期日
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgRepoAuctionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgRepoAuctionTradeER;  }
};
/*
 * @brief 债券转股回售委托
 */
class EXPORT_MACRO_DEFINE AgwMsgSwapPutbackOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgSwapPutbackOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgSwapPutbackOrder;  }
};
/*
 * @brief 期权强平业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgOptionAuctionForceCloseOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
PositionEffect_def position_effect; 		///< Y 开仓/平仓,‘C’=平仓‘O’=开仓
CoveredOrUncovered_def covered_or_uncovered; 		///< 备兑标签,0=Covered 1=UnCovered
AccountSubCode_def account_sub_code; 		///< 账户子编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgOptionAuctionForceCloseOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgOptionAuctionForceCloseOrder;  }
};
/*
 * @brief 开放式基金申赎业务订单
 */
class EXPORT_MACRO_DEFINE AgwMsgLOFOrder : public AgwNewMsgOrder
{
public:
Amt_def cash_order_qty; 		///< 申购金额
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgLOFOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgLOFOrder;  }
};
/*
 * @brief 开放式基金申赎成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgLOFTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgLOFTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgLOFTradeER;  }
};
/*
 * @brief 质押出入库业务消息
 */
class EXPORT_MACRO_DEFINE AgwMsgPledgeInOrOutOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgPledgeInOrOutOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgPledgeInOrOutOrder;  }
};
/*
 * @brief 质押出入库成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgPledgeInOrOutTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgPledgeInOrOutTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgPledgeInOrOutTradeER;  }
};
/*
 * @brief 密码服务业务消息
 */
class EXPORT_MACRO_DEFINE AgwMsgPasswordServiceOrder : public AgwNewMsgOrder
{
public:
ValidationCode_def validation_code; 		///< 密码激活校验号
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgPasswordServiceOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgPasswordServiceOrder;  }
};
/*
 * @brief 网络投票业务消息
 */
class EXPORT_MACRO_DEFINE AgwMsgNetVotingOrder : public AgwNewMsgOrder
{
public:
GeneralMeetingSeq_def general_meeting_seq; 		///< 股东大会编码
VotingProposal_def voting_proposal; 		///< 投票议案编号
VotingPreference_def voting_preference; 		///< 投票意向
VotingSegment_def voting_segment; 		///< 分段统计段号（预留）
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgNetVotingOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgNetVotingOrder;  }
};
/*
 * @brief 要约收购业务消息
 */
class EXPORT_MACRO_DEFINE AgwMsgTenderOfferOrder : public AgwNewMsgOrder
{
public:
Tenderer_def tenderer; 		///< 要约收购参与人编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgTenderOfferOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgTenderOfferOrder;  }
};
/*
 * @brief ETF申赎业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgETFRedemptionOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFRedemptionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgETFRedemptionOrder;  }
};
/*
 * @brief 成分股数组
 */
class EXPORT_MACRO_DEFINE AgwMsgConstituentStockUnit : public mp::RootPacket
{
public:
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 市场ID
Qty_def qty; 		///< 成交数量
Amt_def amt; 		///< 成交金额
Amt_def price; 		///< 成交价格
ETFTradeReportType_def etf_trade_report_type; 		///< ETF成交回报类型
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 2 + 8 + 8 + 8 + 1;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgConstituentStockUnit& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief ETF申赎业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgETFRedemptionTradeER : public AgwMsgTradeExecutionReport
{
public:
std::vector<AgwMsgConstituentStockUnit> constituent_stock; 		///< 成分股与资金信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFRedemptionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgETFRedemptionTradeER;  }
};
/*
 * @brief 债券分销委托
 */
class EXPORT_MACRO_DEFINE AgwMsgBondDistributionOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBondDistributionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBondDistributionOrder;  }
};
/*
 * @brief 债券分销成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgBondDistributionTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBondDistributionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBondDistributionTradeER;  }
};
/*
 * @brief 分级基金实时拆分合并委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgStructuredFundOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgStructuredFundOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgStructuredFundOrder;  }
};
/*
 * @brief 分级基金实时拆分合并成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgStructuredFundTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgStructuredFundTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgStructuredFundTradeER;  }
};
/*
 * @brief 深结算dcom撤单委托
 */
class EXPORT_MACRO_DEFINE AgwMsgDcomCancelOrder : public AgwMsgOrder
{
public:
ClOrdNO_def orig_cli_ord_no; 		///< 原委托的客户订单编号
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgDcomCancelOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgDcomCancelOrder;  }
};
/*
 * @brief 信用账户普通买入/普通卖出业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCreditAuctionOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCreditAuctionOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCreditAuctionOrder;  }
};
/*
 * @brief 信用账户普通买入/普通卖出成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgCreditAuctionTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCreditAuctionTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCreditAuctionTradeER;  }
};
/*
 * @brief 融资买入/融券卖出业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgMarginTradingOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgMarginTradingOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgMarginTradingOrder;  }
};
/*
 * @brief 融资买入/融券卖出成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgMarginTradingTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgMarginTradingTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgMarginTradingTradeER;  }
};
/*
 * @brief 担保品划转业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCollateralInOrOutOrder : public AgwNewMsgOrder
{
public:
FundAccountID_def opp_fund_account_id; 		///< 对方资金账户ID
AccountID_def opp_account_id; 		///< 对方证券账户ID
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCollateralInOrOutOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCollateralInOrOutOrder;  }
};
/*
 * @brief 第三方担保品转入直达信用节点业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgThirdCollateralInOrder : public AgwNewMsgOrder
{
public:
FundAccountID_def opp_fund_account_id; 		///< 对方资金账户ID(填信用资金账户)
AccountID_def opp_account_id; 		///< 对方证券账户ID(填信用资金账户)
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgThirdCollateralInOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgThirdCollateralInOrder;  }
};
/*
 * @brief 买券还券业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgBuySecuRepayOrder : public AgwNewMsgOrder
{
public:
Price_def stop_px; 		///< 止损价
Qty_def min_qty; 		///< 最低成交数量
MaxPriceLevels_def max_price_levels; 		///< 最多成交价位数
TimeInForce_def time_in_force; 		///< 订单有效期
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBuySecuRepayOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBuySecuRepayOrder;  }
};
/*
 * @brief 买券还券成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgBuySecuRepayTradeER : public AgwMsgTradeExecutionReport
{
public:
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 0 + 1 + 4 + 1 + 8 + 8 + 2 + 1 + 1 + 16 + 16 + 12 + 8 + 8 + 8 + 8 + 1 + 8 + 64 + 16 + 10 + 32 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgBuySecuRepayTradeER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgBuySecuRepayTradeER;  }
};
/*
 * @brief 现券还券业务委托消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCurSecuRepayOrder : public AgwNewMsgOrder
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCurSecuRepayOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCurSecuRepayOrder;  }
};
/*
 * @brief 直接还款请求
 */
class EXPORT_MACRO_DEFINE AgwMsgExtDirectRepay : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Bool_def is_account_partition; 		///< 账户是否按证券账户分区 1-是 0否
Currency_def currency; 		///< 货币种类
OrderWay_def order_way; 		///< 委托方式
Amt_def repay_value; 		///< 还款金额
String_def remark; 		///< 备注
PWD_def password; 		///< 密码
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtDirectRepay& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtDirectRepay;  }
};
/*
 * @brief 直接还款应答
 */
class EXPORT_MACRO_DEFINE AgwMsgExtDirectRepayResult : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 索引号
RejectReasonCode_def reject_reason_code; 		///< 订单拒绝原因
String_def reject_desc; 		///< 拒绝原因描述
TimeStamp_def transact_time; 		///< 回报时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Currency_def currency; 		///< 货币种类
Amt_def repay_value; 		///< 还款金额
Amt_def real_repay_value; 		///< 实际还款金额
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtDirectRepayResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtDirectRepayResult;  }
};
/*
 * @brief 信用投票业务消息
 */
class EXPORT_MACRO_DEFINE AgwMsgCreditVote : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
PWD_def password; 		///< 密码
Currency_def currency; 		///< 货币种类
OrderWay_def order_way; 		///< 委托方式
Qty_def order_qty; 		///< 投票数量
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 市场类型
GeneralMeetingSeq_def general_meeting_seq; 		///< 股东大会编码
VotingProposal_def voting_proposal; 		///< 投票议案编号
VotingPreference_def voting_preference; 		///< 投票意向
String_def remark; 		///< 备注
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCreditVote& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCreditVote;  }
};
/*
 * @brief 信用投票业务应答
 */
class EXPORT_MACRO_DEFINE AgwMsgCreditVoteResult : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 索引号
RejectReasonCode_def reject_reason_code; 		///< 订单拒绝原因
String_def reject_desc; 		///< 拒绝原因描述
TimeStamp_def transact_time; 		///< 回报时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgCreditVoteResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgCreditVoteResult;  }
};
/*
 * @brief 指定合约还款请求
 */
class EXPORT_MACRO_DEFINE AgwMsgExtDirectRepayAppoint : public mp::RootPacket
{
public:
TimeStamp_def time; 		///< 发起时间
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Bool_def is_account_partition; 		///< 账户是否按证券账户分区 1-是 0否
Currency_def currency; 		///< 货币种类
OrderWay_def order_way; 		///< 委托方式
Date8_def contract_date; 		///< 合约委托日期
Sno_def contract_sno; 		///< 合约流水号
Amt_def repay_value; 		///< 还款金额
String_def remark; 		///< 备注
PWD_def password; 		///< 密码
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtDirectRepayAppoint& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtDirectRepayAppoint;  }
};
/*
 * @brief 指定合约还款应答
 */
class EXPORT_MACRO_DEFINE AgwMsgExtDirectRepayAppointResult : public mp::RootPacket
{
public:
AgwPartition_def partition; 		///< 分区号
AgwIndex_def index; 		///< 索引号
RejectReasonCode_def reject_reason_code; 		///< 订单拒绝原因
String_def reject_desc; 		///< 拒绝原因描述
TimeStamp_def transact_time; 		///< 回报时间
SeqNum_def client_seq_id; 		///< 用户系统消息序号
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金账户ID
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def account_id; 		///< 账户ID
Currency_def currency; 		///< 货币种类
Amt_def repay_value; 		///< 还款金额
Amt_def real_repay_value; 		///< 实际还款金额
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtDirectRepayAppointResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtDirectRepayAppointResult;  }
};
/*
 * @brief 查询公共报文
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryBase : public mp::RootPacket
{
public:
CustID_def cust_id; 		///< 客户号ID
FundAccountID_def fund_account_id; 		///< 资金账户ID
AccountID_def account_id; 		///< 账户ID
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
PWD_def password; 		///< 客户密码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryBase& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 查询结果公共报文
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultBase : public mp::RootPacket
{
public:
CustID_def cust_id; 		///< 客户号ID
FundAccountID_def fund_account_id; 		///< 资金账户ID
AccountID_def account_id; 		///< 账户ID
SeqNum_def client_seq_id; 		///< 用户系统消息序号
QueryResultCode_def query_result_code; 		///< 查询结果代码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 16 + 16 + 12 + 8 + 2 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultBase& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 最大可委托数查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryMaxOrderQty : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 市场ID
SecurityID_def security_id; 		///< 证券代码
BusinessType_def business_type; 		///< 业务类型
Side_def side; 		///< 买卖方向
Price_def price; 		///< 委托价格
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryMaxOrderQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryMaxOrderQty;  }
};
/*
 * @brief 增强型最大可委托数查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgNewExtQueryMaxOrderQty : public AgwMsgExtQueryMaxOrderQty
{
public:
OrdType_def order_type; 		///< 订单类型
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgNewExtQueryMaxOrderQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgNewExtQueryMaxOrderQty;  }
};
/*
 * @brief 最大可委托数查询结果消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryMaxOrderQtyResult : public AgwMsgExtQueryResultBase
{
public:
Qty_def max_order_qty; 		///< 最大可委托数
Qty_def theoretical_order_qty; 		///< 理论可委托数
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryMaxOrderQtyResult& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryMaxOrderQtyResult;  }
};
/*
 * @brief 合约账户持仓查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryAccountContractShare : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 市场ID
SecurityID_def security_id; 		///< 证券代码
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填 0表示不指定
AccountSubCode_def account_sub_code; 		///< 账号子编码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryAccountContractShare& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryAccountContractShare;  }
};
/*
 * @brief 合约账户持仓结果组合
 */
class EXPORT_MACRO_DEFINE AgwContractArray : public mp::RootPacket
{
public:
SecurityID_def security_id; 		///< 合约编码
MarketID_def market_id; 		///< 市场ID
Qty_def buy_init_value; 		///< 买开仓日初持仓量
Qty_def buy_value; 		///< 买开仓可用持仓量
Qty_def buy_frozen_value; 		///< 买开仓冻结量
Qty_def sell_init_value; 		///< 卖开仓日初持仓量
Qty_def sell_value; 		///< 卖开仓可用持仓量
Qty_def sell_frozen_value; 		///< 卖开仓冻结量
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 2 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwContractArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 合约账户持仓查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultAccountContractShare : public AgwMsgExtQueryResultBase
{
public:
AccountSubCode_def account_sub_code; 		///< 账号子编码
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
std::vector<AgwContractArray> contract_array; 		///< 组合结果
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultAccountContractShare& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultAccountContractShare;  }
};
/*
 * @brief 指定合约账户资金查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryAccountContractFund : public AgwMsgExtQueryBase
{
public:
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryAccountContractFund& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryAccountContractFund;  }
};
/*
 * @brief 指定合约账户资金查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultAccountContractFund : public AgwMsgExtQueryResultBase
{
public:
Amt_def init_total_amt; 		///< 日初总资金
Amt_def init_available_amt; 		///< 日初可用资金
Amt_def available_amt; 		///< 可用资金
Amt_def frozen_amt; 		///< 冻结资金
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultAccountContractFund& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultAccountContractFund;  }
};
/*
 * @brief 成交查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryTradeOrder : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券代码,填空查所有
BusinessType_def business_type; 		///< 业务类型,填0查所有
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
ReturnSeq_def return_seq; 		///< 返回顺序，按时间排序
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryTradeOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryTradeOrder;  }
};
/*
 * @brief 成交查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwTradeOrderArray : public mp::RootPacket
{
public:
BusinessType_def business_type; 		///< 业务类型
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券简称
MarketID_def market_id; 		///< 证券所属市场
AccountID_def account_id; 		///< 证券账户
Side_def side; 		///< 买卖方向,填0查所有
OrdType_def ord_type; 		///< 订单类别
ExecType_def exec_type; 		///< 当前订单执行类型
ExecID_def exec_id; 		///< 执行编号
ClOrdNO_def cl_ord_no; 		///< 客户订单编号
OrderID_def order_id; 		///< 交易所订单编号, 取值为数字
ClOrdID_def cl_ord_id; 		///< 申报合同号,上交所：以QP1开头,表示为交易所保证金强制平仓；以CV1开头,表示为交易所备兑强制平仓；
TimeStamp_def transact_time; 		///< 客户委托时间
Price_def last_px; 		///< 成交价格
Qty_def last_qty; 		///< 成交数量
Amt_def total_value_traded; 		///< 成交金额,精确到分
Amt_def fee; 		///< 费用
Price_def order_price; 		///< 委托价格
Qty_def order_qty; 		///< 委托数量
BSFlag2_def bs_flag2; 		///< 集中交易买卖类别
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 8 + 40 + 2 + 12 + 1 + 1 + 1 + 32 + 8 + 16 + 10 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 2 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwTradeOrderArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 成交查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultTradeOrder : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 成交记录总数
std::vector<AgwTradeOrderArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultTradeOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultTradeOrder;  }
};
/*
 * @brief 资金查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryFund : public AgwMsgExtQueryBase
{
public:
Currency_def currency; 		///< 货币种类
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryFund& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryFund;  }
};
/*
 * @brief 资金查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultFund : public AgwMsgExtQueryResultBase
{
public:
Amt_def leaves_value; 		///< 资金余额
Amt_def init_leaves_value; 		///< 日初资金金额
Amt_def available_t0; 		///< T+0可用资金
Amt_def available_t1; 		///< T+1可用资金
Amt_def available_t2; 		///< T+2可用资金
Amt_def available_t3; 		///< T+3可用资金
Amt_def available_tall; 		///< T+All可用资金
Amt_def frozen_all; 		///< 当前所有冻结
Amt_def total_assert; 		///< 总资产
Amt_def share_total_assert; 		///< 证券总资产
Amt_def share_total_profit_loss; 		///< 证券总盈亏
Amt_def share_today_profit_loss; 		///< 证券当日盈亏
AgwPartition_def te_partition_no; 		///< 所属分区号
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultFund& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultFund;  }
};
/*
 * @brief 证券账户组
 */
class EXPORT_MACRO_DEFINE AgwAccountIDArray : public mp::RootPacket
{
public:
AccountID_def account_id; 		///< 证券账户
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 12;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwAccountIDArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 股份持仓查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryShare : public AgwMsgExtQueryBase
{
public:
std::vector<AgwAccountIDArray> account_id_array; 		///< 证券账户组
BusinessType_def business_type; 		///< 业务类型,必填
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券代码,填空查所有
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryShare& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryShare;  }
};
/*
 * @brief 股份查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwShareArray : public mp::RootPacket
{
public:
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券简称
MarketID_def market_id; 		///< 证券所属市场
AccountID_def account_id; 		///< 证券账户
Qty_def init_qty; 		///< 日初持仓量
Qty_def leaves_qty; 		///< 剩余股份数量（包含当日买入部分）
Qty_def available_qty; 		///< 可用股份数量
Amt_def profit_loss; 		///< 浮动盈亏
Amt_def market_value; 		///< 市值
Amt_def cost_price; 		///< 成本价
Currency_def currency; 		///< 货币类型
Amt_def income; 		///< 累计盈亏
Amt_def buy_cost; 		///< 当前成本（金额）
Bool_def mkt_cal_flag; 		///< 市值计算标识
Price_def last_price; 		///< 最新价格
SecurityType_def stk_type; 		///< 证券类型
Qty_def stk_diff; 		///< 可申赎数量
PBUID_def seat; 		///< 席位代码
Price_def profit_cost; 		///< 盈亏成本
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 40 + 2 + 12 + 8 + 8 + 8 + 8 + 8 + 8 + 4 + 8 + 8 + 1 + 8 + 2 + 8 + 6 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwShareArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 股份查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultShare : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
std::vector<AgwShareArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultShare& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultShare;  }
};
/*
 * @brief 新股发行申购额度查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryIPOQty : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryIPOQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryIPOQty;  }
};
/*
 * @brief 新股发行申购额度查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwIPOQtyArray : public mp::RootPacket
{
public:
MarketID_def market_id; 		///< 证券所属市场
Qty_def subscription_quota; 		///< 申购额度
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 2 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwIPOQtyArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 新股发行申购额度查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultIPOQty : public AgwMsgExtQueryResultBase
{
public:
std::vector<AgwIPOQtyArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultIPOQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultIPOQty;  }
};
/*
 * @brief 科创板新股发行申购额度查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryTIBIPOQty : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryTIBIPOQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryTIBIPOQty;  }
};
/*
 * @brief 科创板新股发行申购额度查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultTIBIPOQty : public AgwMsgExtQueryResultBase
{
public:
std::vector<AgwIPOQtyArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultTIBIPOQty& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultTIBIPOQty;  }
};
/*
 * @brief 成交汇总查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryTradeCollect : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券ID
BusinessType_def business_type; 		///< 业务类型,必填。填0查所有
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryTradeCollect& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryTradeCollect;  }
};
/*
 * @brief 成交汇总查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwTradeCollectArray : public mp::RootPacket
{
public:
BusinessType_def business_type; 		///< 业务代码
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券简称
MarketID_def market_id; 		///< 证券所属市场
AccountID_def account_id; 		///< 证券账户
Price_def buy_avg_price; 		///< 买入均价
Qty_def buy_cum_qty; 		///< 买入累计总量
Amt_def buy_total_value_traded; 		///< 买入成交总金额，精确到3位小数
Price_def sell_avg_price; 		///< 卖出均价
Qty_def sell_cum_qty; 		///< 卖出累计总量
Amt_def sell_total_value_traded; 		///< 卖出成交金额，精确到3位小数
Amt_def total_value_traded; 		///< 买卖合计成交金额，精确到3位小数
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 8 + 40 + 2 + 12 + 8 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwTradeCollectArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 成交汇总查询结果
 */
class EXPORT_MACRO_DEFINE AgwExtQueryResultTradeCollect : public AgwMsgExtQueryResultBase
{
public:
Price_def all_buy_avg_price; 		///< 总买入均价
Qty_def all_buy_cum_qty; 		///< 总买入累计总量
Amt_def all_buy_total_value_traded; 		///< 总买入成交总金额，精确到3位小数
Price_def all_sell_avg_price; 		///< 总卖出均价
Qty_def all_sell_cum_qty; 		///< 总卖出累计总量
Amt_def all_sell_total_value_traded; 		///< 总卖出成交金额，精确到3位小数
Amt_def all_total_value_traded; 		///< 总买卖合计成交金额，精确到3位小数
std::vector<AgwTradeCollectArray> trade_collect_array; 		///< 成交汇总查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwExtQueryResultTradeCollect& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwExtQueryResultTradeCollect;  }
};
/*
 * @brief 订单查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryOrder : public AgwMsgExtQueryBase
{
public:
ClOrdNO_def cl_ord_no; 		///< 客户订单编号,同一个客户当天唯一,填0查所有
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券代码,填空查所有
BusinessType_def business_type; 		///< 业务类型,填0查所有
Side_def side; 		///< 买卖方向,填0查所有
OrderQueryCondition_def order_query_condition; 		///< 委托查询条件
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填 0表示不指定
ReturnSeq_def return_seq; 		///< 返回顺序，按时间排序
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryOrder;  }
};
/*
 * @brief 委托查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwOrderArray : public mp::RootPacket
{
public:
BusinessType_def business_type; 		///< 业务类型
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券简称
MarketID_def market_id; 		///< 证券所属市场
AccountID_def account_id; 		///< 证券账户
Side_def side; 		///< 买卖方向
OrdType_def ord_type; 		///< 订单类别
OrdStatus_def ord_status; 		///< 原订单当前状态
TimeStamp_def transact_time; 		///< 客户委托时间
Price_def order_price; 		///< 委托价格
Price_def exec_price; 		///< 平均成交价格
Qty_def order_qty; 		///< 委托数量
Qty_def leaves_qty; 		///< 未成交部分的数量
Qty_def cum_qty; 		///< 累计成交数量
ClOrdNO_def cl_ord_no; 		///< 客户订单编号
OrderID_def order_id; 		///< 交易所订单编号, 取值为数字
ClOrdID_def cl_ord_id; 		///< 申报合同号,上交所：以QP1开头,表示为交易所保证金强制平仓；以CV1开头,表示为交易所备兑强制平仓；
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClOrdNO_def orig_cl_ord_no; 		///< 原委托的客户订单编号
Amt_def frozen_trade_value; 		///< 冻结交易金额
Amt_def frozen_fee; 		///< 冻结费用
RejectReasonCode_def reject_reason_code; 		///< 拒绝代码
OrdRejReason_def ord_rej_reason; 		///< 拒绝原因描述信息
Currency_def money_type; 		///< 货币种类
CancelFlag_def cancel_flag; 		///< 撤单标志
Qty_def cancel_qty; 		///< 撤单数量
BSFlag2_def bs_flag2; 		///< 集中交易买卖类别
PBUID_def pbu_id; 		///< 投资者所属交易单元,交易席位
BranchID_def branch_id; 		///< 营业部代码
Amt_def total_value_traded; 		///< 成交金额,精确到分
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 8 + 40 + 2 + 12 + 1 + 1 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 16 + 10 + 8 + 8 + 8 + 8 + 2 + 5 + 4 + 1 + 8 + 2 + 6 + 10 + 8 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwOrderArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 订单查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultOrder : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 委托记录总数
std::vector<AgwOrderArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultOrder;  }
};
/*
 * @brief 按证券账户划转资金请求消息
 */
class EXPORT_MACRO_DEFINE AgwExternalInsTETransFundReq : public mp::RootPacket
{
public:
TimeStamp_def client_time; 		///< 客户发起时间
CustID_def cust_id; 		///< 客户号
PWD_def password; 		///< 客户密码
FundAccountID_def fund_account_id; 		///< 资金帐号
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
AccountID_def fund_out_account_id; 		///< 资金转出账户ID
MarketID_def fund_out_market_id; 		///< 资金转出市场ID
AccountID_def fund_in_account_id; 		///< 资金转入账户ID
MarketID_def fund_in_market_id; 		///< 资金转入市场ID
Amt_def value; 		///< 划拨金额
Currency_def currency; 		///< 货币种类
SeqNum_def client_seq_id; 		///< 用户系统消息序号
ClientFeatureCode_def client_feature_code; 		///< 终端识别码
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwExternalInsTETransFundReq& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwExternalInsTETransFundReq;  }
};
/*
 * @brief 按证券账户划转资金响应消息
 */
class EXPORT_MACRO_DEFINE AgwExternalInsTETransFundResp : public mp::RootPacket
{
public:
CustID_def cust_id; 		///< 客户号
FundAccountID_def fund_account_id; 		///< 资金帐号
BranchID_def branch_id; 		///< origid+营业部ID,各占5个字节
ExternalInsErrorCode_def external_ins_error_code; 		///< 外部指令错误代码
SeqNum_def client_seq_id; 		///< 用户系统消息序号
UserInfo_def user_info; 		///< 用户私有信息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 16 + 16 + 10 + 2 + 8 + 64;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwExternalInsTETransFundResp& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwExternalInsTETransFundResp;  }
};
/*
 * @brief 证券信息查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwSecurityInfoArray : public mp::RootPacket
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
Currency_def currency; 		///< 货币类型
SecuritySymbol_def security_symbol; 		///< 证券名称
SecurityID_def security_id; 		///< 证券代码
SecurityType_def security_type; 		///< 证券类别
PriceTick_def price_tick; 		///< 证券价位
Price_def limit_up; 		///< 涨停价格
Price_def limit_down; 		///< 跌停价格
SecurityStatus_def security_status; 		///< 证券状态
BondInterest_def bond_interest; 		///< 债券应计利息
Qty_def max_qty; 		///< 最大数量
Qty_def min_qty; 		///< 最小数量
PriceTick_def buy_tick; 		///< 买入最小单位
PriceTick_def sale_tick; 		///< 卖出最小单位
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 2 + 4 + 40 + 8 + 2 + 8 + 8 + 8 + 1 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwSecurityInfoArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 证券信息查询
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQuerySecurityInfo : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场
SecurityID_def security_id; 		///< 证券代码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQuerySecurityInfo& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQuerySecurityInfo;  }
};
/*
 * @brief 证券信息查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultSecurityInfo : public AgwMsgExtQueryResultBase
{
public:
std::vector<AgwSecurityInfoArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultSecurityInfo& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultSecurityInfo;  }
};
/*
 * @brief 行情信息查询
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryMd : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券代码
BranchID_def branch_id; 		///< 分支代码
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryMd& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryMd;  }
};
/*
 * @brief 行情信息查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultMd : public AgwMsgExtQueryResultBase
{
public:
MarketID_def market_id; 		///< 证券所属市场
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券名称
SecurityType_def security_type; 		///< 证券类别
Currency_def currency; 		///< 货币类型
Price_def last_price; 		///< 最近价格
Price_def limit_up; 		///< 涨停价格
Price_def limit_down; 		///< 跌停价格
BondInterest_def bond_interest; 		///< 债券应计利息
Price_def newest_price; 		///< 最新价格
Price_def open_price; 		///< 开盘价格
Price_def close_price; 		///< 收盘价格
Price_def high_price; 		///< 最高价格
Price_def low_price; 		///< 最低价格
Price_def buy_price1; 		///< 买一价
Price_def buy_price2; 		///< 买二价
Price_def buy_price3; 		///< 买三价
Price_def buy_price4; 		///< 买四价
Price_def buy_price5; 		///< 买五价
Price_def sale_price1; 		///< 卖一价
Price_def sale_price2; 		///< 卖盘二
Price_def sale_price3; 		///< 卖盘三
Price_def sale_price4; 		///< 卖盘四
Price_def sale_price5; 		///< 卖盘五
Qty_def buy_qty1; 		///< 买盘一
Qty_def buy_qty2; 		///< 买盘二
Qty_def buy_qty3; 		///< 买盘三
Qty_def buy_qty4; 		///< 买盘四
Qty_def buy_qty5; 		///< 买盘五
Qty_def sale_qty1; 		///< 卖盘一
Qty_def sale_qty2; 		///< 卖盘二
Qty_def sale_qty3; 		///< 卖盘三
Qty_def sale_qty4; 		///< 卖盘四
Qty_def sale_qty5; 		///< 卖盘五
Qty_def total_volume_trade; 		///< 成交总量
Amt_def total_value_trade; 		///< 成交总金额
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 2 + 8 + 40 + 2 + 4 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultMd& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultMd;  }
};
/*
 * @brief 新股信息查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryIPOInfo : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 证券所属市场
IPOType_def ipo_type; 		///< 配售类型
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryIPOInfo& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryIPOInfo;  }
};
/*
 * @brief 网上发行数组
 */
class EXPORT_MACRO_DEFINE AgwIPOInfoArray : public mp::RootPacket
{
public:
MarketID_def market_id; 		///< 证券所属市场
SecurityID_def security_id; 		///< 证券代码
SecurityType_def security_type; 		///< 证券类型
SecuritySymbol_def security_symbol; 		///< 证券简称
Price_def price_upper_limit; 		///< 最高价格
Price_def price_lower_limit; 		///< 最低价格
IPOType_def ipo_type; 		///< 配售类型
Date8_def start_date; 		///< 开始日期
Date8_def end_date; 		///< 结束日期
Qty_def purchase_unit; 		///< 申购单位
Qty_def max_purchase_qty; 		///< 最大申购数量
IPOType_def send_status; 		///< 客户是否申购
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 2 + 8 + 2 + 40 + 8 + 8 + 2 + 8 + 8 + 8 + 8 + 2;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwIPOInfoArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 新股信息查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultIPOInfo : public AgwMsgExtQueryResultBase
{
public:
std::vector<AgwIPOInfoArray> order_array; 		///< 网上发行数组
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultIPOInfo& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultIPOInfo;  }
};
/*
 * @brief 资产负债查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryAssetDebts : public AgwMsgExtQueryBase
{
public:
Currency_def currency; 		///< 货币种类
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryAssetDebts& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryAssetDebts;  }
};
/*
 * @brief 资产负债查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultAssetDebts : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 营业部代码
Currency_def currency; 		///< 货币种类
CreditStatus_def credit_status; 		///< 信用状态
CreditRatio_def keep_rate; 		///< 维持担保比例
Amt_def asset; 		///< 总资产（折算后）
Amt_def old_asset; 		///< 原总资产
Amt_def liability; 		///< 总负债
Amt_def fund_bal; 		///< 资金余额
Amt_def fund_avl; 		///< 资金可用数
Amt_def fund_avl_frz; 		///< 资金可用冻结数
Amt_def d_sale_amt_bal; 		///< 融券卖出资金余额
Amt_def d_sale_amt_frz; 		///< 融券卖出资金冻结数
Amt_def credit_buy; 		///< 买券还券使用成交
Amt_def credit_sale; 		///< 融券卖出成交
Amt_def credit_buy_sale; 		///< 融券卖出及买券还券差额
Amt_def relese_amt_unfrz; 		///< 当日累计释放
Amt_def credit_amt; 		///< 当日累计释放（息费偿还部分）
Amt_def hbjj_bal; 		///< 使用融券卖出资金购买货基的昨日存量
Amt_def hbjj_buy; 		///< 使用融券卖出资金当日买入货基冻结
Amt_def hbjj_sale; 		///< 专用资金货基当日退还
Amt_def hbjj_amt; 		///< 专用资金货基累计占用
Amt_def hbjj_remain_amt; 		///< 专用资金货基剩余占用
Amt_def gage_mkt_avl; 		///< 担保证券市值
Amt_def gage_mkt_avl_zs; 		///< 修正市值
Amt_def gage_mkt_avl_db; 		///< 担保持仓市值下的标的持仓市值
Amt_def rights_amt; 		///< 修正资产
Amt_def f_deal_avl; 		///< 应付融资款
Amt_def fund_fee; 		///< 融资利息
Amt_def fund_pro_fee; 		///< 融资承诺费
Amt_def fund_manage_fee; 		///< 融资管理费
Amt_def fund_over_due_fee; 		///< 融资逾期利息
Amt_def fund_puni_fee; 		///< 融资罚息
Amt_def fund_puni_debts; 		///< 融资逾期本金罚息
Amt_def fund_manage_over_due; 		///< 融资逾期管理费
Amt_def fund_manage_puni_ntr; 		///< 融资逾期管理费罚息
Amt_def f_fee; 		///< 融资息费合计
Amt_def f_total_debts; 		///< 融资负债合计
Amt_def deal_f_mkt_avl; 		///< 应付融券市值
Amt_def stk_fee; 		///< 融券息费
Amt_def stk_pro_fee; 		///< 融券承诺费
Amt_def stk_manage_fee; 		///< 融券管理费
Amt_def stk_over_due_fee; 		///< 融券逾期费用
Amt_def stk_puni_fee; 		///< 融券罚息
Amt_def over_due_rights; 		///< 融券权益逾期费用
Amt_def puni_rights; 		///< 融券权益罚息
Amt_def stk_puni_debts; 		///< 融券逾期本金罚息
Amt_def stk_manage_over_due; 		///< 融券逾期管理费
Amt_def stk_manage_puni_ntr; 		///< 融券逾期管理费罚息
Amt_def d_fee; 		///< 融券息费合计
Amt_def d_total_debts; 		///< 融券负债合计
Amt_def fund_draw; 		///< 可取资产
Amt_def fill_amt; 		///< 补仓金额
Amt_def credit_bal; 		///< 授信额度
Amt_def credit_avl; 		///< 授信可用的额度
Amt_def f_credit_bal; 		///< 融资授信额度
Amt_def f_credit_avl; 		///< 融资可用额度
Amt_def d_credit_bal; 		///< 融券授信额度
Amt_def d_credit_avl; 		///< 融券可用额度
Amt_def total_profit_cost; 		///< 总盈亏
Amt_def stk_unused_fee; 		///< 锁券占用费
Amt_def stk_puni_unused_fee; 		///< 逾期锁券占用费罚息
Amt_def fund_margin_frz; 		///< 冻结融资保证金
Amt_def stk_margin_frz; 		///< 冻结融券保证金
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 10 + 4 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultAssetDebts& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultAssetDebts;  }
};
/*
 * @brief 标的证券查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryTargetStk : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 市场ID
SecurityID_def security_id; 		///< 证券ID
BranchID_def branch_id; 		///< 分支机构
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryTargetStk& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryTargetStk;  }
};
/*
 * @brief 标的证券查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwTargetStkArray : public mp::RootPacket
{
public:
MarketID_def market_id; 		///< 市场ID
SecurityID_def security_id; 		///< 证券ID
CreditCtrl_def credit_fund_ctrl; 		///< 融资状态 0-允许 1-禁止
CreditCtrl_def credit_stk_ctrl; 		///< 融券状态 0-允许 1-禁止
MarginCalKind_def fund_cal_kind; 		///< 融资保证金比例计算方式
CreditRatio_def margin_rate_fund; 		///< 融资保证金比例
MarginCalKind_def stk_cal_kind; 		///< 融券保证金比例计算方式
CreditRatio_def margin_rate_stk; 		///< 融券保证金比例
Qty_def sep_rem_qty; 		///< 融券专户余券
IsStkSource_def is_stk_source; 		///< 是否券库清单
CreditCtrl_def f_permit; 		///< 融资状态 0-允许 1-禁止
CreditCtrl_def d_permit; 		///< 融券状态 0-允许 1-禁止
CreditRatio_def f_margin_rate; 		///< 融资保证金比例
CreditRatio_def d_margin_rate; 		///< 融券保证金比例
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 2 + 8 + 1 + 1 + 1 + 8 + 1 + 8 + 8 + 1 + 1 + 1 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwTargetStkArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 标的证券查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultTargetStk : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
BranchID_def branch_id; 		///< 分支机构
std::vector<AgwTargetStkArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultTargetStk& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultTargetStk;  }
};
/*
 * @brief 信用客户融资融券合约明细查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryCreditDebtsDetail : public AgwMsgExtQueryBase
{
public:
BranchID_def branch_id; 		///< 分支代码
Date8_def sys_date; 		///< 系统时间,填0查所有
Sno_def debts_sno; 		///< 合约编号,填空查所有
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryCreditDebtsDetail& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryCreditDebtsDetail;  }
};
/*
 * @brief 信用客户融资融券合约明细查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwCreditDebtsDetailArray : public mp::RootPacket
{
public:
CreditDirect_def credit_direct; 		///< 信用方向
Date8_def sys_date; 		///< 负债发生系统日期
Sno_def debts_sno; 		///< 负债流水号
CustID_def spec_date; 		///< 头寸组
FundAccountID_def spec_sno; 		///< 头寸组
DebtsDetailKind_def debts_detail_kind; 		///< 负债明细类型
Currency_def currency; 		///< 币种
CreditRatio_def fund_intr_rate; 		///< 融资年利率
CreditRatio_def fund_manage_rate; 		///< 融资管理年费率
CreditRatio_def fund_pro_rate; 		///< 融资承诺费率
CreditRatio_def stk_intr_rate; 		///< 融券年费率
CreditRatio_def stk_manage_rate; 		///< 融券管理年费率
CreditRatio_def stk_pro_rate; 		///< 融券承诺费率，暂时未启用
CreditRatio_def punish_intr_rate; 		///< 罚息年利率,暂时未启用
CreditRatio_def unused_fee_rate; 		///< 锁券未使用的费率,锁券分段模式填
CreditRatio_def violate_fee_rate; 		///< 锁券的话 是违约费率【到期回收不到的部分 计违约】
Price_def lock_price; 		///< 定价模式的头寸有意义
Qty_def use_qty; 		///< 头寸初始使用数量
Qty_def stk_repay; 		///< 累计偿还交收值
Qty_def stk_repay_unfrz; 		///< 日间偿还成交值
Amt_def fee; 		///< 融资利息或融券费用
Amt_def puni_fee; 		///< 逾期息费罚息
Amt_def puni_rights; 		///< 逾期权益罚息
Amt_def puni_debts; 		///< 逾期本金罚息
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 1 + 8 + 11 + 16 + 16 + 1 + 4 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwCreditDebtsDetailArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 信用客户融资融券合约明细查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultCreditDebtsDetail : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 营业部代码
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
std::vector<AgwCreditDebtsDetailArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultCreditDebtsDetail& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultCreditDebtsDetail;  }
};
/*
 * @brief 信用客户融资融券合约查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryCreditDebts : public AgwMsgExtQueryBase
{
public:
BranchID_def branch_id; 		///< 分支代码
CreditDirect_def credit_direct; 		///< 信用方向,必填
CreditDebtsQueryFlag_def query_flag; 		///< 查询方向,必填
Date8_def sys_date; 		///< 系统时间,填0查所有
Sno_def debts_sno; 		///< 合约编号,填空查所有
Currency_def currency; 		///< 币种,默认人民币,目前不校验
MarketID_def market_id; 		///< 市场ID,融券合约查询时使用,填空0所有
SecurityID_def security_id; 		///< 证券ID,融券合约查询时使用,填空查所有
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryCreditDebts& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryCreditDebts;  }
};
/*
 * @brief 信用客户融资融券合约查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwCreditDebtsArray : public mp::RootPacket
{
public:
Date8_def sys_date; 		///< 负债发生系统日期
Date8_def end_date; 		///< 负债截止日期
Sno_def debts_sno; 		///< 负债流水号
Currency_def currency; 		///< 币种
SecurityID_def security_id; 		///< 证券ID
SecuritySymbol_def security_symbol; 		///< 证券简称
Date8_def order_date; 		///< 委托日期
ClOrdNO_def cl_ord_no; 		///< 委托序号
AccountID_def account_id; 		///< 证券账户ID
LifeStatus_def life_status; 		///< 合约状态
MarketID_def market_id; 		///< 市场ID
Qty_def d_stk_bal; 		///< 融资数量(当前融资数量)||应偿还融券总数量
Amt_def f_deal_bal; 		///< 应付融资款余额 || 融券未偿还金额
Amt_def f_deal_avl; 		///< 应付融资款的当前数 || 当前融券未偿还金额
Price_def init_cost_price; 		///< 初始成本价格
Price_def prof_cost_price; 		///< 盈亏成本价格
Amt_def profit_cost; 		///< 浮动盈亏
Qty_def stk_repay_unfrz; 		///< 当日归还数量
Amt_def fee_unfrz; 		///< 当日息费偿还总额
Amt_def over_due_fee_unfrz; 		///< 融资逾期利息或融券逾期费用当日偿还部分
Amt_def puni_fee_unfrz; 		///< 逾期息费罚息当日偿还部分
Amt_def over_due_rights_unfrz; 		///< 融券逾期权益当日偿还部分
Amt_def puni_rights_unfrz; 		///< 逾期权益罚息当日偿还部分
Amt_def puni_debts_unfrz; 		///< 逾期本金罚息当日偿还部分
Amt_def all_fee_unfrz; 		///< 当日偿还息费总额
Amt_def credit_repay_unfrz; 		///< 当日归还金额
Amt_def f_exp_cet_intr; 		///< 融资利息及费用
Qty_def f_debt_qty; 		///< 融资股份余额
Qty_def d_stk_avl; 		///< 应偿还融券当前数量
Amt_def last_price; 		///< 最新价
Amt_def mkt_val; 		///< 最新市值
Amt_def buy_cost; 		///< 融券成本
Amt_def exp_cet_intr; 		///< 融券费用
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 8 + 11 + 4 + 8 + 40 + 8 + 8 + 12 + 1 + 2 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwCreditDebtsArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 信用客户融资融券合约查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultCreditDebts : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 营业部代码
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 满足条件记录总数,小于等于传入的total_num
std::vector<AgwCreditDebtsArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultCreditDebts& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultCreditDebts;  }
};
/*
 * @brief 可取资金查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryFundMaxdraw : public AgwMsgExtQueryBase
{
public:
Currency_def currency; 		///< 货币种类
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryFundMaxdraw& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryFundMaxdraw;  }
};
/*
 * @brief 可取资金查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultFundMaxdraw : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 营业部代码
Currency_def currency; 		///< 货币种类
Amt_def fund_bal; 		///< 资金余额
Amt_def fund_avl; 		///< 资金可用金额
Amt_def fund_buy; 		///< 买入冻结
Amt_def fund_sale; 		///< 卖出解冻
Amt_def market_value; 		///< 资产总值
Amt_def fund_all; 		///< 资金资产
Amt_def stk_value; 		///< 市值
Amt_def max_draw; 		///< 可取金额
Amt_def fund_bjhg_avl; 		///< 报价回购可用资金（暂时取0）
CreditFlag_def credit_flag; 		///< 资金帐号属性
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 10 + 4 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultFundMaxdraw& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultFundMaxdraw;  }
};
/*
 * @brief 担保证券查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryPledgeStk : public AgwMsgExtQueryBase
{
public:
MarketID_def market_id; 		///< 市场代码
SecurityID_def security_id; 		///< 查询方向
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryPledgeStk& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryPledgeStk;  }
};
/*
 * @brief 担保证券查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwArrayPledgeStk : public mp::RootPacket
{
public:
MarketID_def market_id; 		///< 证券所属市场
SecurityID_def security_id; 		///< 证券代码
CreditRatio_def pledge_rate; 		///< 折算率
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 2 + 8 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwArrayPledgeStk& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 担保证券查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultPledgeStk : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
std::vector<AgwArrayPledgeStk> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultPledgeStk& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultPledgeStk;  }
};
/*
 * @brief 信用投票客户查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryCreditVote : public AgwMsgExtQueryBase
{
public:
BranchID_def branch_id; 		///< 机构编码
SecurityID_def security_id; 		///< 投票代码
VotingProposal_def voting_proposal; 		///< 投票议案
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryCreditVote& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryCreditVote;  }
};
/*
 * @brief 信用投票客户结果组合
 */
class EXPORT_MACRO_DEFINE AgwArrayCreditVote : public mp::RootPacket
{
public:
Date8_def sys_date; 		///< 交易日期
Date8_def oper_date; 		///< 发生日期
Date8_def oper_time; 		///< 发生时间
Currency_def currency; 		///< 货币类型
AccountID_def account_id; 		///< 证券账户ID
MarketID_def market_id; 		///< 交易市场
SecurityID_def security_id; 		///< 证券代码
SecurityID_def link_security_id; 		///< 关联证券代码
VotingProposal_def voting_proposal; 		///< 投票议案
VotingPreference_def voting_preference; 		///< 投票意见
Qty_def stk_bal; 		///< 股份余额
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 8 + 8 + 4 + 12 + 2 + 8 + 8 + 10 + 1 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwArrayCreditVote& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 信用投票客户查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultCreditVote : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 机构编码
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 合约持仓记录总数
std::vector<AgwArrayCreditVote> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultCreditVote& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultCreditVote;  }
};
/*
 * @brief 信用投票可投票数查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryCreditVoteCount : public AgwMsgExtQueryBase
{
public:
BranchID_def branch_id; 		///< 机构编码
SecurityID_def security_id; 		///< 投票代码
MarketID_def market_id; 		///< 市场代码
GeneralMeetingSeq_def general_meeting_seq; 		///< 股东大会编码
VotingProposal_def voting_proposal; 		///< 投票议案
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryCreditVoteCount& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryCreditVoteCount;  }
};
/*
 * @brief 信用投票可投票数查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgExtQueryResultCreditVoteCount : public AgwMsgExtQueryResultBase
{
public:
BranchID_def branch_id; 		///< 营业部代码
SecurityID_def security_id; 		///< 投票代码
VotingProposal_def voting_proposal; 		///< 投票议案
Qty_def rest_qty; 		///< 可投票数
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 0 + 16 + 16 + 12 + 8 + 2 + 64 + 10 + 8 + 10 + 8;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgExtQueryResultCreditVoteCount& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgExtQueryResultCreditVoteCount;  }
};
/*
 * @brief ETF申赎成交查询消息
 */
class EXPORT_MACRO_DEFINE AgwMsgETFQueryOrderEx : public AgwMsgExtQueryBase
{
public:
ClOrdNO_def cl_ord_no; 		///< 客户订单编号,同一个客户当天唯一,填0查所有
MarketID_def market_id; 		///< 证券所属市场,填0查所有
SecurityID_def security_id; 		///< 证券代码,填空查所有
BusinessType_def business_type; 		///< 业务类型,填0查所有
ReportIndex_def query_index; 		///< 起始查询索引号,填0表示从头开始查
TotalNum_def return_num; 		///< 指定查询返回数量,填0表示不指定
ReturnSeq_def return_seq; 		///< 返回顺序，按时间排序
BusinessAbstractType_def business_abstract_type; 		///< 抽象业务编码：1.现货业务，2.经纪期权，3.两融业务
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFQueryOrderEx& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgETFQueryOrderEx;  }
};
/*
 * @brief ETF成份股记录组
 */
class EXPORT_MACRO_DEFINE AgwETFShareRecordArray : public mp::RootPacket
{
public:
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 证券所属市场
Qty_def qty; 		///< 成交数量或资金比例因子
Amt_def amt; 		///< 成交金额,N18(4)
Price_def price; 		///< 成交价格,N13(4)
ETFTradeReportType_def etf_trade_report_type; 		///< ETF成交回报类型
ExecID_def exec_id; 		///< 执行编号
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 2 + 8 + 8 + 8 + 1 + 32;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwETFShareRecordArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 查询结果组合
 */
class EXPORT_MACRO_DEFINE AgwETFTradeOrderArray : public mp::RootPacket
{
public:
BusinessType_def business_type; 		///< 业务类型
SecurityID_def security_id; 		///< 证券代码
SecuritySymbol_def security_symbol; 		///< 证券简称
MarketID_def market_id; 		///< 证券所属市场
AccountID_def account_id; 		///< 证券账户
Side_def side; 		///< 买卖方向,填0查所有
OrdType_def ord_type; 		///< 订单类别
ExecType_def exec_type; 		///< 当前订单执行类型
ExecID_def exec_id; 		///< 执行编号
ClOrdNO_def cl_ord_no; 		///< 客户订单编号
OrderID_def order_id; 		///< 交易所订单编号, 取值为数字
ClOrdID_def cl_ord_id; 		///< 申报合同号,上交所：以QP1开头,表示为交易所保证金强制平仓；以CV1开头,表示为交易所备兑强制平仓；
TimeStamp_def transact_time; 		///< 交易所回报时间,格式为YYYY:MM:DD:HH:MM:SS.000
Price_def last_px; 		///< 成交价格,N13(4)
Qty_def last_qty; 		///< 成交数量(股票为股、基金为份、上海债券为手，其他为张)N15(2)
Amt_def total_value_traded; 		///< 成交金额,精确到分,N18(4)
Amt_def fee; 		///< 费用,N18(4)
Currency_def currency; 		///< 货币种类
UserInfo_def user_info; 		///< 用户私有信息
std::vector<AgwETFShareRecordArray> order_array; 		///< ETF成份股记录组
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwETFTradeOrderArray& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief 成交查询结果
 */
class EXPORT_MACRO_DEFINE AgwMsgETFQueryResultTradeOrder : public AgwMsgExtQueryResultBase
{
public:
ReportIndex_def last_index; 		///< 最后一笔查询结果的索引号
TotalNum_def total_num; 		///< 成交记录总数
std::vector<AgwETFTradeOrderArray> order_array; 		///< 查询结果组合
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFQueryResultTradeOrder& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgETFQueryResultTradeOrder;  }
};
/*
 * @brief 成分股数组
 */
class EXPORT_MACRO_DEFINE AgwMsgETFConstituentStockUnit : public mp::RootPacket
{
public:
SecurityID_def security_id; 		///< 证券代码
MarketID_def market_id; 		///< 市场ID
Qty_def qty; 		///< 成交数量(股票为股、基金为份、上海债券为手，其他为张)N15(2)
Amt_def amt; 		///< 成交金额,N18(4)
Amt_def price; 		///< 成交价格,N18(4)
ETFTradeReportType_def etf_trade_report_type; 		///< ETF成交回报类型
ExecID_def exec_id; 		///< 执行编号
/*
 * @brief 消息大小
 */
    static inline size_t GetFixedSize()
    {
        return 0 + 8 + 2 + 8 + 8 + 8 + 1 + 32;
    }
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFConstituentStockUnit& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
};
/*
 * @brief ETF业务成交回报
 */
class EXPORT_MACRO_DEFINE AgwMsgETFRedemptionTradeDealER : public AgwMsgTradeExecutionReport
{
public:
std::vector<AgwMsgETFConstituentStockUnit> constituent_stock; 		///< 成分股与资金信息
/*
 * @brief 消息实际大小
 */
    virtual size_t GetSize() const;
/*
 * @brief 输出文本存到流中
 */
    virtual void DumpAsString(std::ostream& os) const;
/*
 * @brief 输出消息成json格式文本
 */
    virtual void WriteJson(boost::property_tree::ptree& ptree_node) const;
/*
 * @brief 从json格式文本读取消息
 */
    virtual void ReadJson(const boost::property_tree::ptree& ptree_node);
/*
 * @brief 用默认值初始化成员
 */
    void FillDefaultValue();
/*
 * @brief 检查两个消息字段的值是否完全相同
 */
    bool Diff(const AgwMsgETFRedemptionTradeDealER& msg);
/*
 * @brief 从字节流读入消息
 */
    virtual error_code Decode(MessageDecoder& decoder);
/*
 * @brief 把消息写到字节流中
 */
    virtual error_code Encode(MessageEncoder& encoder) const;
    	virtual mp::MsgTypeNo_def GetTypeID() const { return kAgwMsgETFRedemptionTradeDealER;  }
};
}
}
#endif // ATP_GW_MESSAGES_AGW_EXTERNAL_H_