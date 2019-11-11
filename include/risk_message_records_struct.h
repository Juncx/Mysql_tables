#pragma once

enum RISK_MESSAGE_RECORDS_TABLE_DESC : int {
	E_ID = 0,
	E_RISKMSGDATE,
	E_RISKMSGTIME,
	E_USERID,
	E_LOGINNAME,
	E_ACCOUNTNAME,
	E_RISKMSG,
	E_RISKMSGTYPE,
	E_END
};

const char* const RISK_MESSAGE_RECORDS_TABLE = "risk_message_records";

const char* const RISK_MESSAGE_RECORDS_TABLE_COLS[E_END] = {
	"id",
	"riskMsgDate",
	"riskMsgTime",
	"userID",
	"loginName",
	"accountName",
	"riskMsg",
	"riskMsgType",
};

const char* const RISK_MESSAGE_RECORDS_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平日期'",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平时间'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '帐户标识(用户ID)， 系统内部使用'",
	"varchar(24) COLLATE utf8_bin",
	"varchar(24) COLLATE utf8_general_ci NOT NULL COMMENT '帐户名'",
	"varchar(128) COLLATE utf8_general_ci NOT NULL COMMENT '触发风控信息'",
	"int(11) DEFAULT '0' NOT NULL COMMENT '触发风控信息类型'",
};