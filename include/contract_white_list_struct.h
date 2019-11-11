#pragma once

enum CONTRACT_WHITE_LIST_TABLE_DESC : int {
	E_COWHLI_CONTRACTID = 0,
	E_COWHLI_PRODUCTID,
	E_COWHLI_END
};

const char* const CONTRACT_WHITE_LIST_TABLE = "contract_white_list";

const char* const CONTRACT_WHITE_LIST_TABLE_COLS[E_COWHLI_END] = {
	"contractID",
	"productID",
};

const char* const CONTRACT_WHITE_LIST_TABLE_COLS_ATTR[E_COWHLI_END] = {
	"varchar(32) COLLATE utf8_general_ci NOT NULL",
	"varchar(32) COLLATE utf8_general_ci",
};