#pragma once

enum USER_IDENTIFY_INFO_TABLE_DESC : int {
	E_USIDIN_USERID = 0,
	E_USIDIN_IDCARD,
	E_USIDIN_BANKNAME,
	E_USIDIN_BRANCHBANK,
	E_USIDIN_BANKCARDNO,
	E_USIDIN_SURNAME,
	E_USIDIN_ISIDENTIFY,
	E_USIDIN_END
};

const char* const USER_IDENTIFY_INFO_TABLE = "user_identify_info";

const char* const USER_IDENTIFY_INFO_TABLE_COLS[E_USIDIN_END] = {
	"userID",
	"IDCard",
	"bankName",
	"branchBank",
	"bankCardNo",
	"surname",
	"isIdentify",
};

const char* const USER_IDENTIFY_INFO_TABLE_COLS_ATTR[E_USIDIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"char(24) COLLATE utf8_bin NOT NULL",
	"char(24) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"char(24) COLLATE utf8_bin NOT NULL",
	"char(12) COLLATE utf8_bin NOT NULL COMMENT '真实姓名'",
	"tinyint(1) NOT NULL COMMENT '是否实名认证，0未认证，1认证'",
};