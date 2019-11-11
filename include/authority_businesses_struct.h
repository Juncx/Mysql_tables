#pragma once

enum AUTHORITY_BUSINESSES_TABLE_DESC : int {
	E_AUBU_BUSSNESSID = 0,
	E_AUBU_BUSSNESSNAME,
	E_AUBU_BUSSNESSTYPE,
	E_AUBU_BUSSNESSADDR,
	E_AUBU_PARENTBUSSNESSID,
	E_AUBU_ISHIDE,
	E_AUBU_END
};

const char* const AUTHORITY_BUSINESSES_TABLE = "authority_businesses";

const char* const AUTHORITY_BUSINESSES_TABLE_COLS[E_AUBU_END] = {
	"bussnessID",
	"bussnessName",
	"bussnessType",
	"bussnessAddr",
	"parentBussnessID",
	"isHide",
};

const char* const AUTHORITY_BUSINESSES_TABLE_COLS_ATTR[E_AUBU_END] = {
	"int(10) unsigned NOT NULL COMMENT '业务ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '业务名称'",
	"tinyint(2) NOT NULL COMMENT '业务类型 1、菜单2、功能'",
	"varchar(20) COLLATE utf8_general_ci NOT NULL COMMENT '业务地址'",
	"int(10) NOT NULL COMMENT '父业务ID'",
	"tinyint(2) NOT NULL COMMENT '是否隐藏 0不隐藏 1隐藏'",
};