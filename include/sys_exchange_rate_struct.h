#pragma once

enum SYS_EXCHANGE_RATE_TABLE_DESC : int {
	E_ID = 0,
	E_CURRENCY,
	E_CURRENCYNAME,
	E_OUTEXCHANGERATE,
	E_INEXCHANGERATE,
	E_COMMISSIONEXCHANGERATE,
	E_TRADEEXCHANGERATE,
	E_ISBASE,
	E_END
};

const char* const SYS_EXCHANGE_RATE_TABLE = "sys_exchange_rate";

const char* const SYS_EXCHANGE_RATE_TABLE_COLS[E_END] = {
	"id",
	"currency",
	"currencyName",
	"outExchangeRate",
	"inExchangeRate",
	"commissionExchangeRate",
	"tradeExchangeRate",
	"isBase",
};

const char* const SYS_EXCHANGE_RATE_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"char(4) COLLATE utf8_bin NOT NULL COMMENT '币种代码：USD  HKD'",
	"varchar(8) COLLATE utf8_bin NOT NULL COMMENT '币种中文名  美元'",
	"double(16,8) NOT NULL COMMENT '出金汇率'",
	"double(16,8) NOT NULL COMMENT '入金汇率'",
	"double(16,8) NOT NULL COMMENT '佣金出金汇率'",
	"double(16,8) NOT NULL COMMENT '交易汇率'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否是基币，1为基币'",
};