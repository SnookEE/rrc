/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DL-DPCH-InfoCommon.h"

static asn_per_constraints_t asn_PER_type_cfnHandling_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_initialise_4[] = {
	{ ATF_POINTER, 1, offsetof(struct initialise, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Cfntargetsfnframeoffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
};
static const int asn_MAP_initialise_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_initialise_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_initialise_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dummy */
};
static asn_SEQUENCE_specifics_t asn_SPC_initialise_specs_4 = {
	sizeof(struct initialise),
	offsetof(struct initialise, _asn_ctx),
	asn_MAP_initialise_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_initialise_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_initialise_4 = {
	"initialise",
	"initialise",
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
	asn_DEF_initialise_tags_4,
	sizeof(asn_DEF_initialise_tags_4)
		/sizeof(asn_DEF_initialise_tags_4[0]) - 1, /* 1 */
	asn_DEF_initialise_tags_4,	/* Same as above */
	sizeof(asn_DEF_initialise_tags_4)
		/sizeof(asn_DEF_initialise_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_initialise_4,
	1,	/* Elements count */
	&asn_SPC_initialise_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cfnHandling_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cfnHandling, choice.maintain),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maintain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cfnHandling, choice.initialise),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_initialise_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initialise"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cfnHandling_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maintain */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* initialise */
};
static asn_CHOICE_specifics_t asn_SPC_cfnHandling_specs_2 = {
	sizeof(struct cfnHandling),
	offsetof(struct cfnHandling, _asn_ctx),
	offsetof(struct cfnHandling, present),
	sizeof(((struct cfnHandling *)0)->present),
	asn_MAP_cfnHandling_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cfnHandling_2 = {
	"cfnHandling",
	"cfnHandling",
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
	&asn_PER_type_cfnHandling_constr_2,
	asn_MBR_cfnHandling_2,
	2,	/* Elements count */
	&asn_SPC_cfnHandling_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_7[] = {
	{ ATF_POINTER, 1, offsetof(struct fdd, dl_DPCH_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DPCH_PowerControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DPCH-PowerControlInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, powerOffsetPilot_pdpdch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PowerOffsetPilot_pdpdch,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerOffsetPilot-pdpdch"
		},
	{ ATF_POINTER, 1, offsetof(struct fdd, dl_rate_matching_restriction),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Dl_rate_matching_restriction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-rate-matching-restriction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, spreadingFactorAndPilot),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SF512_AndPilot,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spreadingFactorAndPilot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, positionFixedOrFlexible),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionFixedOrFlexible,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positionFixedOrFlexible"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, tfci_Existence),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfci-Existence"
		},
};
static const int asn_MAP_fdd_oms_7[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-DPCH-PowerControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerOffsetPilot-pdpdch */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-rate-matching-restriction */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* spreadingFactorAndPilot */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* positionFixedOrFlexible */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* tfci-Existence */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_7 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_7,
	6,	/* Count of tags in the map */
	asn_MAP_fdd_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_7 = {
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
	asn_DEF_fdd_tags_7,
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_7,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_7,
	6,	/* Elements count */
	&asn_SPC_fdd_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_14[] = {
	{ ATF_POINTER, 1, offsetof(struct tdd, dl_DPCH_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DPCH_PowerControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DPCH-PowerControlInfo"
		},
};
static const int asn_MAP_tdd_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-DPCH-PowerControlInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_14 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_tdd_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_14 = {
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
	asn_DEF_tdd_tags_14,
	sizeof(asn_DEF_tdd_tags_14)
		/sizeof(asn_DEF_tdd_tags_14[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_14,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_14)
		/sizeof(asn_DEF_tdd_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_14,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_6 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_6 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_6,
	asn_MBR_modeSpecificInfo_6,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_DPCH_InfoCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DPCH_InfoCommon, cfnHandling),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cfnHandling_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cfnHandling"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DPCH_InfoCommon, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_DPCH_InfoCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_DPCH_InfoCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cfnHandling */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* modeSpecificInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_DPCH_InfoCommon_specs_1 = {
	sizeof(struct DL_DPCH_InfoCommon),
	offsetof(struct DL_DPCH_InfoCommon, _asn_ctx),
	asn_MAP_DL_DPCH_InfoCommon_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoCommon = {
	"DL-DPCH-InfoCommon",
	"DL-DPCH-InfoCommon",
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
	asn_DEF_DL_DPCH_InfoCommon_tags_1,
	sizeof(asn_DEF_DL_DPCH_InfoCommon_tags_1)
		/sizeof(asn_DEF_DL_DPCH_InfoCommon_tags_1[0]), /* 1 */
	asn_DEF_DL_DPCH_InfoCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_DPCH_InfoCommon_tags_1)
		/sizeof(asn_DEF_DL_DPCH_InfoCommon_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_DPCH_InfoCommon_1,
	2,	/* Elements count */
	&asn_SPC_DL_DPCH_InfoCommon_specs_1	/* Additional specs */
};
