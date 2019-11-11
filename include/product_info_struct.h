#pragma once

enum PRODUCT_INFO_TABLE_DESC : int {
	E_PRIN_PRODUCTID = 0,
	E_PRIN_PRODUCTCODE,
	E_PRIN_PRODUCTNAME,
	E_PRIN_EXCHANGEID,
	E_PRIN_CURRENCYCODE,
	E_PRIN_MULTIPLE,
	E_PRIN_TICKSIZE,
	E_PRIN_SETTLETIME,
	E_PRIN_PRECISION,
	E_PRIN_ISLIMIT,
	E_PRIN_LIMITSIZE,
	E_PRIN_END
};

const char* const PRODUCT_INFO_TABLE = "product_info";

const char* const PRODUCT_INFO_TABLE_COLS[E_PRIN_END] = {
	"productID",
	"productCode",
	"productName",
	"exchangeID",
	"currencyCode",
	"multiple",
	"tickSize",
	"settleTime",
	"precision",
	"isLimit",
	"limitSize",
};

const char* const PRODUCT_INFO_TABLE_COLS_ATTR[E_PRIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"varchar(8) COLLATE utf8_bin NOT NULL COMMENT '品种代码'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '品种名'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '交易所code'",
	"varchar(4) COLLATE utf8_bin NOT NULL COMMENT '币种code  USD'",
	"int(10) NOT NULL COMMENT '合约乘数'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '最小变动单位'",
	"int(10) NOT NULL COMMENT '结算时间'",
	"int(2) NOT NULL COMMENT '最小变动单位精度'",
	"int(2) DEFAULT '0' NOT NULL COMMENT '是否只支持限价下单，0否，1是'",
	"int(4) DEFAULT '0' NOT NULL COMMENT '限价加滑点，代表市价但'",
};