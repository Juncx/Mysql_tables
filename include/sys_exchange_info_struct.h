#pragma once

enum SYS_EXCHANGE_INFO_TABLE_DESC : int {
	E_EXCHANGEID = 0,
	E_EXCHANGECODE,
	E_EXCHANGENAME,
	E_END
};

const char* const SYS_EXCHANGE_INFO_TABLE = "sys_exchange_info";

const char* const SYS_EXCHANGE_INFO_TABLE_COLS[E_END] = {
	"exchangeID",
	"exchangeCode",
	"exchangeName",
};

const char* const SYS_EXCHANGE_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '交易所id'",
	"char(10) COLLATE utf8_bin NOT NULL COMMENT '交易所代码'",
	"char(24) COLLATE utf8_bin NOT NULL COMMENT '交易所名称'",
};