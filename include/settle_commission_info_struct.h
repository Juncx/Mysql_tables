#pragma once

enum SETTLE_COMMISSION_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_USERID,
	E_TRADEDATE,
	E_SETTLEDATE,
	E_SETTLETIME,
	E_SETTLECOMMISSION,
	E_SETTLEVOLUME,
	E_SETTLEFEE,
	E_END
};

const char* const SETTLE_COMMISSION_INFO_TABLE = "settle_commission_info";

const char* const SETTLE_COMMISSION_INFO_TABLE_COLS[E_END] = {
	"id",
	"userID",
	"tradeDate",
	"settleDate",
	"settleTime",
	"settleCommission",
	"settleVolume",
	"settleFee",
};

const char* const SETTLE_COMMISSION_INFO_TABLE_COLS_ATTR[E_END] = {
	"int(10) NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构id'",
	"int(10) DEFAULT '0' COMMENT '交易日期'",
	"int(10) DEFAULT '0' COMMENT '结算日期'",
	"int(10) DEFAULT '0' COMMENT '结算时间'",
	"decimal(32,8) DEFAULT '0.00000000' COMMENT '结算佣金'",
	"int(10) DEFAULT '0' COMMENT '结算手数'",
	"decimal(10,0) DEFAULT '0' COMMENT '结算手续费'",
};