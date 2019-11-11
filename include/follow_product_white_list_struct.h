#pragma once

enum FOLLOW_PRODUCT_WHITE_LIST_TABLE_DESC : int {
	E_ID = 0,
	E_TARGETUSERID,
	E_FOLLOWUSERID,
	E_MANAGERUSERID,
	E_PRODUCTCODE,
	E_END
};

const char* const FOLLOW_PRODUCT_WHITE_LIST_TABLE = "follow_product_white_list";

const char* const FOLLOW_PRODUCT_WHITE_LIST_TABLE_COLS[E_END] = {
	"id",
	"targetUserID",
	"followUserID",
	"managerUserID",
	"productCode",
};

const char* const FOLLOW_PRODUCT_WHITE_LIST_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"char(8) COLLATE utf8_bin NOT NULL COMMENT '品种'",
};