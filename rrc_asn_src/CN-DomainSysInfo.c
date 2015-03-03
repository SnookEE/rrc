/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "CN-DomainSysInfo.h"

static asn_per_constraints_t asn_PER_type_cn_Type_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cn_Type_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cn_Type, choice.gsm_MAP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-MAP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cn_Type, choice.ansi_41),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationANSI_41,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ansi-41"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cn_Type_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm-MAP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ansi-41 */
};
static asn_CHOICE_specifics_t asn_SPC_cn_Type_specs_3 = {
	sizeof(struct cn_Type),
	offsetof(struct cn_Type, _asn_ctx),
	offsetof(struct cn_Type, present),
	sizeof(((struct cn_Type *)0)->present),
	asn_MAP_cn_Type_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Type_3 = {
	"cn-Type",
	"cn-Type",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_cn_Type_constr_3,
	asn_MBR_cn_Type_3,
	2,	/* Elements count */
	&asn_SPC_cn_Type_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CN_DomainSysInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainSysInfo, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainSysInfo, cn_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cn_Type_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainSysInfo, cn_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DRX-CycleLengthCoeff"
		},
};
static const ber_tlv_tag_t asn_DEF_CN_DomainSysInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CN_DomainSysInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cn-DomainIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-Type */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cn-DRX-CycleLengthCoeff */
};
static asn_SEQUENCE_specifics_t asn_SPC_CN_DomainSysInfo_specs_1 = {
	sizeof(struct CN_DomainSysInfo),
	offsetof(struct CN_DomainSysInfo, _asn_ctx),
	asn_MAP_CN_DomainSysInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CN_DomainSysInfo = {
	"CN-DomainSysInfo",
	"CN-DomainSysInfo",
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
	asn_DEF_CN_DomainSysInfo_tags_1,
	sizeof(asn_DEF_CN_DomainSysInfo_tags_1)
		/sizeof(asn_DEF_CN_DomainSysInfo_tags_1[0]), /* 1 */
	asn_DEF_CN_DomainSysInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CN_DomainSysInfo_tags_1)
		/sizeof(asn_DEF_CN_DomainSysInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CN_DomainSysInfo_1,
	3,	/* Elements count */
	&asn_SPC_CN_DomainSysInfo_specs_1	/* Additional specs */
};

