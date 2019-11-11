#pragma once

enum SETTLE_TRADE_INFO_RECORD_TABLE_DESC : int {
	E_SETRINRE_ID = 0,
	E_SETRINRE_SETTLEDATE,
	E_SETRINRE_SETTLETIME,
	E_SETRINRE_TRADEID,
	E_SETRINRE_POSITIONID,
	E_SETRINRE_USERID,
	E_SETRINRE_CONTRACTID,
	E_SETRINRE_VOLUME,
	E_SETRINRE_CLOSEPROFIT,
	E_SETRINRE_TRADEPRICE,
	E_SETRINRE_CONTRACTNAME,
	E_SETRINRE_ACCOUNTNAME,
	E_SETRINRE_GENERATEDATE,
	E_SETRINRE_GENERATETIME,
	E_SETRINRE_DIRECTION,
	E_SETRINRE_SHADOWORDERID,
	E_SETRINRE_FEE,
	E_SETRINRE_CONTRACTFEE,
	E_SETRINRE_PRICETYPE,
	E_SETRINRE_OPENOFFSET,
	E_SETRINRE_EXCHANGETRADEID,
	E_SETRINRE_SHADOWTRADEID,
	E_SETRINRE_TURNOVER,
	E_SETRINRE_ORDERID,
	E_SETRINRE_TARGETUSERID,
	E_SETRINRE_CURRENCY,
	E_SETRINRE_END
};

const char* const SETTLE_TRADE_INFO_RECORD_TABLE = "settle_trade_info_record";

const char* const SETTLE_TRADE_INFO_RECORD_TABLE_COLS[E_SETRINRE_END] = {
	"id",
	"settleDate",
	"settleTime",
	"tradeID",
	"positionID",
	"userID",
	"contractID",
	"volume",
	"closeProfit",
	"tradePrice",
	"contractName",
	"accountName",
	"generateDate",
	"generateTime",
	"direction",
	"shadowOrderID",
	"fee",
	"contractFee",
	"priceType",
	"openOffset",
	"exchangeTradeID",
	"shadowTradeID",
	"turnOver",
	"orderID",
	"targetUserID",
	"currency",
};

const char* const SETTLE_TRADE_INFO_RECORD_TABLE_COLS_ATTR[E_SETRINRE_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) DEFAULT '0' NOT NULL COMMENT '结算日期'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '结算时间'",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '平仓对应的持仓ID'",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '帐户标识（用户ID)， 系统内部使用'",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交手数'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '平仓盈亏，单位为基币'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '成交价格'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '合约名'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '帐户名'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交日期'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交时间'",
	"char(2) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '买卖方向，  \"B\" (buy)表示买， \"S\" (sell)表示卖'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '影子订单编号， 客户端显示使用'",
	"decimal(16,8) NOT NULL COMMENT '系统基币手续费'",
	"decimal(10,0) DEFAULT '0' NOT NULL COMMENT '合约基币手续费'",
	"char(2) COLLATE utf8_bin NOT NULL",
	"smallint(2) DEFAULT '0' NOT NULL COMMENT '开平标志，  1 表示开仓， 2 表示平仓， 3 表示平今'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '交易所成交编号'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '显示成交ID'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '成交额'",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '委托ID, 作成交信息时使用'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '目标账户'",
	"varchar(4) COLLATE utf8_bin NOT NULL COMMENT '币种'",
};