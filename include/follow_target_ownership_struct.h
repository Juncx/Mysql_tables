#pragma once

enum FOLLOW_TARGET_OWNERSHIP_TABLE_DESC : int {
	E_ID = 0,
	E_TARGETUSERID,
	E_MANAGERID,
	E_END
};

const char* const FOLLOW_TARGET_OWNERSHIP_TABLE = "follow_target_ownership";

const char* const FOLLOW_TARGET_OWNERSHIP_TABLE_COLS[E_END] = {
	"id",
	"targetUserID",
	"managerID",
};

const char* const FOLLOW_TARGET_OWNERSHIP_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '目标账户ID(被跟单账户ID、样本账户ID)'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
};