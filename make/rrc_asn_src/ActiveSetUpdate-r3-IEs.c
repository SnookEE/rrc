/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "ActiveSetUpdate-r3-IEs.h"

static asn_TYPE_member_t asn_MBR_ActiveSetUpdate_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ActiveSetUpdate_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 11, offsetof(struct ActiveSetUpdate_r3_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 10, offsetof(struct ActiveSetUpdate_r3_IEs, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
	{ ATF_POINTER, 9, offsetof(struct ActiveSetUpdate_r3_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 8, offsetof(struct ActiveSetUpdate_r3_IEs, newU_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newU-RNTI"
		},
	{ ATF_POINTER, 7, offsetof(struct ActiveSetUpdate_r3_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 6, offsetof(struct ActiveSetUpdate_r3_IEs, dummy3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy3"
		},
	{ ATF_POINTER, 5, offsetof(struct ActiveSetUpdate_r3_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 4, offsetof(struct ActiveSetUpdate_r3_IEs, rl_AdditionInformationList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_AdditionInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rl-AdditionInformationList"
		},
	{ ATF_POINTER, 3, offsetof(struct ActiveSetUpdate_r3_IEs, rl_RemovalInformationList),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_RemovalInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rl-RemovalInformationList"
		},
	{ ATF_POINTER, 2, offsetof(struct ActiveSetUpdate_r3_IEs, tx_DiversityMode),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TX_DiversityMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tx-DiversityMode"
		},
	{ ATF_POINTER, 1, offsetof(struct ActiveSetUpdate_r3_IEs, dummy4),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSDT_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy4"
		},
};
static const int asn_MAP_ActiveSetUpdate_r3_IEs_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_ActiveSetUpdate_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ActiveSetUpdate_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dummy2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* activationTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* newU-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cn-InformationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dummy3 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* maxAllowedUL-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rl-AdditionInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rl-RemovalInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* tx-DiversityMode */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* dummy4 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ActiveSetUpdate_r3_IEs_specs_1 = {
	sizeof(struct ActiveSetUpdate_r3_IEs),
	offsetof(struct ActiveSetUpdate_r3_IEs, _asn_ctx),
	asn_MAP_ActiveSetUpdate_r3_IEs_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_ActiveSetUpdate_r3_IEs_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_r3_IEs = {
	"ActiveSetUpdate-r3-IEs",
	"ActiveSetUpdate-r3-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ActiveSetUpdate_r3_IEs_tags_1,
	sizeof(asn_DEF_ActiveSetUpdate_r3_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_ActiveSetUpdate_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ActiveSetUpdate_r3_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_r3_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ActiveSetUpdate_r3_IEs_1,
	12,	/* Elements count */
	&asn_SPC_ActiveSetUpdate_r3_IEs_specs_1	/* Additional specs */
};

