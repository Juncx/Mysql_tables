#pragma once

enum OPTION_CONTRACT_TABLE_DESC : int {
	E_OPCO_ID = 0,
	E_OPCO_USERID,
	E_OPCO_CONTRACTID,
	E_OPCO_END
};

const char* const OPTION_CONTRACT_TABLE = "option_contract";

const char* const OPTION_CONTRACT_TABLE_COLS[E_OPCO_END] = {
	"id",
	"userID",
	"contractID",
};

const char* const OPTION_CONTRACT_TABLE_COLS_ATTR[E_OPCO_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
};