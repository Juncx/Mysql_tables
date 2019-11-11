#pragma once

enum SETTLE_USER_MONEY_INFO_ITEM_TABLE_DESC : int {
	E_ID = 0,
	E_USERID,
	E_LOGINNAME,
	E_ACCOUNTNAME,
	E_PREBALANCE,
	E_USERDEPOSIT,
	E_EQUIPMENT,
	E_AVAILABLEMONEY,
	E_HOLDMARGIN,
	E_FEE,
	E_CLOSEPROFIT,
	E_CURRENTBALANCE,
	E_INMONEY,
	E_OUTMONEY,
	E_RISKDEGREE,
	E_SETTLEGAINLOSS,
	E_SETTLEDATE,
	E_SETTLETIME,
	E_END
};

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE = "settle_user_money_info_item";

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE_COLS[E_END] = {
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

const char* const SETTLE_USER_MONEY_INFO_ITEM_TABLE_COLS_ATTR[E_END] = {
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