#pragma once

enum SYS_ONLINE_MONEY_FEE_RATE_TABLE_DESC : int {
	E_PAYCHANNELID = 0,
	E_PAYCHANNELNAME,
	E_OUTFEE,
	E_INFEE,
	E_END
};

const char* const SYS_ONLINE_MONEY_FEE_RATE_TABLE = "sys_online_money_fee_rate";

const char* const SYS_ONLINE_MONEY_FEE_RATE_TABLE_COLS[E_END] = {
	"payChannelID",
	"payChannelName",
	"outFee",
	"inFee",
};

const char* const SYS_ONLINE_MONEY_FEE_RATE_TABLE_COLS_ATTR[E_END] = {
	"int(4) NOT NULL COMMENT '支付渠道ID'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '支付渠道名'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '出金手续费'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '入金手续费'",
};