#pragma once

enum HOLIDAY_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_EXCHANGECODE,
	E_HOLIDAYNAME,
	E_BEGINDATE,
	E_BEGINTIME,
	E_ENDDATE,
	E_ENDTIME,
	E_END
};

const char* const HOLIDAY_INFO_TABLE = "holiday_info";

const char* const HOLIDAY_INFO_TABLE_COLS[E_END] = {
	"id",
	"exchangeCode",
	"holidayName",
	"beginDate",
	"beginTime",
	"endDate",
	"endTime",
};

const char* const HOLIDAY_INFO_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL COMMENT 'id'",
	"varchar(10) COLLATE utf8_bin COMMENT '交易所ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '假日名'",
	"int(10) COMMENT '假日开始日期'",
	"int(10) COMMENT '假日开始时间'",
	"int(10) COMMENT '假日结束日期'",
	"int(10) COMMENT '假日结束时间'",
};