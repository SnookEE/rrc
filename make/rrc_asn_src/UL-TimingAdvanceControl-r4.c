/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-TimingAdvanceControl-r4.h"

static asn_per_constraints_t asn_PER_type_tddOption_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_UL_TimingAdvanceControl_r4_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_5[] = {
	{ ATF_POINTER, 2, offsetof(struct tdd384, ul_TimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TimingAdvance"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd384, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
};
static const int asn_MAP_tdd384_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_tdd384_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TimingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* activationTime */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_5 = {
	sizeof(struct tdd384),
	offsetof(struct tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_tdd384_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_5 = {
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
	asn_DEF_tdd384_tags_5,
	sizeof(asn_DEF_tdd384_tags_5)
		/sizeof(asn_DEF_tdd384_tags_5[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_5,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_5)
		/sizeof(asn_DEF_tdd384_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_5,
	2,	/* Elements count */
	&asn_SPC_tdd384_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_8[] = {
	{ ATF_POINTER, 2, offsetof(struct tdd128, ul_SynchronisationParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_SynchronisationParameters_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-SynchronisationParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd128, synchronisationParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SynchronisationParameters_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"synchronisationParameters"
		},
};
static const int asn_MAP_tdd128_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_tdd128_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-SynchronisationParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* synchronisationParameters */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_8 = {
	sizeof(struct tdd128),
	offsetof(struct tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_8 = {
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
	asn_DEF_tdd128_tags_8,
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_8,
	2,	/* Elements count */
	&asn_SPC_tdd128_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddOption_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tddOption_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tddOption_specs_4 = {
	sizeof(struct tddOption),
	offsetof(struct tddOption, _asn_ctx),
	offsetof(struct tddOption, present),
	sizeof(((struct tddOption *)0)->present),
	asn_MAP_tddOption_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddOption_4 = {
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
	&asn_PER_type_tddOption_constr_4,
	asn_MBR_tddOption_4,
	2,	/* Elements count */
	&asn_SPC_tddOption_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_enabled_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct enabled, tddOption),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tddOption_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tddOption"
		},
};
static const ber_tlv_tag_t asn_DEF_enabled_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_enabled_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tddOption */
};
static asn_SEQUENCE_specifics_t asn_SPC_enabled_specs_3 = {
	sizeof(struct enabled),
	offsetof(struct enabled, _asn_ctx),
	asn_MAP_enabled_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_enabled_3 = {
	"enabled",
	"enabled",
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
	asn_DEF_enabled_tags_3,
	sizeof(asn_DEF_enabled_tags_3)
		/sizeof(asn_DEF_enabled_tags_3[0]) - 1, /* 1 */
	asn_DEF_enabled_tags_3,	/* Same as above */
	sizeof(asn_DEF_enabled_tags_3)
		/sizeof(asn_DEF_enabled_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_enabled_3,
	1,	/* Elements count */
	&asn_SPC_enabled_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_TimingAdvanceControl_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TimingAdvanceControl_r4, choice.disabled),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"disabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TimingAdvanceControl_r4, choice.enabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_enabled_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"enabled"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_TimingAdvanceControl_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* disabled */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* enabled */
};
static asn_CHOICE_specifics_t asn_SPC_UL_TimingAdvanceControl_r4_specs_1 = {
	sizeof(struct UL_TimingAdvanceControl_r4),
	offsetof(struct UL_TimingAdvanceControl_r4, _asn_ctx),
	offsetof(struct UL_TimingAdvanceControl_r4, present),
	sizeof(((struct UL_TimingAdvanceControl_r4 *)0)->present),
	asn_MAP_UL_TimingAdvanceControl_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_TimingAdvanceControl_r4 = {
	"UL-TimingAdvanceControl-r4",
	"UL-TimingAdvanceControl-r4",
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
	&asn_PER_type_UL_TimingAdvanceControl_r4_constr_1,
	asn_MBR_UL_TimingAdvanceControl_r4_1,
	2,	/* Elements count */
	&asn_SPC_UL_TimingAdvanceControl_r4_specs_1	/* Additional specs */
};

