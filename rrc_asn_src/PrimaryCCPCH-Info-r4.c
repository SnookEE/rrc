/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PrimaryCCPCH-Info-r4.h"

static asn_per_constraints_t asn_PER_type_syncCase_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tddOption_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_PrimaryCCPCH_Info_r4_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, tx_DiversityIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tx-DiversityIndicator"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tx-DiversityIndicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	1,	/* Count of tags in the map */
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
	1,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_syncCase1_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct syncCase1, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
};
static const ber_tlv_tag_t asn_DEF_syncCase1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_syncCase1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* timeslot */
};
static asn_SEQUENCE_specifics_t asn_SPC_syncCase1_specs_8 = {
	sizeof(struct syncCase1),
	offsetof(struct syncCase1, _asn_ctx),
	asn_MAP_syncCase1_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncCase1_8 = {
	"syncCase1",
	"syncCase1",
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
	asn_DEF_syncCase1_tags_8,
	sizeof(asn_DEF_syncCase1_tags_8)
		/sizeof(asn_DEF_syncCase1_tags_8[0]) - 1, /* 1 */
	asn_DEF_syncCase1_tags_8,	/* Same as above */
	sizeof(asn_DEF_syncCase1_tags_8)
		/sizeof(asn_DEF_syncCase1_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_syncCase1_8,
	1,	/* Elements count */
	&asn_SPC_syncCase1_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_syncCase2_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct syncCase2, timeslotSync2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotSync2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotSync2"
		},
};
static const ber_tlv_tag_t asn_DEF_syncCase2_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_syncCase2_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* timeslotSync2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_syncCase2_specs_10 = {
	sizeof(struct syncCase2),
	offsetof(struct syncCase2, _asn_ctx),
	asn_MAP_syncCase2_tag2el_10,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncCase2_10 = {
	"syncCase2",
	"syncCase2",
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
	asn_DEF_syncCase2_tags_10,
	sizeof(asn_DEF_syncCase2_tags_10)
		/sizeof(asn_DEF_syncCase2_tags_10[0]) - 1, /* 1 */
	asn_DEF_syncCase2_tags_10,	/* Same as above */
	sizeof(asn_DEF_syncCase2_tags_10)
		/sizeof(asn_DEF_syncCase2_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_syncCase2_10,
	1,	/* Elements count */
	&asn_SPC_syncCase2_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_syncCase_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct syncCase, choice.syncCase1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_syncCase1_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"syncCase1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct syncCase, choice.syncCase2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_syncCase2_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"syncCase2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_syncCase_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncCase1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncCase2 */
};
static asn_CHOICE_specifics_t asn_SPC_syncCase_specs_7 = {
	sizeof(struct syncCase),
	offsetof(struct syncCase, _asn_ctx),
	offsetof(struct syncCase, present),
	sizeof(((struct syncCase *)0)->present),
	asn_MAP_syncCase_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncCase_7 = {
	"syncCase",
	"syncCase",
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
	&asn_PER_type_syncCase_constr_7,
	asn_MBR_syncCase_7,
	2,	/* Elements count */
	&asn_SPC_syncCase_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_6[] = {
	{ ATF_POINTER, 1, offsetof(struct tdd384, syncCase),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_syncCase_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"syncCase"
		},
};
static const int asn_MAP_tdd384_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd384_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* syncCase */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_6 = {
	sizeof(struct tdd384),
	offsetof(struct tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_tdd384_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_6 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_6,
	sizeof(asn_DEF_tdd384_tags_6)
		/sizeof(asn_DEF_tdd384_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_6)
		/sizeof(asn_DEF_tdd384_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_6,
	1,	/* Elements count */
	&asn_SPC_tdd384_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd128, tstd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tstd-Indicator"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tstd-Indicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_12 = {
	sizeof(struct tdd128),
	offsetof(struct tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_12,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_12 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_12,
	sizeof(asn_DEF_tdd128_tags_12)
		/sizeof(asn_DEF_tdd128_tags_12[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_12,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_12)
		/sizeof(asn_DEF_tdd128_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_12,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddOption_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tddOption_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tddOption_specs_5 = {
	sizeof(struct tddOption),
	offsetof(struct tddOption, _asn_ctx),
	offsetof(struct tddOption, present),
	sizeof(((struct tddOption *)0)->present),
	asn_MAP_tddOption_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddOption_5 = {
	"tddOption",
	"tddOption",
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
	&asn_PER_type_tddOption_constr_5,
	asn_MBR_tddOption_5,
	2,	/* Elements count */
	&asn_SPC_tddOption_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, tddOption),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tddOption_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tddOption"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd, cellParametersID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellParametersID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellParametersID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, sctd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sctd-Indicator"
		},
};
static const int asn_MAP_tdd_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tddOption */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellParametersID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sctd-Indicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_4 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_tdd_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_4 = {
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
	asn_DEF_tdd_tags_4,
	sizeof(asn_DEF_tdd_tags_4)
		/sizeof(asn_DEF_tdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_4)
		/sizeof(asn_DEF_tdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_4,
	3,	/* Elements count */
	&asn_SPC_tdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PrimaryCCPCH_Info_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_Info_r4, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_Info_r4, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PrimaryCCPCH_Info_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_PrimaryCCPCH_Info_r4_specs_1 = {
	sizeof(struct PrimaryCCPCH_Info_r4),
	offsetof(struct PrimaryCCPCH_Info_r4, _asn_ctx),
	offsetof(struct PrimaryCCPCH_Info_r4, present),
	sizeof(((struct PrimaryCCPCH_Info_r4 *)0)->present),
	asn_MAP_PrimaryCCPCH_Info_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PrimaryCCPCH_Info_r4 = {
	"PrimaryCCPCH-Info-r4",
	"PrimaryCCPCH-Info-r4",
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
	&asn_PER_type_PrimaryCCPCH_Info_r4_constr_1,
	asn_MBR_PrimaryCCPCH_Info_r4_1,
	2,	/* Elements count */
	&asn_SPC_PrimaryCCPCH_Info_r4_specs_1	/* Additional specs */
};

