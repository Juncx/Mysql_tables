#pragma once

enum MARGIN_MODULE_INFO_TABLE_DESC : int {
	E_MARGINMODULEID = 0,
	E_MARGINMODULENAME,
	E_INSTITUTIONID,
	E_MONITORID,
	E_MANANGERID,
	E_END
};

const char* const MARGIN_MODULE_INFO_TABLE = "margin_module_info";

const char* const MARGIN_MODULE_INFO_TABLE_COLS[E_END] = {
	"marginModuleID",
	"marginModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const MARGIN_MODULE_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金模板名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};