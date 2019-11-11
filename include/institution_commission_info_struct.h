#pragma once

enum INSTITUTION_COMMISSION_INFO_TABLE_DESC : int {
	E_INSTITUTIONID = 0,
	E_CURRENTCOMMISSION,
	E_HISTORYCOMMISSION,
	E_HISTORYOUTCOMMISSION,
	E_TODAYOUTCOMMISSION,
	E_TODAYCOMMISSION,
	E_FROZENCOMMISSION,
	E_END
};

const char* const INSTITUTION_COMMISSION_INFO_TABLE = "institution_commission_info";

const char* const INSTITUTION_COMMISSION_INFO_TABLE_COLS[E_END] = {
	"institutionID",
	"currentCommission",
	"historyCommission",
	"historyOutCommission",
	"todayOutCommission",
	"todayCommission",
	"frozenCommission",
};

const char* const INSTITUTION_COMMISSION_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构ID'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当前佣金余额'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史佣金总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '历史佣金出金总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日出金总和'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '当日佣金收入'",
	"decimal(32,8) NOT NULL COMMENT '冻结资金'",
};