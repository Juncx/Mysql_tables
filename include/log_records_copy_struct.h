#pragma once

enum LOG_RECORDS_COPY_TABLE_DESC : int {
	E_LORECO_LOGID = 0,
	E_LORECO_USERID,
	E_LORECO_TYPE,
	E_LORECO_OPERATORID,
	E_LORECO_CREATEDATE,
	E_LORECO_CREATETIME,
	E_LORECO_DESCRIBETEXT,
	E_LORECO_CONTENT,
	E_LORECO_SYSMODULE,
	E_LORECO_SYSMODULENAME,
	E_LORECO_MAC,
	E_LORECO_IP,
	E_LORECO_END
};

const char* const LOG_RECORDS_COPY_TABLE = "log_records_copy";

const char* const LOG_RECORDS_COPY_TABLE_COLS[E_LORECO_END] = {
	"logID",
	"userID",
	"type",
	"operatorID",
	"createDate",
	"createTime",
	"describeText",
	"content",
	"sysModule",
	"sysModuleName",
	"mac",
	"ip",
};

const char* const LOG_RECORDS_COPY_TABLE_COLS_ATTR[E_LORECO_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作者'",
	"int(2) NOT NULL COMMENT '操作对象类型'",
	"varchar(64) COLLATE utf8_bin COMMENT '操作对象'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
	"varchar(256) COLLATE utf8_bin NOT NULL",
	"varchar(256) COLLATE utf8_bin NOT NULL",
	"tinyint(2) NOT NULL",
	"varchar(24) COLLATE utf8_bin NOT NULL",
	"varchar(32) COLLATE utf8_bin",
	"varchar(128) COLLATE utf8_bin",
};