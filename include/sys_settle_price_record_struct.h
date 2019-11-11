#pragma once

enum SYS_SETTLE_PRICE_RECORD_TABLE_DESC : int {
	E_SYSEPRRE_ID = 0,
	E_SYSEPRRE_SETTLEDATE,
	E_SYSEPRRE_CONTRACTID,
	E_SYSEPRRE_CONTRACTPRICE,
	E_SYSEPRRE_END
};

const char* const SYS_SETTLE_PRICE_RECORD_TABLE = "sys_settle_price_record";

const char* const SYS_SETTLE_PRICE_RECORD_TABLE_COLS[E_SYSEPRRE_END] = {
	"id",
	"settleDate",
	"contractID",
	"contractPrice",
};

const char* const SYS_SETTLE_PRICE_RECORD_TABLE_COLS_ATTR[E_SYSEPRRE_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) NOT NULL COMMENT '结算日期'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '结算价格'",
};