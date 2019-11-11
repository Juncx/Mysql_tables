#pragma once

enum FOLLOW_RELATION_SHIP_TABLE_DESC : int {
	E_FORESH_FOLLOWUSERID = 0,
	E_FORESH_TARGETUSERID,
	E_FORESH_MANAGERUSERID,
	E_FORESH_DIRECTION,
	E_FORESH_MULTIPLE,
	E_FORESH_ENABLED,
	E_FORESH_END
};

const char* const FOLLOW_RELATION_SHIP_TABLE = "follow_relation_ship";

const char* const FOLLOW_RELATION_SHIP_TABLE_COLS[E_FORESH_END] = {
	"followUserID",
	"targetUserID",
	"managerUserID",
	"direction",
	"multiple",
	"enabled",
};

const char* const FOLLOW_RELATION_SHIP_TABLE_COLS_ATTR[E_FORESH_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '目标账户ID（被跟单账户、样本账户)'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '跟单账户ID'",
	"tinyint(2) unsigned DEFAULT '0' NOT NULL COMMENT '跟单方向 0同向，1反向'",
	"int(8) DEFAULT '1' NOT NULL COMMENT '跟单倍数'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '目标账户是否开启对冲------ 0  不开启，1开启'",
};