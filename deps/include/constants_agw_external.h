/**
*  Copyright (c) 2019 Archforce Financial Technology.  All rights reserved.
*  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
*  For more information about Archforce, welcome to archforce.cn.
**/
#ifndef ATP_GW_CONSTANTS__H_
#define ATP_GW_CONSTANTS__H_
#include <map>
#include <string>
#include "export_macro.h"
#include "types_agw_external.h"
namespace atp
{
namespace gw
{
/*
 * @brief 外部委托查询的委托状态条件
 */
struct EXPORT_MACRO_DEFINE AgwOrderQueryCondition
{
    static const OrderQueryCondition_def kAll = 0;  ///< 查询全部
    static const OrderQueryCondition_def kCancelAvailable = 1;  ///< 查询可撤单委托
    static const OrderQueryCondition_def kTradeExecOrCanceled = 2;  ///< 查询有成交或已经撤单委托
    static const OrderQueryCondition_def kUnavailableCancel = 3;  ///< 查询不可撤单委托
/*
 * @brief msg check
 */
    static bool IsValid(const OrderQueryCondition_def& value)
    {
        if (
            value != AgwOrderQueryCondition::kAll
            && value != AgwOrderQueryCondition::kCancelAvailable
            && value != AgwOrderQueryCondition::kTradeExecOrCanceled
            && value != AgwOrderQueryCondition::kUnavailableCancel
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const OrderQueryCondition_def& value)
    {
        std::map<OrderQueryCondition_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwOrderQueryCondition::kAll] = "查询全部";
        const_desc_g[AgwOrderQueryCondition::kCancelAvailable] = "查询可撤单委托";
        const_desc_g[AgwOrderQueryCondition::kTradeExecOrCanceled] = "查询有成交或已经撤单委托";
        const_desc_g[AgwOrderQueryCondition::kUnavailableCancel] = "查询不可撤单委托";
        return true;
    }
    static std::string GetSummary(const OrderQueryCondition_def& value)
    {
        std::map<OrderQueryCondition_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwOrderQueryCondition::kAll] = "";
        const_summary_g[AgwOrderQueryCondition::kCancelAvailable] = "";
        const_summary_g[AgwOrderQueryCondition::kTradeExecOrCanceled] = "";
        const_summary_g[AgwOrderQueryCondition::kUnavailableCancel] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<OrderQueryCondition_def, std::string> const_desc_g;
    static std::map<OrderQueryCondition_def, std::string> const_summary_g;
};
/*
 * @brief 网关实时指令类型
 */
struct EXPORT_MACRO_DEFINE AgwInstructionType
{
    static const InstructionType_def kFundAdjust = 11;  ///< 资金实时调整
    static const InstructionType_def kSharePositionAdjust = 12;  ///< 股份持仓实时调整
    static const InstructionType_def kBusinessRightsControl = 14;  ///< 实时限制交易
    static const InstructionType_def kBatchBusinessRightsControl = 21;  ///< 批量交易权限控制指令
    static const InstructionType_def kModifyCashAuctionParams = 23;  ///< 现货交易参数修改
    static const InstructionType_def kModifyETFBusinessRule = 24;  ///< ETF申赎业务规则修改
    static const InstructionType_def kModifyShareDayTrading = 26;  ///< 交易回转标记修改
/*
 * @brief msg check
 */
    static bool IsValid(const InstructionType_def& value)
    {
        if (
            value != AgwInstructionType::kFundAdjust
            && value != AgwInstructionType::kSharePositionAdjust
            && value != AgwInstructionType::kBusinessRightsControl
            && value != AgwInstructionType::kBatchBusinessRightsControl
            && value != AgwInstructionType::kModifyCashAuctionParams
            && value != AgwInstructionType::kModifyETFBusinessRule
            && value != AgwInstructionType::kModifyShareDayTrading
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const InstructionType_def& value)
    {
        std::map<InstructionType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwInstructionType::kFundAdjust] = "资金实时调整";
        const_desc_g[AgwInstructionType::kSharePositionAdjust] = "股份持仓实时调整";
        const_desc_g[AgwInstructionType::kBusinessRightsControl] = "实时限制交易";
        const_desc_g[AgwInstructionType::kBatchBusinessRightsControl] = "批量交易权限控制指令";
        const_desc_g[AgwInstructionType::kModifyCashAuctionParams] = "现货交易参数修改";
        const_desc_g[AgwInstructionType::kModifyETFBusinessRule] = "ETF申赎业务规则修改";
        const_desc_g[AgwInstructionType::kModifyShareDayTrading] = "交易回转标记修改";
        return true;
    }
    static std::string GetSummary(const InstructionType_def& value)
    {
        std::map<InstructionType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwInstructionType::kFundAdjust] = "";
        const_summary_g[AgwInstructionType::kSharePositionAdjust] = "";
        const_summary_g[AgwInstructionType::kBusinessRightsControl] = "";
        const_summary_g[AgwInstructionType::kBatchBusinessRightsControl] = "";
        const_summary_g[AgwInstructionType::kModifyCashAuctionParams] = "";
        const_summary_g[AgwInstructionType::kModifyETFBusinessRule] = "";
        const_summary_g[AgwInstructionType::kModifyShareDayTrading] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<InstructionType_def, std::string> const_desc_g;
    static std::map<InstructionType_def, std::string> const_summary_g;
};
/*
 * @brief 业务类型
 */
struct EXPORT_MACRO_DEFINE AgwBusinessType
{
    static const BusinessType_def kAll = 0;  ///< 所有类型
    static const BusinessType_def kCashAuction = 1;  ///< 现货集中交易
    static const BusinessType_def kPledge = 2;  ///< 质押式回购交易
    static const BusinessType_def kBondDistribution = 3;  ///< 债券分销
    static const BusinessType_def kOptionAuction = 4;  ///< 期权集中交易
    static const BusinessType_def kBlockTrade = 5;  ///< 协议交易(大宗交易)
    static const BusinessType_def kAfterHoursPricing = 6;  ///< 盘后定价交易
    static const BusinessType_def kRefinancing = 7;  ///< 转融通
    static const BusinessType_def kAssetTransfer = 8;  ///< 资产管理计划份额转让
    static const BusinessType_def kCashPledgeRepo = 9;  ///< 股票质押式回购
    static const BusinessType_def kAgreedRepo = 10;  ///< 约定购回
    static const BusinessType_def kPledgeQuoteRepo = 11;  ///< 质押式报价回购
    static const BusinessType_def kETFRealTimePurchaseRedemption = 12;  ///< ETF实时申购赎回
    static const BusinessType_def kIssue = 13;  ///< 网上发行认购
    static const BusinessType_def kSubscriptionRatio = 14;  ///< 配股认购
    static const BusinessType_def kBondSellBack = 15;  ///< 债券转股回售
    static const BusinessType_def kOptionExercise = 16;  ///< 期权行权
    static const BusinessType_def kOpenFundPurchaseRedemption = 17;  ///< 开放式基金申购赎回
    static const BusinessType_def kTenderOffer = 18;  ///< 要约收购
    static const BusinessType_def kPledgeRepoPledgeOrSign = 19;  ///< 质押式回购质押解押
    static const BusinessType_def kDesignation = 20;  ///< 转托管
    static const BusinessType_def kVote = 21;  ///< 网络投票
    static const BusinessType_def kDesignatedTransaction = 22;  ///< 指定交易
    static const BusinessType_def kWarrantsExercise = 23;  ///< 权证行权
    static const BusinessType_def kPasswordService = 24;  ///< 密码服务
    static const BusinessType_def kOpenMarginQuery = 25;  ///< 保证金查询
    static const BusinessType_def kOpenFundSetting = 26;  ///< 开放式基金转托管、分红方式设置
    static const BusinessType_def kTurnToDisposal = 27;  ///< 转处置
    static const BusinessType_def kCouponSwap = 28;  ///< 垫券还券
    static const BusinessType_def kPayOff = 29;  ///< 待清偿扣划
    static const BusinessType_def kBondPledgeAgreementRepo = 30;  ///< 债券质押式协议回购
    static const BusinessType_def kLevelFundRealTimeOpenOrMerge = 31;  ///< 分级基金实时分拆合并
    static const BusinessType_def kCoverLockOrUnlock = 32;  ///< 备兑锁定解锁
    static const BusinessType_def kHKStocksThrough = 63;  ///< 港股通
    static const BusinessType_def kTibAfterHour = 97;  ///< 科创板股票盘后定价交易业务
    static const BusinessType_def kMarginTrade = 99;  ///< 融资融券交易业务
    static const BusinessType_def kCreditAuction = 200;  ///< 信用账户普通买入/普通卖出（卖券还款）交易业务
    static const BusinessType_def kMarginTrading = 201;  ///< 融资融券交易业务
    static const BusinessType_def kDirectRepay = 202;  ///< 直接还款
    static const BusinessType_def kCollateralInOrOut = 203;  ///< 担保品划转
    static const BusinessType_def kBuySecuRepay = 204;  ///< 买券还券
    static const BusinessType_def kCurSecuRepay = 205;  ///< 现券还券
    static const BusinessType_def kCreditVote = 207;  ///< 信用账户投票
    static const BusinessType_def kDirectRepayAppoint = 208;  ///< 指定合约还款
/*
 * @brief msg check
 */
    static bool IsValid(const BusinessType_def& value)
    {
        if (
            value != AgwBusinessType::kAll
            && value != AgwBusinessType::kCashAuction
            && value != AgwBusinessType::kPledge
            && value != AgwBusinessType::kBondDistribution
            && value != AgwBusinessType::kOptionAuction
            && value != AgwBusinessType::kBlockTrade
            && value != AgwBusinessType::kAfterHoursPricing
            && value != AgwBusinessType::kRefinancing
            && value != AgwBusinessType::kAssetTransfer
            && value != AgwBusinessType::kCashPledgeRepo
            && value != AgwBusinessType::kAgreedRepo
            && value != AgwBusinessType::kPledgeQuoteRepo
            && value != AgwBusinessType::kETFRealTimePurchaseRedemption
            && value != AgwBusinessType::kIssue
            && value != AgwBusinessType::kSubscriptionRatio
            && value != AgwBusinessType::kBondSellBack
            && value != AgwBusinessType::kOptionExercise
            && value != AgwBusinessType::kOpenFundPurchaseRedemption
            && value != AgwBusinessType::kTenderOffer
            && value != AgwBusinessType::kPledgeRepoPledgeOrSign
            && value != AgwBusinessType::kDesignation
            && value != AgwBusinessType::kVote
            && value != AgwBusinessType::kDesignatedTransaction
            && value != AgwBusinessType::kWarrantsExercise
            && value != AgwBusinessType::kPasswordService
            && value != AgwBusinessType::kOpenMarginQuery
            && value != AgwBusinessType::kOpenFundSetting
            && value != AgwBusinessType::kTurnToDisposal
            && value != AgwBusinessType::kCouponSwap
            && value != AgwBusinessType::kPayOff
            && value != AgwBusinessType::kBondPledgeAgreementRepo
            && value != AgwBusinessType::kLevelFundRealTimeOpenOrMerge
            && value != AgwBusinessType::kCoverLockOrUnlock
            && value != AgwBusinessType::kHKStocksThrough
            && value != AgwBusinessType::kTibAfterHour
            && value != AgwBusinessType::kMarginTrade
            && value != AgwBusinessType::kCreditAuction
            && value != AgwBusinessType::kMarginTrading
            && value != AgwBusinessType::kDirectRepay
            && value != AgwBusinessType::kCollateralInOrOut
            && value != AgwBusinessType::kBuySecuRepay
            && value != AgwBusinessType::kCurSecuRepay
            && value != AgwBusinessType::kCreditVote
            && value != AgwBusinessType::kDirectRepayAppoint
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const BusinessType_def& value)
    {
        std::map<BusinessType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwBusinessType::kAll] = "所有类型";
        const_desc_g[AgwBusinessType::kCashAuction] = "现货集中交易";
        const_desc_g[AgwBusinessType::kPledge] = "质押式回购交易";
        const_desc_g[AgwBusinessType::kBondDistribution] = "债券分销";
        const_desc_g[AgwBusinessType::kOptionAuction] = "期权集中交易";
        const_desc_g[AgwBusinessType::kBlockTrade] = "协议交易(大宗交易)";
        const_desc_g[AgwBusinessType::kAfterHoursPricing] = "盘后定价交易";
        const_desc_g[AgwBusinessType::kRefinancing] = "转融通";
        const_desc_g[AgwBusinessType::kAssetTransfer] = "资产管理计划份额转让";
        const_desc_g[AgwBusinessType::kCashPledgeRepo] = "股票质押式回购";
        const_desc_g[AgwBusinessType::kAgreedRepo] = "约定购回";
        const_desc_g[AgwBusinessType::kPledgeQuoteRepo] = "质押式报价回购";
        const_desc_g[AgwBusinessType::kETFRealTimePurchaseRedemption] = "ETF实时申购赎回";
        const_desc_g[AgwBusinessType::kIssue] = "网上发行认购";
        const_desc_g[AgwBusinessType::kSubscriptionRatio] = "配股认购";
        const_desc_g[AgwBusinessType::kBondSellBack] = "债券转股回售";
        const_desc_g[AgwBusinessType::kOptionExercise] = "期权行权";
        const_desc_g[AgwBusinessType::kOpenFundPurchaseRedemption] = "开放式基金申购赎回";
        const_desc_g[AgwBusinessType::kTenderOffer] = "要约收购";
        const_desc_g[AgwBusinessType::kPledgeRepoPledgeOrSign] = "质押式回购质押解押";
        const_desc_g[AgwBusinessType::kDesignation] = "转托管";
        const_desc_g[AgwBusinessType::kVote] = "网络投票";
        const_desc_g[AgwBusinessType::kDesignatedTransaction] = "指定交易";
        const_desc_g[AgwBusinessType::kWarrantsExercise] = "权证行权";
        const_desc_g[AgwBusinessType::kPasswordService] = "密码服务";
        const_desc_g[AgwBusinessType::kOpenMarginQuery] = "保证金查询";
        const_desc_g[AgwBusinessType::kOpenFundSetting] = "开放式基金转托管、分红方式设置";
        const_desc_g[AgwBusinessType::kTurnToDisposal] = "转处置";
        const_desc_g[AgwBusinessType::kCouponSwap] = "垫券还券";
        const_desc_g[AgwBusinessType::kPayOff] = "待清偿扣划";
        const_desc_g[AgwBusinessType::kBondPledgeAgreementRepo] = "债券质押式协议回购";
        const_desc_g[AgwBusinessType::kLevelFundRealTimeOpenOrMerge] = "分级基金实时分拆合并";
        const_desc_g[AgwBusinessType::kCoverLockOrUnlock] = "备兑锁定解锁";
        const_desc_g[AgwBusinessType::kHKStocksThrough] = "港股通";
        const_desc_g[AgwBusinessType::kTibAfterHour] = "科创板股票盘后定价交易业务";
        const_desc_g[AgwBusinessType::kMarginTrade] = "融资融券交易业务";
        const_desc_g[AgwBusinessType::kCreditAuction] = "信用账户普通买入/普通卖出（卖券还款）交易业务";
        const_desc_g[AgwBusinessType::kMarginTrading] = "融资融券交易业务";
        const_desc_g[AgwBusinessType::kDirectRepay] = "直接还款";
        const_desc_g[AgwBusinessType::kCollateralInOrOut] = "担保品划转";
        const_desc_g[AgwBusinessType::kBuySecuRepay] = "买券还券";
        const_desc_g[AgwBusinessType::kCurSecuRepay] = "现券还券";
        const_desc_g[AgwBusinessType::kCreditVote] = "信用账户投票";
        const_desc_g[AgwBusinessType::kDirectRepayAppoint] = "指定合约还款";
        return true;
    }
    static std::string GetSummary(const BusinessType_def& value)
    {
        std::map<BusinessType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwBusinessType::kAll] = "";
        const_summary_g[AgwBusinessType::kCashAuction] = "";
        const_summary_g[AgwBusinessType::kPledge] = "";
        const_summary_g[AgwBusinessType::kBondDistribution] = "";
        const_summary_g[AgwBusinessType::kOptionAuction] = "";
        const_summary_g[AgwBusinessType::kBlockTrade] = "";
        const_summary_g[AgwBusinessType::kAfterHoursPricing] = "";
        const_summary_g[AgwBusinessType::kRefinancing] = "";
        const_summary_g[AgwBusinessType::kAssetTransfer] = "";
        const_summary_g[AgwBusinessType::kCashPledgeRepo] = "";
        const_summary_g[AgwBusinessType::kAgreedRepo] = "";
        const_summary_g[AgwBusinessType::kPledgeQuoteRepo] = "";
        const_summary_g[AgwBusinessType::kETFRealTimePurchaseRedemption] = "";
        const_summary_g[AgwBusinessType::kIssue] = "";
        const_summary_g[AgwBusinessType::kSubscriptionRatio] = "";
        const_summary_g[AgwBusinessType::kBondSellBack] = "";
        const_summary_g[AgwBusinessType::kOptionExercise] = "";
        const_summary_g[AgwBusinessType::kOpenFundPurchaseRedemption] = "";
        const_summary_g[AgwBusinessType::kTenderOffer] = "";
        const_summary_g[AgwBusinessType::kPledgeRepoPledgeOrSign] = "";
        const_summary_g[AgwBusinessType::kDesignation] = "";
        const_summary_g[AgwBusinessType::kVote] = "";
        const_summary_g[AgwBusinessType::kDesignatedTransaction] = "";
        const_summary_g[AgwBusinessType::kWarrantsExercise] = "";
        const_summary_g[AgwBusinessType::kPasswordService] = "";
        const_summary_g[AgwBusinessType::kOpenMarginQuery] = "";
        const_summary_g[AgwBusinessType::kOpenFundSetting] = "";
        const_summary_g[AgwBusinessType::kTurnToDisposal] = "";
        const_summary_g[AgwBusinessType::kCouponSwap] = "";
        const_summary_g[AgwBusinessType::kPayOff] = "";
        const_summary_g[AgwBusinessType::kBondPledgeAgreementRepo] = "";
        const_summary_g[AgwBusinessType::kLevelFundRealTimeOpenOrMerge] = "";
        const_summary_g[AgwBusinessType::kCoverLockOrUnlock] = "";
        const_summary_g[AgwBusinessType::kHKStocksThrough] = "";
        const_summary_g[AgwBusinessType::kTibAfterHour] = "";
        const_summary_g[AgwBusinessType::kMarginTrade] = "";
        const_summary_g[AgwBusinessType::kCreditAuction] = "";
        const_summary_g[AgwBusinessType::kMarginTrading] = "";
        const_summary_g[AgwBusinessType::kDirectRepay] = "";
        const_summary_g[AgwBusinessType::kCollateralInOrOut] = "";
        const_summary_g[AgwBusinessType::kBuySecuRepay] = "";
        const_summary_g[AgwBusinessType::kCurSecuRepay] = "";
        const_summary_g[AgwBusinessType::kCreditVote] = "";
        const_summary_g[AgwBusinessType::kDirectRepayAppoint] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<BusinessType_def, std::string> const_desc_g;
    static std::map<BusinessType_def, std::string> const_summary_g;
};
/*
 * @brief 货币种类
 */
struct EXPORT_MACRO_DEFINE AgwCurrency
{
    static const Currency_def kCNY;  ///< 人民币
    static const Currency_def kUSD;  ///< 美元
    static const Currency_def kHKD;  ///< 港币
/*
 * @brief msg check
 */
    static bool IsValid(const Currency_def& value)
    {
        if (
            value != AgwCurrency::kCNY
            && value != AgwCurrency::kUSD
            && value != AgwCurrency::kHKD
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const Currency_def& value)
    {
        std::map<Currency_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwCurrency::kCNY] = "人民币";
        const_desc_g[AgwCurrency::kUSD] = "美元";
        const_desc_g[AgwCurrency::kHKD] = "港币";
        return true;
    }
    static std::string GetSummary(const Currency_def& value)
    {
        std::map<Currency_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwCurrency::kCNY] = "";
        const_summary_g[AgwCurrency::kUSD] = "";
        const_summary_g[AgwCurrency::kHKD] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<Currency_def, std::string> const_desc_g;
    static std::map<Currency_def, std::string> const_summary_g;
};
/*
 * @brief 认沽认购
 */
struct EXPORT_MACRO_DEFINE AgwCallOrPut
{
    static const CallOrPut_def kCall;  ///< 认购
    static const CallOrPut_def kPut;  ///< 认沽
/*
 * @brief msg check
 */
    static bool IsValid(const CallOrPut_def& value)
    {
        if (
            value != AgwCallOrPut::kCall
            && value != AgwCallOrPut::kPut
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const CallOrPut_def& value)
    {
        std::map<CallOrPut_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwCallOrPut::kCall] = "认购";
        const_desc_g[AgwCallOrPut::kPut] = "认沽";
        return true;
    }
    static std::string GetSummary(const CallOrPut_def& value)
    {
        std::map<CallOrPut_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwCallOrPut::kCall] = "";
        const_summary_g[AgwCallOrPut::kPut] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<CallOrPut_def, std::string> const_desc_g;
    static std::map<CallOrPut_def, std::string> const_summary_g;
};
/*
 * @brief 信用标识
 */
struct EXPORT_MACRO_DEFINE AgwCashMargin
{
    static const CashMargin_def kCash;  ///< 普通交易
    static const CashMargin_def kOpen;  ///< 融资融券开仓
    static const CashMargin_def kClose;  ///< 融资融券平仓
/*
 * @brief msg check
 */
    static bool IsValid(const CashMargin_def& value)
    {
        if (
            value != AgwCashMargin::kCash
            && value != AgwCashMargin::kOpen
            && value != AgwCashMargin::kClose
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const CashMargin_def& value)
    {
        std::map<CashMargin_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwCashMargin::kCash] = "普通交易";
        const_desc_g[AgwCashMargin::kOpen] = "融资融券开仓";
        const_desc_g[AgwCashMargin::kClose] = "融资融券平仓";
        return true;
    }
    static std::string GetSummary(const CashMargin_def& value)
    {
        std::map<CashMargin_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwCashMargin::kCash] = "";
        const_summary_g[AgwCashMargin::kOpen] = "";
        const_summary_g[AgwCashMargin::kClose] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<CashMargin_def, std::string> const_desc_g;
    static std::map<CashMargin_def, std::string> const_summary_g;
};
/*
 * @brief 备兑
 */
struct EXPORT_MACRO_DEFINE AgwCoveredUncovered
{
    static const CoveredOrUncovered_def kCovered = 0;  ///< 备兑仓
    static const CoveredOrUncovered_def kUncovered = 1;  ///< 普通仓
/*
 * @brief msg check
 */
    static bool IsValid(const CoveredOrUncovered_def& value)
    {
        if (
            value != AgwCoveredUncovered::kCovered
            && value != AgwCoveredUncovered::kUncovered
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const CoveredOrUncovered_def& value)
    {
        std::map<CoveredOrUncovered_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwCoveredUncovered::kCovered] = "备兑仓";
        const_desc_g[AgwCoveredUncovered::kUncovered] = "普通仓";
        return true;
    }
    static std::string GetSummary(const CoveredOrUncovered_def& value)
    {
        std::map<CoveredOrUncovered_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwCoveredUncovered::kCovered] = "";
        const_summary_g[AgwCoveredUncovered::kUncovered] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<CoveredOrUncovered_def, std::string> const_desc_g;
    static std::map<CoveredOrUncovered_def, std::string> const_summary_g;
};
/*
 * @brief 转托管注册指令类型
 */
struct EXPORT_MACRO_DEFINE AgwDesignationTransType
{
    static const DesignationTransType_def kNew = 1;  ///< 新注册请求
    static const DesignationTransType_def kCancel = 3;  ///< 注册撤销
/*
 * @brief msg check
 */
    static bool IsValid(const DesignationTransType_def& value)
    {
        if (
            value != AgwDesignationTransType::kNew
            && value != AgwDesignationTransType::kCancel
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const DesignationTransType_def& value)
    {
        std::map<DesignationTransType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwDesignationTransType::kNew] = "新注册请求";
        const_desc_g[AgwDesignationTransType::kCancel] = "注册撤销";
        return true;
    }
    static std::string GetSummary(const DesignationTransType_def& value)
    {
        std::map<DesignationTransType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwDesignationTransType::kNew] = "";
        const_summary_g[AgwDesignationTransType::kCancel] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<DesignationTransType_def, std::string> const_desc_g;
    static std::map<DesignationTransType_def, std::string> const_summary_g;
};
/*
 * @brief 执行编号类型
 */
struct EXPORT_MACRO_DEFINE AgwExecType
{
    static const ExecType_def kNew;  ///< 新订单
    static const ExecType_def kInternal;  ///< 内部执行
    static const ExecType_def kCancelled;  ///< 已撤销
    static const ExecType_def kReject;  ///< 已拒绝
    static const ExecType_def kTrade;  ///< 已成交
/*
 * @brief msg check
 */
    static bool IsValid(const ExecType_def& value)
    {
        if (
            value != AgwExecType::kNew
            && value != AgwExecType::kInternal
            && value != AgwExecType::kCancelled
            && value != AgwExecType::kReject
            && value != AgwExecType::kTrade
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const ExecType_def& value)
    {
        std::map<ExecType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwExecType::kNew] = "新订单";
        const_desc_g[AgwExecType::kInternal] = "内部执行";
        const_desc_g[AgwExecType::kCancelled] = "已撤销";
        const_desc_g[AgwExecType::kReject] = "已拒绝";
        const_desc_g[AgwExecType::kTrade] = "已成交";
        return true;
    }
    static std::string GetSummary(const ExecType_def& value)
    {
        std::map<ExecType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwExecType::kNew] = "";
        const_summary_g[AgwExecType::kInternal] = "";
        const_summary_g[AgwExecType::kCancelled] = "";
        const_summary_g[AgwExecType::kReject] = "";
        const_summary_g[AgwExecType::kTrade] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<ExecType_def, std::string> const_desc_g;
    static std::map<ExecType_def, std::string> const_summary_g;
};
/*
 * @brief 证券所属市场
 */
struct EXPORT_MACRO_DEFINE AgwMarketID
{
    static const MarketID_def kNULL = 0;  ///< 空
    static const MarketID_def kShangHai = 101;  ///< 上海
    static const MarketID_def kShenZhen = 102;  ///< 深圳
/*
 * @brief msg check
 */
    static bool IsValid(const MarketID_def& value)
    {
        if (
            value != AgwMarketID::kNULL
            && value != AgwMarketID::kShangHai
            && value != AgwMarketID::kShenZhen
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const MarketID_def& value)
    {
        std::map<MarketID_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwMarketID::kNULL] = "空";
        const_desc_g[AgwMarketID::kShangHai] = "上海";
        const_desc_g[AgwMarketID::kShenZhen] = "深圳";
        return true;
    }
    static std::string GetSummary(const MarketID_def& value)
    {
        std::map<MarketID_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwMarketID::kNULL] = "";
        const_summary_g[AgwMarketID::kShangHai] = "";
        const_summary_g[AgwMarketID::kShenZhen] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<MarketID_def, std::string> const_desc_g;
    static std::map<MarketID_def, std::string> const_summary_g;
};
/*
 * @brief 订单状态
 */
struct EXPORT_MACRO_DEFINE AgwOrdStatus
{
    static const OrdStatus_def kNew = 0;  ///< 已申报
    static const OrdStatus_def kPartiallyFilled = 1;  ///< 部分成交
    static const OrdStatus_def kFilled = 2;  ///< 全部成交
    static const OrdStatus_def kPartiallyFilledPartiallyCancelled = 3;  ///< 部分成交部分撤销
    static const OrdStatus_def kCancelled = 4;  ///< 已撤销
    static const OrdStatus_def kPartiallyCancelled = 5;  ///< 部分撤销
    static const OrdStatus_def kReject = 8;  ///< 已拒绝
    static const OrdStatus_def kUnSend = 9;  ///< 未申报
    static const OrdStatus_def kSended = 10;  ///< 正报
    static const OrdStatus_def kWaitCancelled = 11;  ///< 待撤销
    static const OrdStatus_def kPartiallyFilledWaitCancelled = 12;  ///< 部成待撤
/*
 * @brief msg check
 */
    static bool IsValid(const OrdStatus_def& value)
    {
        if (
            value != AgwOrdStatus::kNew
            && value != AgwOrdStatus::kPartiallyFilled
            && value != AgwOrdStatus::kFilled
            && value != AgwOrdStatus::kPartiallyFilledPartiallyCancelled
            && value != AgwOrdStatus::kCancelled
            && value != AgwOrdStatus::kPartiallyCancelled
            && value != AgwOrdStatus::kReject
            && value != AgwOrdStatus::kUnSend
            && value != AgwOrdStatus::kSended
            && value != AgwOrdStatus::kWaitCancelled
            && value != AgwOrdStatus::kPartiallyFilledWaitCancelled
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const OrdStatus_def& value)
    {
        std::map<OrdStatus_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwOrdStatus::kNew] = "已申报";
        const_desc_g[AgwOrdStatus::kPartiallyFilled] = "部分成交";
        const_desc_g[AgwOrdStatus::kFilled] = "全部成交";
        const_desc_g[AgwOrdStatus::kPartiallyFilledPartiallyCancelled] = "部分成交部分撤销";
        const_desc_g[AgwOrdStatus::kCancelled] = "已撤销";
        const_desc_g[AgwOrdStatus::kPartiallyCancelled] = "部分撤销";
        const_desc_g[AgwOrdStatus::kReject] = "已拒绝";
        const_desc_g[AgwOrdStatus::kUnSend] = "未申报";
        const_desc_g[AgwOrdStatus::kSended] = "正报";
        const_desc_g[AgwOrdStatus::kWaitCancelled] = "待撤销";
        const_desc_g[AgwOrdStatus::kPartiallyFilledWaitCancelled] = "部成待撤";
        return true;
    }
    static std::string GetSummary(const OrdStatus_def& value)
    {
        std::map<OrdStatus_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwOrdStatus::kNew] = "";
        const_summary_g[AgwOrdStatus::kPartiallyFilled] = "";
        const_summary_g[AgwOrdStatus::kFilled] = "";
        const_summary_g[AgwOrdStatus::kPartiallyFilledPartiallyCancelled] = "";
        const_summary_g[AgwOrdStatus::kCancelled] = "";
        const_summary_g[AgwOrdStatus::kPartiallyCancelled] = "";
        const_summary_g[AgwOrdStatus::kReject] = "";
        const_summary_g[AgwOrdStatus::kUnSend] = "";
        const_summary_g[AgwOrdStatus::kSended] = "";
        const_summary_g[AgwOrdStatus::kWaitCancelled] = "";
        const_summary_g[AgwOrdStatus::kPartiallyFilledWaitCancelled] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<OrdStatus_def, std::string> const_desc_g;
    static std::map<OrdStatus_def, std::string> const_summary_g;
};
/*
 * @brief 订单类型
 */
struct EXPORT_MACRO_DEFINE AgwOrdType
{
    static const OrdType_def kMarket;  ///< 市价
    static const OrdType_def kFixed;  ///< 限价
    static const OrdType_def kLocalOptimal;  ///< 本方最优
    static const OrdType_def kTransferFixed;  ///< 市价剩余转限价,适用于上交所
/*
 * @brief msg check
 */
    static bool IsValid(const OrdType_def& value)
    {
        if (
            value != AgwOrdType::kMarket
            && value != AgwOrdType::kFixed
            && value != AgwOrdType::kLocalOptimal
            && value != AgwOrdType::kTransferFixed
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const OrdType_def& value)
    {
        std::map<OrdType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwOrdType::kMarket] = "市价";
        const_desc_g[AgwOrdType::kFixed] = "限价";
        const_desc_g[AgwOrdType::kLocalOptimal] = "本方最优";
        const_desc_g[AgwOrdType::kTransferFixed] = "市价剩余转限价,适用于上交所";
        return true;
    }
    static std::string GetSummary(const OrdType_def& value)
    {
        std::map<OrdType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwOrdType::kMarket] = "";
        const_summary_g[AgwOrdType::kFixed] = "";
        const_summary_g[AgwOrdType::kLocalOptimal] = "";
        const_summary_g[AgwOrdType::kTransferFixed] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<OrdType_def, std::string> const_desc_g;
    static std::map<OrdType_def, std::string> const_summary_g;
};
/*
 * @brief 开平仓标识
 */
struct EXPORT_MACRO_DEFINE AgwPositionEffect
{
    static const PositionEffect_def kOpen;  ///< 开仓
    static const PositionEffect_def kClose;  ///< 平仓
/*
 * @brief msg check
 */
    static bool IsValid(const PositionEffect_def& value)
    {
        if (
            value != AgwPositionEffect::kOpen
            && value != AgwPositionEffect::kClose
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const PositionEffect_def& value)
    {
        std::map<PositionEffect_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwPositionEffect::kOpen] = "开仓";
        const_desc_g[AgwPositionEffect::kClose] = "平仓";
        return true;
    }
    static std::string GetSummary(const PositionEffect_def& value)
    {
        std::map<PositionEffect_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwPositionEffect::kOpen] = "";
        const_summary_g[AgwPositionEffect::kClose] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<PositionEffect_def, std::string> const_desc_g;
    static std::map<PositionEffect_def, std::string> const_summary_g;
};
/*
 * @brief 排序方法
 */
struct EXPORT_MACRO_DEFINE AgwReturnSeq
{
    static const ReturnSeq_def kTimeOrder = 1;  ///< 按时间正序
    static const ReturnSeq_def kTimeOrderRe = 2;  ///< 按时间倒序
/*
 * @brief msg check
 */
    static bool IsValid(const ReturnSeq_def& value)
    {
        if (
            value != AgwReturnSeq::kTimeOrder
            && value != AgwReturnSeq::kTimeOrderRe
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const ReturnSeq_def& value)
    {
        std::map<ReturnSeq_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwReturnSeq::kTimeOrder] = "按时间正序";
        const_desc_g[AgwReturnSeq::kTimeOrderRe] = "按时间倒序";
        return true;
    }
    static std::string GetSummary(const ReturnSeq_def& value)
    {
        std::map<ReturnSeq_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwReturnSeq::kTimeOrder] = "";
        const_summary_g[AgwReturnSeq::kTimeOrderRe] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<ReturnSeq_def, std::string> const_desc_g;
    static std::map<ReturnSeq_def, std::string> const_summary_g;
};
/*
 * @brief 买卖方向
 */
struct EXPORT_MACRO_DEFINE AgwSide
{
    static const Side_def kAll;  ///< 所有
    static const Side_def kBuy;  ///< 买
    static const Side_def kSell;  ///< 卖
    static const Side_def kRepo;  ///< 正回购
    static const Side_def kAntiRepo;  ///< 逆回购
    static const Side_def kSwap;  ///< 转股
    static const Side_def kPutBack;  ///< 回售
    static const Side_def kTenderOffer;  ///< 预受要约
    static const Side_def kDisTenderOffer;  ///< 解除预受要约
    static const Side_def kActivation;  ///< 密码激活
    static const Side_def kCancellation;  ///< 密码注销
    static const Side_def kPurchase;  ///< 申购
    static const Side_def kRedeem;  ///< 赎回
    static const Side_def kBorrow;  ///< 借入
    static const Side_def kLoan;  ///< 出借
    static const Side_def kPhysicalPurchase;  ///< 实物申购
    static const Side_def kPhysicalRedemption;  ///< 实物赎回
    static const Side_def kOpen;  ///< 分拆
    static const Side_def kMerge;  ///< 合并
    static const Side_def kPledgeIn;  ///< 入库
    static const Side_def kPledgeOut;  ///< 出库
    static const Side_def kTransformIn;  ///< 转入
    static const Side_def kTransformOut;  ///< 转出
    static const Side_def kAddClose;  ///< 追加平仓
    static const Side_def kClearClose;  ///< 清偿平仓
    static const Side_def kAddForceSell;  ///< 追加强卖
    static const Side_def kClearForceSell;  ///< 清偿强卖
/*
 * @brief msg check
 */
    static bool IsValid(const Side_def& value)
    {
        if (
            value != AgwSide::kAll
            && value != AgwSide::kBuy
            && value != AgwSide::kSell
            && value != AgwSide::kRepo
            && value != AgwSide::kAntiRepo
            && value != AgwSide::kSwap
            && value != AgwSide::kPutBack
            && value != AgwSide::kTenderOffer
            && value != AgwSide::kDisTenderOffer
            && value != AgwSide::kActivation
            && value != AgwSide::kCancellation
            && value != AgwSide::kPurchase
            && value != AgwSide::kRedeem
            && value != AgwSide::kBorrow
            && value != AgwSide::kLoan
            && value != AgwSide::kPhysicalPurchase
            && value != AgwSide::kPhysicalRedemption
            && value != AgwSide::kOpen
            && value != AgwSide::kMerge
            && value != AgwSide::kPledgeIn
            && value != AgwSide::kPledgeOut
            && value != AgwSide::kTransformIn
            && value != AgwSide::kTransformOut
            && value != AgwSide::kAddClose
            && value != AgwSide::kClearClose
            && value != AgwSide::kAddForceSell
            && value != AgwSide::kClearForceSell
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const Side_def& value)
    {
        std::map<Side_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwSide::kAll] = "所有";
        const_desc_g[AgwSide::kBuy] = "买";
        const_desc_g[AgwSide::kSell] = "卖";
        const_desc_g[AgwSide::kRepo] = "正回购";
        const_desc_g[AgwSide::kAntiRepo] = "逆回购";
        const_desc_g[AgwSide::kSwap] = "转股";
        const_desc_g[AgwSide::kPutBack] = "回售";
        const_desc_g[AgwSide::kTenderOffer] = "预受要约";
        const_desc_g[AgwSide::kDisTenderOffer] = "解除预受要约";
        const_desc_g[AgwSide::kActivation] = "密码激活";
        const_desc_g[AgwSide::kCancellation] = "密码注销";
        const_desc_g[AgwSide::kPurchase] = "申购";
        const_desc_g[AgwSide::kRedeem] = "赎回";
        const_desc_g[AgwSide::kBorrow] = "借入";
        const_desc_g[AgwSide::kLoan] = "出借";
        const_desc_g[AgwSide::kPhysicalPurchase] = "实物申购";
        const_desc_g[AgwSide::kPhysicalRedemption] = "实物赎回";
        const_desc_g[AgwSide::kOpen] = "分拆";
        const_desc_g[AgwSide::kMerge] = "合并";
        const_desc_g[AgwSide::kPledgeIn] = "入库";
        const_desc_g[AgwSide::kPledgeOut] = "出库";
        const_desc_g[AgwSide::kTransformIn] = "转入";
        const_desc_g[AgwSide::kTransformOut] = "转出";
        const_desc_g[AgwSide::kAddClose] = "追加平仓";
        const_desc_g[AgwSide::kClearClose] = "清偿平仓";
        const_desc_g[AgwSide::kAddForceSell] = "追加强卖";
        const_desc_g[AgwSide::kClearForceSell] = "清偿强卖";
        return true;
    }
    static std::string GetSummary(const Side_def& value)
    {
        std::map<Side_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwSide::kAll] = "";
        const_summary_g[AgwSide::kBuy] = "";
        const_summary_g[AgwSide::kSell] = "";
        const_summary_g[AgwSide::kRepo] = "";
        const_summary_g[AgwSide::kAntiRepo] = "";
        const_summary_g[AgwSide::kSwap] = "";
        const_summary_g[AgwSide::kPutBack] = "";
        const_summary_g[AgwSide::kTenderOffer] = "";
        const_summary_g[AgwSide::kDisTenderOffer] = "";
        const_summary_g[AgwSide::kActivation] = "";
        const_summary_g[AgwSide::kCancellation] = "";
        const_summary_g[AgwSide::kPurchase] = "";
        const_summary_g[AgwSide::kRedeem] = "";
        const_summary_g[AgwSide::kBorrow] = "";
        const_summary_g[AgwSide::kLoan] = "";
        const_summary_g[AgwSide::kPhysicalPurchase] = "";
        const_summary_g[AgwSide::kPhysicalRedemption] = "";
        const_summary_g[AgwSide::kOpen] = "";
        const_summary_g[AgwSide::kMerge] = "";
        const_summary_g[AgwSide::kPledgeIn] = "";
        const_summary_g[AgwSide::kPledgeOut] = "";
        const_summary_g[AgwSide::kTransformIn] = "";
        const_summary_g[AgwSide::kTransformOut] = "";
        const_summary_g[AgwSide::kAddClose] = "";
        const_summary_g[AgwSide::kClearClose] = "";
        const_summary_g[AgwSide::kAddForceSell] = "";
        const_summary_g[AgwSide::kClearForceSell] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<Side_def, std::string> const_desc_g;
    static std::map<Side_def, std::string> const_summary_g;
};
/*
 * @brief 订单有效期类型,默认限价为GFD,市价为IOC
 */
struct EXPORT_MACRO_DEFINE AgwTimeInForce
{
    static const TimeInForce_def kGFD;  ///< 当日有效
    static const TimeInForce_def kIOC;  ///< 即时成交剩余撤销
    static const TimeInForce_def kFOK;  ///< 即时全部成交或撤销,适用于上交所
/*
 * @brief msg check
 */
    static bool IsValid(const TimeInForce_def& value)
    {
        if (
            value != AgwTimeInForce::kGFD
            && value != AgwTimeInForce::kIOC
            && value != AgwTimeInForce::kFOK
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const TimeInForce_def& value)
    {
        std::map<TimeInForce_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[AgwTimeInForce::kGFD] = "当日有效";
        const_desc_g[AgwTimeInForce::kIOC] = "即时成交剩余撤销";
        const_desc_g[AgwTimeInForce::kFOK] = "即时全部成交或撤销,适用于上交所";
        return true;
    }
    static std::string GetSummary(const TimeInForce_def& value)
    {
        std::map<TimeInForce_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[AgwTimeInForce::kGFD] = "";
        const_summary_g[AgwTimeInForce::kIOC] = "";
        const_summary_g[AgwTimeInForce::kFOK] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<TimeInForce_def, std::string> const_desc_g;
    static std::map<TimeInForce_def, std::string> const_summary_g;
};
/*
 * @brief 信用方向
 */
struct EXPORT_MACRO_DEFINE CreditDirect
{
    static const CreditDirect_def kMarginBuy;  ///< 融资买入
    static const CreditDirect_def kMarginSell;  ///< 融券卖出
/*
 * @brief msg check
 */
    static bool IsValid(const CreditDirect_def& value)
    {
        if (
            value != CreditDirect::kMarginBuy
            && value != CreditDirect::kMarginSell
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const CreditDirect_def& value)
    {
        std::map<CreditDirect_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[CreditDirect::kMarginBuy] = "融资买入";
        const_desc_g[CreditDirect::kMarginSell] = "融券卖出";
        return true;
    }
    static std::string GetSummary(const CreditDirect_def& value)
    {
        std::map<CreditDirect_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[CreditDirect::kMarginBuy] = "";
        const_summary_g[CreditDirect::kMarginSell] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<CreditDirect_def, std::string> const_desc_g;
    static std::map<CreditDirect_def, std::string> const_summary_g;
};
/*
 * @brief 负债合约明细类型
 */
struct EXPORT_MACRO_DEFINE DebtsDetailKind
{
    static const DebtsDetailKind_def kLittleLoan;  ///< 小贷
    static const DebtsDetailKind_def kLockShare;  ///< 锁券
    static const DebtsDetailKind_def kSpec;  ///< 专户
/*
 * @brief msg check
 */
    static bool IsValid(const DebtsDetailKind_def& value)
    {
        if (
            value != DebtsDetailKind::kLittleLoan
            && value != DebtsDetailKind::kLockShare
            && value != DebtsDetailKind::kSpec
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const DebtsDetailKind_def& value)
    {
        std::map<DebtsDetailKind_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[DebtsDetailKind::kLittleLoan] = "小贷";
        const_desc_g[DebtsDetailKind::kLockShare] = "锁券";
        const_desc_g[DebtsDetailKind::kSpec] = "专户";
        return true;
    }
    static std::string GetSummary(const DebtsDetailKind_def& value)
    {
        std::map<DebtsDetailKind_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[DebtsDetailKind::kLittleLoan] = "";
        const_summary_g[DebtsDetailKind::kLockShare] = "";
        const_summary_g[DebtsDetailKind::kSpec] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<DebtsDetailKind_def, std::string> const_desc_g;
    static std::map<DebtsDetailKind_def, std::string> const_summary_g;
};
/*
 * @brief 查询方向
 */
struct EXPORT_MACRO_DEFINE CreditDebtsQueryFlag
{
    static const CreditDebtsQueryFlag_def kNULL;  ///< 空值
    static const CreditDebtsQueryFlag_def kDESC;  ///< 倒序
    static const CreditDebtsQueryFlag_def kASC;  ///< 顺序
/*
 * @brief msg check
 */
    static bool IsValid(const CreditDebtsQueryFlag_def& value)
    {
        if (
            value != CreditDebtsQueryFlag::kNULL
            && value != CreditDebtsQueryFlag::kDESC
            && value != CreditDebtsQueryFlag::kASC
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const CreditDebtsQueryFlag_def& value)
    {
        std::map<CreditDebtsQueryFlag_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[CreditDebtsQueryFlag::kNULL] = "空值";
        const_desc_g[CreditDebtsQueryFlag::kDESC] = "倒序";
        const_desc_g[CreditDebtsQueryFlag::kASC] = "顺序";
        return true;
    }
    static std::string GetSummary(const CreditDebtsQueryFlag_def& value)
    {
        std::map<CreditDebtsQueryFlag_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[CreditDebtsQueryFlag::kNULL] = "";
        const_summary_g[CreditDebtsQueryFlag::kDESC] = "";
        const_summary_g[CreditDebtsQueryFlag::kASC] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<CreditDebtsQueryFlag_def, std::string> const_desc_g;
    static std::map<CreditDebtsQueryFlag_def, std::string> const_summary_g;
};
/*
 * @brief 抽象业务编码
 */
struct EXPORT_MACRO_DEFINE BusinessAbstractType
{
    static const BusinessAbstractType_def kNULL = 0;  ///<  
    static const BusinessAbstractType_def kSpot = 1;  ///< 现货业务
    static const BusinessAbstractType_def kOption = 2;  ///< 经纪期权
    static const BusinessAbstractType_def kCredit = 3;  ///< 两融业务
/*
 * @brief msg check
 */
    static bool IsValid(const BusinessAbstractType_def& value)
    {
        if (
            value != BusinessAbstractType::kNULL
            && value != BusinessAbstractType::kSpot
            && value != BusinessAbstractType::kOption
            && value != BusinessAbstractType::kCredit
            )
        {
            return false;
        }
        return true;
    }
    static std::string GetDesc(const BusinessAbstractType_def& value)
    {
        std::map<BusinessAbstractType_def, std::string>::iterator iter =
            const_desc_g.find(value);
        if (iter != const_desc_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitDesc()
    {
        const_desc_g[BusinessAbstractType::kNULL] = " ";
        const_desc_g[BusinessAbstractType::kSpot] = "现货业务";
        const_desc_g[BusinessAbstractType::kOption] = "经纪期权";
        const_desc_g[BusinessAbstractType::kCredit] = "两融业务";
        return true;
    }
    static std::string GetSummary(const BusinessAbstractType_def& value)
    {
        std::map<BusinessAbstractType_def, std::string>::iterator iter =
            const_summary_g.find(value);
		   if (iter != const_summary_g.end())
        {
            return iter->second;
        }
        else
        {
            return "";
        }
    }
    static bool InitSummary()
    {
        const_summary_g[BusinessAbstractType::kNULL] = "";
        const_summary_g[BusinessAbstractType::kSpot] = "";
        const_summary_g[BusinessAbstractType::kOption] = "";
        const_summary_g[BusinessAbstractType::kCredit] = "";
        return true;
    }
    static bool init_desc_g;
    static bool init_summary_g;
    static std::map<BusinessAbstractType_def, std::string> const_desc_g;
    static std::map<BusinessAbstractType_def, std::string> const_summary_g;
};
}
}
#endif // ATP_GW_CONSTANTS__H_
