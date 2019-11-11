#pragma once

enum PRODUCT_TRADE_TIME_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_PRODUCTID,
	E_TRADETIMEBEGIN,
	E_TRADETIMEEND,
	E_END
};

const char* const PRODUCT_TRADE_TIME_INFO_TABLE = "product_trade_time_info";

const char* const PRODUCT_TRADE_TIME_INFO_TABLE_COLS[E_END] = {
	"id",
	"productID",
	"tradeTimeBegin",
	"tradeTimeEnd",
};

const char* const PRODUCT_TRADE_TIME_INFO_TABLE_COLS_ATTR[E_END] = {
	"int(4) unsigned NOT NULL COMMENT 'id'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"int(10) DEFAULT '-1' COMMENT '交易开始时间  默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
	"int(10) DEFAULT '-1' COMMENT '交易结束时间   默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
};