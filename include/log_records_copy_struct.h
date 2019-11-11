#pragma once

enum LOG_RECORDS_COPY_TABLE_DESC : int {
	E_LOGID = 0,
	E_USERID,
	E_TYPE,
	E_OPERATORID,
	E_CREATEDATE,
	E_CREATETIME,
	E_DESCRIBETEXT,
	E_CONTENT,
	E_SYSMODULE,
	E_SYSMODULENAME,
	E_MAC,
	E_IP,
	E_END
};

const char* const LOG_RECORDS_COPY_TABLE = "log_records_copy";

const char* const LOG_RECORDS_COPY_TABLE_COLS[E_END] = {
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

const char* const LOG_RECORDS_COPY_TABLE_COLS_ATTR[E_END] = {
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