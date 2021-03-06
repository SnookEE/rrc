/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "CN-InformationInfo.h"

static asn_TYPE_member_t asn_MBR_CN_InformationInfo_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CN_InformationInfo, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-Identity"
		},
	{ ATF_POINTER, 2, offsetof(struct CN_InformationInfo, cn_CommonGSM_MAP_NAS_SysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-CommonGSM-MAP-NAS-SysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct CN_InformationInfo, cn_DomainInformationList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainInformationList"
		},
};
static const int asn_MAP_CN_InformationInfo_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CN_InformationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CN_InformationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-CommonGSM-MAP-NAS-SysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cn-DomainInformationList */
};
static asn_SEQUENCE_specifics_t asn_SPC_CN_InformationInfo_specs_1 = {
	sizeof(struct CN_InformationInfo),
	offsetof(struct CN_InformationInfo, _asn_ctx),
	asn_MAP_CN_InformationInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CN_InformationInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CN_InformationInfo = {
	"CN-InformationInfo",
	"CN-InformationInfo",
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
	asn_DEF_CN_InformationInfo_tags_1,
	sizeof(asn_DEF_CN_InformationInfo_tags_1)
		/sizeof(asn_DEF_CN_InformationInfo_tags_1[0]), /* 1 */
	asn_DEF_CN_InformationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CN_InformationInfo_tags_1)
		/sizeof(asn_DEF_CN_InformationInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CN_InformationInfo_1,
	3,	/* Elements count */
	&asn_SPC_CN_InformationInfo_specs_1	/* Additional specs */
};

