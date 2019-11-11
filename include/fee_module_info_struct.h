#pragma once

enum FEE_MODULE_INFO_TABLE_DESC : int {
	E_FEMOIN_FEEMODULEID = 0,
	E_FEMOIN_FEEMODULENAME,
	E_FEMOIN_INSTITUTIONID,
	E_FEMOIN_MONITORID,
	E_FEMOIN_MANANGERID,
	E_FEMOIN_END
};

const char* const FEE_MODULE_INFO_TABLE = "fee_module_info";

const char* const FEE_MODULE_INFO_TABLE_COLS[E_FEMOIN_END] = {
	"feeModuleID",
	"feeModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const FEE_MODULE_INFO_TABLE_COLS_ATTR[E_FEMOIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};