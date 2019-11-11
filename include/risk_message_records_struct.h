#pragma once

enum RISK_MESSAGE_RECORDS_TABLE_DESC : int {
	E_RIMERE_ID = 0,
	E_RIMERE_RISKMSGDATE,
	E_RIMERE_RISKMSGTIME,
	E_RIMERE_USERID,
	E_RIMERE_LOGINNAME,
	E_RIMERE_ACCOUNTNAME,
	E_RIMERE_RISKMSG,
	E_RIMERE_RISKMSGTYPE,
	E_RIMERE_END
};

const char* const RISK_MESSAGE_RECORDS_TABLE = "risk_message_records";

const char* const RISK_MESSAGE_RECORDS_TABLE_COLS[E_RIMERE_END] = {
	"id",
	"riskMsgDate",
	"riskMsgTime",
	"userID",
	"loginName",
	"accountName",
	"riskMsg",
	"riskMsgType",
};

const char* const RISK_MESSAGE_RECORDS_TABLE_COLS_ATTR[E_RIMERE_END] = {
	"int(10) unsigned NOT NULL",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平日期'",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平时间'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '帐户标识(用户ID)， 系统内部使用'",
	"varchar(24) COLLATE utf8_bin",
	"varchar(24) COLLATE utf8_general_ci NOT NULL COMMENT '帐户名'",
	"varchar(128) COLLATE utf8_general_ci NOT NULL COMMENT '触发风控信息'",
	"int(11) DEFAULT '0' NOT NULL COMMENT '触发风控信息类型'",
};