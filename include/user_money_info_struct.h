#pragma once

enum USER_MONEY_INFO_TABLE_DESC : int {
	E_USERID = 0,
	E_USERDEPOSIT,
	E_EQUIPMENT,
	E_PREBALANCE,
	E_CURRENTTOTAL,
	E_FROZENOUTMONEY,
	E_TODAYCLOSEPROFIT,
	E_TODAYFEE,
	E_TODAYINMONEY,
	E_TODAYOUTMONEY,
	E_HISTORYPROFIT,
	E_HISTORYFEE,
	E_HISTORYOUTMONEY,
	E_HISTORYINMONEY,
	E_END
};

const char* const USER_MONEY_INFO_TABLE = "user_money_info";

const char* const USER_MONEY_INFO_TABLE_COLS[E_END] = {
	"userID",
	"userDeposit",
	"equipment",
	"preBalance",
	"currentTotal",
	"frozenOutMoney",
	"todayCloseProfit",
	"todayFee",
	"todayInMoney",
	"todayOutMoney",
	"historyProfit",
	"historyFee",
	"historyOutMoney",
	"historyInMoney",
};

const char* const USER_MONEY_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '用户保证金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '配置额度'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '静态权益'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当前资金结余'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '冻结资金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日平仓盈亏'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日手续费'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日入金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当如出金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史盈亏总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史手续费总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史出金总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史入金总和'",
};