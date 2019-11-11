#pragma once

enum SYS_SETTLE_PRICE_RECORD_TABLE_DESC : int {
	E_ID = 0,
	E_SETTLEDATE,
	E_CONTRACTID,
	E_CONTRACTPRICE,
	E_END
};

const char* const SYS_SETTLE_PRICE_RECORD_TABLE = "sys_settle_price_record";

const char* const SYS_SETTLE_PRICE_RECORD_TABLE_COLS[E_END] = {
	"id",
	"settleDate",
	"contractID",
	"contractPrice",
};

const char* const SYS_SETTLE_PRICE_RECORD_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) NOT NULL COMMENT '结算日期'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '结算价格'",
};