#pragma once

enum CERTIFICATION_REGISTER_RECORD_TABLE_DESC : int {
	E_ID = 0,
	E_USERID,
	E_LOGINNAME,
	E_ACCOUNTNAME,
	E_SURNAME,
	E_IDCARD,
	E_POSTTIME,
	E_APPROVALTIME,
	E_APPROVALID,
	E_ISAPPROVAL,
	E_APPROVALREASON,
	E_END
};

const char* const CERTIFICATION_REGISTER_RECORD_TABLE = "certification_register_record";

const char* const CERTIFICATION_REGISTER_RECORD_TABLE_COLS[E_END] = {
	"id",
	"userID",
	"loginName",
	"accountName",
	"surname",
	"IDCard",
	"PostTime",
	"ApprovalTime",
	"ApprovalID",
	"IsApproval",
	"ApprovalReason",
};

const char* const CERTIFICATION_REGISTER_RECORD_TABLE_COLS_ATTR[E_END] = {
	"int(11) NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin COMMENT '账户'",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin",
	"varchar(12) COLLATE utf8_bin",
	"char(24) COLLATE utf8_bin",
	"datetime",
	"datetime",
	"varchar(64) COLLATE utf8_bin",
	"tinyint(4)",
	"varchar(64) COLLATE utf8_bin",
};