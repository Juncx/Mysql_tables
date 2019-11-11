#pragma once

enum INSTITUTION_COMMISSION_CASH_RECORD_TABLE_DESC : int {
	E_INCOCARE_SERIALNUMBER = 0,
	E_INCOCARE_USERID,
	E_INCOCARE_IDENTITYCARDNO,
	E_INCOCARE_BANKCARD,
	E_INCOCARE_BANKNAME,
	E_INCOCARE_BANKBRANCH,
	E_INCOCARE_CASHAMOUNT,
	E_INCOCARE_POSTTIME,
	E_INCOCARE_ISAPPROVAL,
	E_INCOCARE_APPROVALTIME,
	E_INCOCARE_REALNAME,
	E_INCOCARE_APPROVALREASON,
	E_INCOCARE_APPROVALID,
	E_INCOCARE_OUTAMOUNTCNY,
	E_INCOCARE_END
};

const char* const INSTITUTION_COMMISSION_CASH_RECORD_TABLE = "institution_commission_cash_record";

const char* const INSTITUTION_COMMISSION_CASH_RECORD_TABLE_COLS[E_INCOCARE_END] = {
	"SerialNumber",
	"UserID",
	"IdentityCardNo",
	"BankCard",
	"BankName",
	"BankBranch",
	"CashAmount",
	"PostTime",
	"IsApproval",
	"ApprovalTime",
	"RealName",
	"ApprovalReason",
	"ApprovalID",
	"OutAmountCNY",
};

const char* const INSTITUTION_COMMISSION_CASH_RECORD_TABLE_COLS_ATTR[E_INCOCARE_END] = {
	"int(11) unsigned NOT NULL COMMENT '出入金流水号'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(50) COLLATE utf8_general_ci NOT NULL COMMENT '身份证号'",
	"varchar(50) COLLATE latin1_swedish_ci NOT NULL COMMENT '银行卡号'",
	"varchar(100) COLLATE utf8_general_ci NOT NULL COMMENT '银行名称'",
	"varchar(200) COLLATE utf8_general_ci NOT NULL",
	"double(18,3) NOT NULL COMMENT '提现金额'",
	"datetime NOT NULL COMMENT '提交时间'",
	"tinyint(4) NOT NULL COMMENT '是否已审核(0未审核 1审核 2审核拒绝)'",
	"datetime DEFAULT '0000-00-00 00:00:00' COMMENT '审核时间'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '姓名（实名制）'",
	"varchar(255) COLLATE utf8_bin COMMENT '审核原因，主要为拒绝审核时使用'",
	"varchar(64) COLLATE utf8_bin COMMENT '审核者UserID'",
	"decimal(18,3) DEFAULT '0.000' COMMENT '人名币出金金额'",
};