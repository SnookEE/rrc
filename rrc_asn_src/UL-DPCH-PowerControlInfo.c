/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-DPCH-PowerControlInfo.h"

static asn_per_constraints_t asn_PER_type_ul_OL_PC_Signalling_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_UL_DPCH_PowerControlInfo_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, dpcch_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPCCH_PowerOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpcch-PowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, pc_Preamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PC_Preamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pc-Preamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, sRB_delay),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_delay,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sRB-delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, powerControlAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerControlAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerControlAlgorithm"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dpcch-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pc-Preamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sRB-delay */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* powerControlAlgorithm */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_2 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_2,
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_2,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_2,
	4,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_individuallySignalled_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct individuallySignalled, individualTS_InterferenceList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualTS_InterferenceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"individualTS-InterferenceList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct individuallySignalled, dpch_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValueTdd,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpch-ConstantValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct individuallySignalled, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static const ber_tlv_tag_t asn_DEF_individuallySignalled_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_individuallySignalled_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* individualTS-InterferenceList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dpch-ConstantValue */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* primaryCCPCH-TX-Power */
};
static asn_SEQUENCE_specifics_t asn_SPC_individuallySignalled_specs_11 = {
	sizeof(struct individuallySignalled),
	offsetof(struct individuallySignalled, _asn_ctx),
	asn_MAP_individuallySignalled_tag2el_11,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individuallySignalled_11 = {
	"individuallySignalled",
	"individuallySignalled",
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
	asn_DEF_individuallySignalled_tags_11,
	sizeof(asn_DEF_individuallySignalled_tags_11)
		/sizeof(asn_DEF_individuallySignalled_tags_11[0]) - 1, /* 1 */
	asn_DEF_individuallySignalled_tags_11,	/* Same as above */
	sizeof(asn_DEF_individuallySignalled_tags_11)
		/sizeof(asn_DEF_individuallySignalled_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_individuallySignalled_11,
	3,	/* Elements count */
	&asn_SPC_individuallySignalled_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_OL_PC_Signalling_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ul_OL_PC_Signalling, choice.broadcast_UL_OL_PC_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"broadcast-UL-OL-PC-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ul_OL_PC_Signalling, choice.individuallySignalled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_individuallySignalled_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"individuallySignalled"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ul_OL_PC_Signalling_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* broadcast-UL-OL-PC-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* individuallySignalled */
};
static asn_CHOICE_specifics_t asn_SPC_ul_OL_PC_Signalling_specs_9 = {
	sizeof(struct ul_OL_PC_Signalling),
	offsetof(struct ul_OL_PC_Signalling, _asn_ctx),
	offsetof(struct ul_OL_PC_Signalling, present),
	sizeof(((struct ul_OL_PC_Signalling *)0)->present),
	asn_MAP_ul_OL_PC_Signalling_tag2el_9,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_OL_PC_Signalling_9 = {
	"ul-OL-PC-Signalling",
	"ul-OL-PC-Signalling",
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
	&asn_PER_type_ul_OL_PC_Signalling_constr_9,
	asn_MBR_ul_OL_PC_Signalling_9,
	2,	/* Elements count */
	&asn_SPC_ul_OL_PC_Signalling_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_7[] = {
	{ ATF_POINTER, 2, offsetof(struct tdd, ul_TargetSIR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TargetSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TargetSIR"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd, ul_OL_PC_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ul_OL_PC_Signalling_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-OL-PC-Signalling"
		},
};
static const int asn_MAP_tdd_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TargetSIR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-OL-PC-Signalling */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_7 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_tdd_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_7 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_7,
	sizeof(asn_DEF_tdd_tags_7)
		/sizeof(asn_DEF_tdd_tags_7[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_7,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_7)
		/sizeof(asn_DEF_tdd_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_7,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_UL_DPCH_PowerControlInfo_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfo),
	offsetof(struct UL_DPCH_PowerControlInfo, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfo, present),
	sizeof(((struct UL_DPCH_PowerControlInfo *)0)->present),
	asn_MAP_UL_DPCH_PowerControlInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfo = {
	"UL-DPCH-PowerControlInfo",
	"UL-DPCH-PowerControlInfo",
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
	&asn_PER_type_UL_DPCH_PowerControlInfo_constr_1,
	asn_MBR_UL_DPCH_PowerControlInfo_1,
	2,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfo_specs_1	/* Additional specs */
};
