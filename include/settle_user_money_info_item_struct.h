#pragma once

enum SETTLE_USER_MONEY_INFO_ITEM_TABLE_DESC : int {
	E_SEUSMOINIT_ID = 0,
	E_SEUSMOINIT_USERID,
	E_SEUSMOINIT_LOGINNAME,
	E_SEUSMOINIT_ACCOUNTNAME,
	E_SEUSMOINIT_PREBALANCE,
	E_SEUSMOINIT_USERDEPOSIT,
	E_SEUSMOINIT_EQUIPMENT,
	E_SEUSMOINIT_AVAILABLEMONEY,
	E_SEUSMOINIT_HOLDMARGIN,
	E_SEUSMOINIT_FEE,
	E_SEUSMOINIT_CLOSEPROFIT,
	E_SEUSMOINIT_CURRENTBALANCE,
	E_SEUSMOINIT_INMONEY,
	E_SEUSMOINIT_OUTMONEY,
	E_SEUSMOINIT_RISKDEGREE,
	E_SEUSMOINIT_SETTLEGAINLOSS,
	E_SEUSMOINIT_SETTLEDATE,
	E_SEUSMOINIT_SETTLETIME,
	E_SEUSMOINIT_END
};

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE = "settle_user_money_info_item";

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE_COLS[E_SEUSMOINIT_END] = {
	"id",
	"userID",
	"loginName",
	"accountName",
	"preBalance",
	"userDeposit",
	"equipment",
	"availableMoney",
	"holdMargin",
	"fee",
	"closeProfit",
	"currentBalance",
	"inMoney",
	"outMoney",
	"riskDegree",
	"settleGainLoss",
	"settleDate",
	"settleTime",
};

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE_COLS_ATTR[E_SEUSMOINIT_END] = {
	"int(8) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '用户ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '用户名'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '账户名'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '静态权益'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '用户保证金,劣后资金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '配资额度，优先资金'",
	"decimal(32,8) NOT NULL COMMENT '可用资金'",
	"decimal(32,8) NOT NULL COMMENT '占用保证金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日手续费'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '平仓盈亏'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日权益'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日入金总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日出金总和'",
	"decimal(32,8) NOT NULL COMMENT '风险度'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '盯市盈亏'",
	"int(8) DEFAULT '-1' NOT NULL COMMENT '日期向前退一天'",
	"int(8) DEFAULT '-1' NOT NULL",
};