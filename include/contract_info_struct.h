#pragma once

enum CONTRACT_INFO_TABLE_DESC : int {
	E_CONTRACTID = 0,
	E_CONTRACTCODE,
	E_CONTRACTNAME,
	E_PRODUCTID,
	E_DELIVERYDATE,
	E_ISLIMITPRICE,
	E_ISLOGICDEL,
	E_END
};

const char* const CONTRACT_INFO_TABLE = "contract_info";

const char* const CONTRACT_INFO_TABLE_COLS[E_END] = {
	"contractID",
	"contractCode",
	"contractName",
	"productID",
	"deliveryDate",
	"isLimitPrice",
	"isLogicDel",
};

const char* const CONTRACT_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '合约代码'",
	"varchar(24) COLLATE utf8_bin NOT NULL COMMENT '合约名'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"int(10) NOT NULL COMMENT '交割日'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否只能下限价单；1是，0否'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否逻辑删除，1是0否'",
};