#pragma once

enum CERTIFICATION_REGISTER_RECORD_TABLE_DESC : int {
	E_CERERE_ID = 0,
	E_CERERE_USERID,
	E_CERERE_LOGINNAME,
	E_CERERE_ACCOUNTNAME,
	E_CERERE_SURNAME,
	E_CERERE_IDCARD,
	E_CERERE_POSTTIME,
	E_CERERE_APPROVALTIME,
	E_CERERE_APPROVALID,
	E_CERERE_ISAPPROVAL,
	E_CERERE_APPROVALREASON,
	E_CERERE_END
};

const char* const CERTIFICATION_REGISTER_RECORD_TABLE = "certification_register_record";

const char* const CERTIFICATION_REGISTER_RECORD_TABLE_COLS[E_CERERE_END] = {
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

const char* const CERTIFICATION_REGISTER_RECORD_TABLE_COLS_ATTR[E_CERERE_END] = {
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