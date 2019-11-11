#pragma once

enum SETTLE_COMMISSION_INFO_TABLE_DESC : int {
	E_SECOIN_ID = 0,
	E_SECOIN_USERID,
	E_SECOIN_TRADEDATE,
	E_SECOIN_SETTLEDATE,
	E_SECOIN_SETTLETIME,
	E_SECOIN_SETTLECOMMISSION,
	E_SECOIN_SETTLEVOLUME,
	E_SECOIN_SETTLEFEE,
	E_SECOIN_END
};

const char* const SETTLE_COMMISSION_INFO_TABLE = "settle_commission_info";

const char* const SETTLE_COMMISSION_INFO_TABLE_COLS[E_SECOIN_END] = {
	"id",
	"userID",
	"tradeDate",
	"settleDate",
	"settleTime",
	"settleCommission",
	"settleVolume",
	"settleFee",
};

const char* const SETTLE_COMMISSION_INFO_TABLE_COLS_ATTR[E_SECOIN_END] = {
	"int(10) NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构id'",
	"int(10) DEFAULT '0' COMMENT '交易日期'",
	"int(10) DEFAULT '0' COMMENT '结算日期'",
	"int(10) DEFAULT '0' COMMENT '结算时间'",
	"decimal(32,8) DEFAULT '0.00000000' COMMENT '结算佣金'",
	"int(10) DEFAULT '0' COMMENT '结算手数'",
	"decimal(10,0) DEFAULT '0' COMMENT '结算手续费'",
};