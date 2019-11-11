#pragma once

enum BANK_TRANFER_OUT_JOURNAL_TABLE_DESC : int {
	E_BATROUJO_SERIALNUMBER = 0,
	E_BATROUJO_USERID,
	E_BATROUJO_IDENTITYCARDNO,
	E_BATROUJO_BANKCARD,
	E_BATROUJO_BANKNAME,
	E_BATROUJO_BANKBRANCH,
	E_BATROUJO_OUTAMOUNT,
	E_BATROUJO_POSTTIME,
	E_BATROUJO_ISAPPROVAL,
	E_BATROUJO_APPROVALTIME,
	E_BATROUJO_REALNAME,
	E_BATROUJO_APPROVALREASON,
	E_BATROUJO_APPROVALID,
	E_BATROUJO_OUTAMOUNTCNY,
	E_BATROUJO_END
};

const char* const BANK_TRANFER_OUT_JOURNAL_TABLE = "bank_tranfer_out_journal";

const char* const BANK_TRANFER_OUT_JOURNAL_TABLE_COLS[E_BATROUJO_END] = {
	"SerialNumber",
	"UserID",
	"IdentityCardNo",
	"BankCard",
	"BankName",
	"BankBranch",
	"OutAmount",
	"PostTime",
	"IsApproval",
	"ApprovalTime",
	"RealName",
	"ApprovalReason",
	"ApprovalID",
	"OutAmountCNY",
};

const char* const BANK_TRANFER_OUT_JOURNAL_TABLE_COLS_ATTR[E_BATROUJO_END] = {
	"int(11) unsigned NOT NULL COMMENT '出入金流水号'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(50) COLLATE utf8_general_ci NOT NULL COMMENT '身份证号'",
	"varchar(50) COLLATE latin1_swedish_ci NOT NULL COMMENT '银行卡号'",
	"varchar(100) COLLATE utf8_general_ci NOT NULL COMMENT '银行名称'",
	"varchar(200) COLLATE utf8_general_ci NOT NULL",
	"double(18,3) NOT NULL COMMENT '出金金额'",
	"datetime NOT NULL COMMENT '提交时间'",
	"tinyint(4) NOT NULL COMMENT '是否已审核(0未审核 1审核 2审核拒绝)'",
	"datetime DEFAULT '0000-00-00 00:00:00' COMMENT '审核时间'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '姓名（实名制）'",
	"varchar(255) COLLATE utf8_bin COMMENT '审核原因，主要为拒绝审核时使用'",
	"varchar(64) COLLATE utf8_bin COMMENT '审核者UserID'",
	"decimal(18,3) DEFAULT '0.000' COMMENT '人名币出金金额'",
};