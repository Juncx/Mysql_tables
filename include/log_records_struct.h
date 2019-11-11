#pragma once

enum LOG_RECORDS_TABLE_DESC : int {
	E_LORE_LOGID = 0,
	E_LORE_USERNAME,
	E_LORE_USERID,
	E_LORE_TYPE,
	E_LORE_OPERATORID,
	E_LORE_OPERATORNAME,
	E_LORE_CREATEDATE,
	E_LORE_CREATETIME,
	E_LORE_DESCRIBETEXT,
	E_LORE_CONTENT,
	E_LORE_SYSMODULE,
	E_LORE_SYSMODULENAME,
	E_LORE_MAC,
	E_LORE_IP,
	E_LORE_END
};

const char* const LOG_RECORDS_TABLE = "log_records";

const char* const LOG_RECORDS_TABLE_COLS[E_LORE_END] = {
	"logID",
	"UserName",
	"userID",
	"type",
	"operatorID",
	"operatorName",
	"createDate",
	"createTime",
	"describeText",
	"content",
	"sysModule",
	"sysModuleName",
	"mac",
	"ip",
};

const char* const LOG_RECORDS_TABLE_COLS_ATTR[E_LORE_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作者名'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作者'",
	"int(2) NOT NULL COMMENT '操作对象类型'",
	"varchar(64) COLLATE utf8_bin COMMENT '操作对象'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作对象名'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
	"varchar(256) COLLATE utf8_bin NOT NULL",
	"varchar(256) COLLATE utf8_bin NOT NULL",
	"tinyint(2) NOT NULL",
	"varchar(24) COLLATE utf8_bin NOT NULL",
	"varchar(32) COLLATE utf8_bin",
	"varchar(128) COLLATE utf8_bin",
};