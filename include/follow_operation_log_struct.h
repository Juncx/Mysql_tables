#pragma once

enum FOLLOW_OPERATION_LOG_TABLE_DESC : int {
	E_ID = 0,
	E_MANAGERID,
	E_MANAGERNAME,
	E_OPERATORMODULE,
	E_OPERATORMODULENAME,
	E_OPERATORID,
	E_OPERATORNAME,
	E_DESCRIBETEXT,
	E_CONTENT,
	E_CREATEDATE,
	E_CREATETIME,
	E_MAC,
	E_IP,
	E_END
};

const char* const FOLLOW_OPERATION_LOG_TABLE = "follow_operation_log";

const char* const FOLLOW_OPERATION_LOG_TABLE_COLS[E_END] = {
	"id",
	"managerID",
	"managerName",
	"operatorModule",
	"operatorModuleName",
	"operatorID",
	"operatorName",
	"describeText",
	"content",
	"createDate",
	"createTime",
	"mac",
	"ip",
};

const char* const FOLLOW_OPERATION_LOG_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作者(管理员ID)'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '操作者名称'",
	"tinyint(2) NOT NULL COMMENT '操作模块类型 1、跟单账户模块 2、管理员模块 3、管理员设置模块 4、对冲模块'",
	"varchar(32) COLLATE utf8_general_ci NOT NULL COMMENT '操作模块名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '操作对象----- userID'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '操作对象名称'",
	"varchar(1024) COLLATE utf8_general_ci NOT NULL COMMENT '内容详细'",
	"varchar(256) COLLATE utf8_bin NOT NULL COMMENT '操作的内容'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
	"varchar(32) COLLATE utf8_bin NOT NULL",
	"varchar(32) COLLATE utf8_bin NOT NULL",
};