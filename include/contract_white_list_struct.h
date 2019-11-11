#pragma once

enum CONTRACT_WHITE_LIST_TABLE_DESC : int {
	E_CONTRACTID = 0,
	E_PRODUCTID,
	E_END
};

const char* const CONTRACT_WHITE_LIST_TABLE = "contract_white_list";

const char* const CONTRACT_WHITE_LIST_TABLE_COLS[E_END] = {
	"contractID",
	"productID",
};

const char* const CONTRACT_WHITE_LIST_TABLE_COLS_ATTR[E_END] = {
	"varchar(32) COLLATE utf8_general_ci NOT NULL",
	"varchar(32) COLLATE utf8_general_ci",
};