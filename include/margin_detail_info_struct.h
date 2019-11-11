#pragma once

enum MARGIN_DETAIL_INFO_TABLE_DESC : int {
	E_MADEIN_MARGINID = 0,
	E_MADEIN_MARGINMODULEID,
	E_MADEIN_PRODUCTID,
	E_MADEIN_BUYMARGIN,
	E_MADEIN_SELLMARGIN,
	E_MADEIN_MARGINTYPE,
	E_MADEIN_END
};

const char* const MARGIN_DETAIL_INFO_TABLE = "margin_detail_info";

const char* const MARGIN_DETAIL_INFO_TABLE_COLS[E_MADEIN_END] = {
	"marginID",
	"marginModuleID",
	"productID",
	"buyMargin",
	"sellMargin",
	"marginType",
};

const char* const MARGIN_DETAIL_INFO_TABLE_COLS_ATTR[E_MADEIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金ID(主键)'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '多头保证金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '空头保证金'",
	"tinyint(1) NOT NULL COMMENT '保证金收取类型，0按比例，1按固定值'",
};