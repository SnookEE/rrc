/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "SysInfoType6-v4b0ext-IEs.h"

static asn_TYPE_member_t asn_MBR_tdd128SpecificInfo_4[] = {
	{ ATF_POINTER, 4, offsetof(struct tdd128SpecificInfo, pusch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList_SFN_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-SysInfoList-SFN"
		},
	{ ATF_POINTER, 3, offsetof(struct tdd128SpecificInfo, pdsch_SysInfoList_SFN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList_SFN_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-SysInfoList-SFN"
		},
	{ ATF_POINTER, 2, offsetof(struct tdd128SpecificInfo, pCCPCH_LCR_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info_LCR_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pCCPCH-LCR-Extensions"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd128SpecificInfo, sCCPCH_LCR_ExtensionsList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCCPCH_SystemInformationList_LCR_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCCPCH-LCR-ExtensionsList"
		},
};
static const int asn_MAP_tdd128SpecificInfo_oms_4[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_tdd128SpecificInfo_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128SpecificInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList-SFN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-SysInfoList-SFN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pCCPCH-LCR-Extensions */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sCCPCH-LCR-ExtensionsList */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128SpecificInfo_specs_4 = {
	sizeof(struct tdd128SpecificInfo),
	offsetof(struct tdd128SpecificInfo, _asn_ctx),
	asn_MAP_tdd128SpecificInfo_tag2el_4,
	4,	/* Count of tags in the map */
	asn_MAP_tdd128SpecificInfo_oms_4,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128SpecificInfo_4 = {
	"tdd128SpecificInfo",
	"tdd128SpecificInfo",
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
	asn_DEF_tdd128SpecificInfo_tags_4,
	sizeof(asn_DEF_tdd128SpecificInfo_tags_4)
		/sizeof(asn_DEF_tdd128SpecificInfo_tags_4[0]) - 1, /* 1 */
	asn_DEF_tdd128SpecificInfo_tags_4,	/* Same as above */
	sizeof(asn_DEF_tdd128SpecificInfo_tags_4)
		/sizeof(asn_DEF_tdd128SpecificInfo_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128SpecificInfo_4,
	4,	/* Elements count */
	&asn_SPC_tdd128SpecificInfo_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType6_v4b0ext_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SysInfoType6_v4b0ext_IEs, openLoopPowerControl_IPDL_TDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"openLoopPowerControl-IPDL-TDD"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType6_v4b0ext_IEs, prach_SystemInformationList_LCR_r4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_SystemInformationList_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-SystemInformationList-LCR-r4"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType6_v4b0ext_IEs, tdd128SpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128SpecificInfo_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128SpecificInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType6_v4b0ext_IEs, frequencyBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyBandIndicator"
		},
};
static const int asn_MAP_SysInfoType6_v4b0ext_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType6_v4b0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* openLoopPowerControl-IPDL-TDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-SystemInformationList-LCR-r4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tdd128SpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* frequencyBandIndicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType6_v4b0ext_IEs_specs_1 = {
	sizeof(struct SysInfoType6_v4b0ext_IEs),
	offsetof(struct SysInfoType6_v4b0ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType6_v4b0ext_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SysInfoType6_v4b0ext_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType6_v4b0ext_IEs = {
	"SysInfoType6-v4b0ext-IEs",
	"SysInfoType6-v4b0ext-IEs",
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
	asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType6_v4b0ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType6_v4b0ext_IEs_1,
	4,	/* Elements count */
	&asn_SPC_SysInfoType6_v4b0ext_IEs_specs_1	/* Additional specs */
};

