#pragma once

enum CONTRACT_INFO_TABLE_DESC : int {
	E_COIN_CONTRACTID = 0,
	E_COIN_CONTRACTCODE,
	E_COIN_CONTRACTNAME,
	E_COIN_PRODUCTID,
	E_COIN_DELIVERYDATE,
	E_COIN_ISLIMITPRICE,
	E_COIN_ISLOGICDEL,
	E_COIN_END
};

const char* const CONTRACT_INFO_TABLE = "contract_info";

const char* const CONTRACT_INFO_TABLE_COLS[E_COIN_END] = {
	"contractID",
	"contractCode",
	"contractName",
	"productID",
	"deliveryDate",
	"isLimitPrice",
	"isLogicDel",
};

const char* const CONTRACT_INFO_TABLE_COLS_ATTR[E_COIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '合约代码'",
	"varchar(24) COLLATE utf8_bin NOT NULL COMMENT '合约名'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"int(10) NOT NULL COMMENT '交割日'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否只能下限价单；1是，0否'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否逻辑删除，1是0否'",
};