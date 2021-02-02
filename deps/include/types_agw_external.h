/**
*  Copyright (c) 2019 Archforce Financial Technology.  All rights reserved.
*  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
*  For more information about Archforce, welcome to archforce.cn.
**/
#ifndef ATP_GW_TYPES_AGW_EXTERNAL_H_
#define ATP_GW_TYPES_AGW_EXTERNAL_H_
#include <map>
#include <boost/cstdint.hpp>
#include <boost/function.hpp>
#include <boost/array.hpp>
namespace atp
{
namespace gw
{
/*
 * @brief typedef arrea
 */
typedef boost::uint32_t AgwNoPartition_def; ///< 分区记录个数
typedef boost::uint8_t AgwPartition_def; ///< 分区号
typedef boost::int32_t AgwIndex_def; ///< 索引号
typedef boost::array<char, 12> AccountID_def; ///< 证券账户
typedef boost::array<char, 6> AccountSubCode_def; ///< 合约账户子编码
typedef boost::int64_t Amt_def; ///< 金额类型,N18(4)
typedef boost::uint8_t Bool_def; ///< 布尔类型,1=True/Yes,0=False/No
typedef boost::array<char, 50> BusinessRejectText_def; ///< 拒绝原因说明
typedef boost::uint8_t BusinessType_def; ///< 业务编码
typedef boost::uint32_t BodyLength_def; ///< 消息体长度
typedef boost::array<char, 10> BranchID_def; ///< 营业部ID
typedef char CallOrPut_def; ///< 认沽认购
typedef char CashMargin_def; ///< 信用标识
typedef boost::int64_t ClOrdNO_def; ///< 订单编号
typedef boost::array<char, 4> Currency_def; ///< 货币种类
typedef std::string ClientFeatureCode_def; ///< 终端识别码,一般填mac地址
typedef boost::uint8_t CoveredOrUncovered_def; ///< 备兑标识,衍生品交易填写
typedef boost::array<char, 16> CustID_def; ///< 客户号
typedef boost::uint32_t CheckSum_def; ///< 校验和
typedef boost::array<char, 32> CompID_def; ///< 接收方或发送方代码
typedef char CreditCtrl_def; ///< 融资融券状态/标的标志
typedef boost::int64_t Date8_def; ///< 日期,格式(YYYYmmDD)
typedef boost::array<char, 64> Description_def; ///< 描述
typedef boost::uint8_t DesignationTransType_def; ///< 转托管注册类型
typedef boost::array<char, 32> DefaultAppVerID_def; ///< 协议版本
typedef boost::array<char, 32> ExecID_def; ///< 执行编号,单个交易日不重复
typedef char ExecType_def; ///< 执行报告类型
typedef boost::uint8_t ETFTradeReportType_def; ///< ETF成交回报类型
typedef boost::uint16_t ExternalInsErrorCode_def; ///< 外部指令拒绝原因代码
typedef boost::array<char, 16> FundAccountID_def; ///< 资金帐号ID
typedef boost::uint64_t GeneralMeetingSeq_def; ///< 股东大会编码
typedef boost::int32_t HeartBtInt_def; ///< 心跳间隔
typedef boost::array<char, 32> InstanceID_def; ///< 实例ID
typedef boost::int64_t InstructionID_def; ///< 指令ID
typedef boost::uint16_t InstructionType_def; ///< 指令类型
typedef boost::uint32_t Length_def; ///< 长度,表示字节为单位的数据长度
typedef boost::uint16_t MarketID_def; ///< 市场编码
typedef boost::uint32_t MsgType_def; ///< 消息编码
typedef boost::uint16_t MaxPriceLevels_def; ///< 最多成交价位数
typedef char MarginCalKind_def; ///< 保证金比例计算方式
typedef boost::uint32_t MsgTypeNo_def; ///< 消息编码
typedef boost::uint32_t NumInGroup_def; ///< 重复组数量
typedef boost::array<char, 5> OrdRejReason_def; ///< 订单拒绝原因代码
typedef boost::uint8_t OrdStatus_def; ///< 订单状态
typedef char OrdType_def; ///< 订单类型
typedef boost::uint8_t OrderQueryCondition_def; ///< 外部委托查询的委托状态条件
typedef boost::array<char, 6> PBUID_def; ///< 申报交易单元
typedef boost::uint8_t PBUType_def; ///< 交易单元类型
typedef char PositionEffect_def; ///< 开平仓标识
typedef boost::int64_t Price_def; ///< 价格,N13(4)
typedef boost::int8_t PermissonErrorCode_def; ///< 密码校验服务错误码
typedef char OrderWay_def; ///< 委托方式
typedef std::string PWD_def; ///< 客户登录密码
typedef char EnforceFlag_def; ///< 强制风险标识
typedef boost::array<char, 32> Password_def; ///< AGW登录密码
typedef boost::int64_t Qty_def; ///< 数量,N15(2)
typedef boost::uint16_t QueryResultCode_def; ///< 查询结果代码
typedef boost::int64_t ReportIndex_def; ///< 回报记录号,从1开始编号
typedef boost::uint16_t RejectReasonCode_def; ///< 订单拒绝原因代码
typedef boost::uint8_t ReturnSeq_def; ///< 排序方法
typedef boost::uint16_t Result_def; ///< 处理结果
typedef boost::array<char, 8> SecurityID_def; ///< 证券代码
typedef boost::int64_t SeqNum_def; ///< 消息序号
typedef char Side_def; ///< 买卖方向
typedef std::string String_def; ///< 不定长字符串
typedef boost::array<char, 40> SecuritySymbol_def; ///< 证券简称
typedef boost::array<char, 32> SenderCompID_def; ///< 发送方代码
typedef boost::int32_t SessionStatus_def; ///< 会话状态
typedef boost::int64_t SeqNum_def; ///< 消息序号
typedef boost::array<char, 8> Text_def; ///< 自由格式文本串,如无特别说明最多8个字符,超过部分将被自动截掉
typedef boost::int64_t Time_def; ///< 时间
typedef char TimeInForce_def; ///< 订单有效期类型
typedef boost::int64_t TimeStamp_def; ///< 本地时间戳
typedef boost::int64_t TotalNum_def; ///< 记录总数
typedef boost::uint8_t TransferWay_def; ///< 资金划转方式
typedef boost::array<char, 6> Tenderer_def; ///< 要约收购参与人编码
typedef boost::array<char, 32> TargetCompID_def; ///< 接收方代码
typedef boost::array<char, 32> TestReqID_def; ///< 测试请求信息
typedef boost::array<char, 256> TextRes_def; ///< 文本信息
typedef boost::array<char, 64> UserInfo_def; ///< 用户私有信息
typedef boost::array<char, 10> VotingProposal_def; ///< 投票议案编号
typedef char VotingPreference_def; ///< 投票意向
typedef boost::array<char, 2> VotingSegment_def; ///< 分段统计段号（预留）
typedef boost::uint32_t ValidationCode_def; ///< 密码激活校验号,正数
typedef boost::array<char, 16> OrderID_def; ///< 交易所订单编号,跨交易日不重复,交易所填充
typedef boost::array<char, 10> ClOrdID_def; ///< 申报合同号
typedef char Pwd_Type_def; ///< 密码加密类型
typedef boost::uint8_t TransferWay_def; ///< 资金划转方式
typedef boost::uint16_t IPOType_def; ///< 配售类型
typedef char IsStkSource_def; ///< 是否券库清单
typedef boost::array<char, 255> Distribution_def; ///< 发行方式
typedef boost::uint32_t FundAccountAttr_def; ///< 资金账户属性
typedef boost::array<char, 32> CustName_def; ///< 客户姓名
typedef boost::uint32_t BankCode_def; ///< 银行代码
typedef char CancelFlag_def; ///< 撤单标志
typedef boost::array<char, 2> BSFlag2_def; ///< 集中交易买卖方向
typedef boost::uint16_t SecurityType_def; ///< 证券类别
typedef boost::int64_t PriceTick_def; ///< 价格档位,N13(4)
typedef boost::uint8_t SecurityStatus_def; ///< 证券状态
typedef boost::int64_t BondInterest_def; ///< 债券利息,N11(8)
typedef boost::int64_t CreditRatio_def; ///< 信用比例,N12(8)
typedef boost::array<char, 11> Sno_def; ///< 流水号
typedef char CreditStatus_def; ///< 信用状态
typedef char CreditDirect_def; ///< 信用方向
typedef char DebtsDetailKind_def; ///< 负债明细类型
typedef char CreditDebtsQueryFlag_def; ///< 查询方向
typedef char LifeStatus_def; ///< 合约状态
typedef char CreditFlag_def; ///< 资金帐号属性
typedef boost::uint8_t BusinessAbstractType_def; ///< 抽象业务编码
typedef boost::uint32_t MsgTypeNo_def; ///< 消息编码
typedef boost::uint32_t NumInGroup_def; ///< 重复组数量
/*
 * @brief class declearation
 */
class AgwHeader;
class AgwMsgLogin;
class AgwMsgLogout;
class AgwMsgHeartBeat;
class AgwMsgTestRequest;
class AgwNoPartitionArray;
class AgwMsgSync;
class AgwMsgSyncFinish;
class AgwMsgRealTimeControlInstruction;
class AgwMsgRealTimeControlInstructionResult;
class AgwMsgBizRejection;
class AgwMsgCustLogoutReq;
class AgwMsgCustLogoutResp;
class AgwMsgCustLoginReq;
class AgwMsgCustLoginRespAccountUnit;
class AgwMsgCustLoginRespFundAccountUnit;
class AgwMsgCustLoginResp;
class AgwMsgExtFundTransfer;
class AgwMsgExtFundTransferResult;
class AgwMsgCustAuthReq;
class AgwMsgCustAuthResp;
class AgwMsgOrder;
class AgwNewMsgOrder;
class AgwMsgCashAuctionOrder;
class AgwMsgTibAfterHourAuctionOrder;
class AgwMsgOptionAuctionOrder;
class AgwMsgIssueOrder;
class AgwMsgRightsIssueOrder;
class AgwMsgOptionExerciseOrder;
class AgwMsgDesignationOrder;
class AgwMsgDesignatedTransactionOrder;
class AgwMsgWarrantExerciseOrder;
class AgwMsgFDEPCancelOrder;
class AgwMsgCancelOrder;
class AgwMsgBatchCancelOrder;
class AgwMsgOptionCancelOrder;
class AgwMsgOrderReport;
class AgwMsgTradeExecutionReport;
class AgwMsgOrderStatusAck;
class AgwMsgCashAuctionTradeER;
class AgwMsgOptionAuctionTradeER;
class AgwMsgTibAfterHourAuctionTradeER;
class AgwMsgRepoAuctionOrder;
class AgwMsgRepoAuctionTradeER;
class AgwMsgSwapPutbackOrder;
class AgwMsgOptionAuctionForceCloseOrder;
class AgwMsgLOFOrder;
class AgwMsgLOFTradeER;
class AgwMsgPledgeInOrOutOrder;
class AgwMsgPledgeInOrOutTradeER;
class AgwMsgPasswordServiceOrder;
class AgwMsgNetVotingOrder;
class AgwMsgTenderOfferOrder;
class AgwMsgETFRedemptionOrder;
class AgwMsgConstituentStockUnit;
class AgwMsgETFRedemptionTradeER;
class AgwMsgBondDistributionOrder;
class AgwMsgBondDistributionTradeER;
class AgwMsgStructuredFundOrder;
class AgwMsgStructuredFundTradeER;
class AgwMsgDcomCancelOrder;
class AgwMsgCreditAuctionOrder;
class AgwMsgCreditAuctionTradeER;
class AgwMsgMarginTradingOrder;
class AgwMsgMarginTradingTradeER;
class AgwMsgCollateralInOrOutOrder;
class AgwMsgThirdCollateralInOrder;
class AgwMsgBuySecuRepayOrder;
class AgwMsgBuySecuRepayTradeER;
class AgwMsgCurSecuRepayOrder;
class AgwMsgExtDirectRepay;
class AgwMsgExtDirectRepayResult;
class AgwMsgCreditVote;
class AgwMsgCreditVoteResult;
class AgwMsgExtDirectRepayAppoint;
class AgwMsgExtDirectRepayAppointResult;
class AgwMsgExtQueryBase;
class AgwMsgExtQueryResultBase;
class AgwMsgExtQueryMaxOrderQty;
class AgwMsgNewExtQueryMaxOrderQty;
class AgwMsgExtQueryMaxOrderQtyResult;
class AgwMsgExtQueryAccountContractShare;
class AgwContractArray;
class AgwMsgExtQueryResultAccountContractShare;
class AgwMsgExtQueryAccountContractFund;
class AgwMsgExtQueryResultAccountContractFund;
class AgwMsgExtQueryTradeOrder;
class AgwTradeOrderArray;
class AgwMsgExtQueryResultTradeOrder;
class AgwMsgExtQueryFund;
class AgwMsgExtQueryResultFund;
class AgwAccountIDArray;
class AgwMsgExtQueryShare;
class AgwShareArray;
class AgwMsgExtQueryResultShare;
class AgwMsgExtQueryIPOQty;
class AgwIPOQtyArray;
class AgwMsgExtQueryResultIPOQty;
class AgwMsgExtQueryTIBIPOQty;
class AgwMsgExtQueryResultTIBIPOQty;
class AgwMsgExtQueryTradeCollect;
class AgwTradeCollectArray;
class AgwExtQueryResultTradeCollect;
class AgwMsgExtQueryOrder;
class AgwOrderArray;
class AgwMsgExtQueryResultOrder;
class AgwExternalInsTETransFundReq;
class AgwExternalInsTETransFundResp;
class AgwSecurityInfoArray;
class AgwMsgExtQuerySecurityInfo;
class AgwMsgExtQueryResultSecurityInfo;
class AgwMsgExtQueryMd;
class AgwMsgExtQueryResultMd;
class AgwMsgExtQueryIPOInfo;
class AgwIPOInfoArray;
class AgwMsgExtQueryResultIPOInfo;
class AgwMsgExtQueryAssetDebts;
class AgwMsgExtQueryResultAssetDebts;
class AgwMsgExtQueryTargetStk;
class AgwTargetStkArray;
class AgwMsgExtQueryResultTargetStk;
class AgwMsgExtQueryCreditDebtsDetail;
class AgwCreditDebtsDetailArray;
class AgwMsgExtQueryResultCreditDebtsDetail;
class AgwMsgExtQueryCreditDebts;
class AgwCreditDebtsArray;
class AgwMsgExtQueryResultCreditDebts;
class AgwMsgExtQueryFundMaxdraw;
class AgwMsgExtQueryResultFundMaxdraw;
class AgwMsgExtQueryPledgeStk;
class AgwArrayPledgeStk;
class AgwMsgExtQueryResultPledgeStk;
class AgwMsgExtQueryCreditVote;
class AgwArrayCreditVote;
class AgwMsgExtQueryResultCreditVote;
class AgwMsgExtQueryCreditVoteCount;
class AgwMsgExtQueryResultCreditVoteCount;
class AgwMsgETFQueryOrderEx;
class AgwETFShareRecordArray;
class AgwETFTradeOrderArray;
class AgwMsgETFQueryResultTradeOrder;
class AgwMsgETFConstituentStockUnit;
class AgwMsgETFRedemptionTradeDealER;
}
}
#endif // ATP_GW_TYPES_AGW_EXTERNAL_H_