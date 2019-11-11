#pragma once

enum SETTLE_USER_CONTEXT_RECORD_TABLE_DESC : int {
	E_SEUSCORE_ID = 0,
	E_SEUSCORE_STARTDATE,
	E_SEUSCORE_ENDDATE,
	E_SEUSCORE_SETTLETYPE,
	E_SEUSCORE_USERID,
	E_SEUSCORE_CONTEXT,
	E_SEUSCORE_END
};

const char* const SETTLE_USER_CONTEXT_RECORD_TABLE = "settle_user_context_record";

const char* const SETTLE_USER_CONTEXT_RECORD_TABLE_COLS[E_SEUSCORE_END] = {
	"id",
	"startDate",
	"endDate",
	"settleType",
	"userID",
	"context",
};

const char* const SETTLE_USER_CONTEXT_RECORD_TABLE_COLS_ATTR[E_SEUSCORE_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '开始日期'",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '结束日期'",
	"tinyint(4) DEFAULT '-1' NOT NULL COMMENT '类型：0日结算；1月结算；2按日期段'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '账户ID'",
	"varchar(2048) COLLATE latin1_swedish_ci NOT NULL COMMENT '结算内容'",
};