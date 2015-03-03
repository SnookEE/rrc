/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PRACH-RACH-Info-r7.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, availableSignatures),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AvailableSignatures,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"availableSignatures"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, availableSF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SF_PRACH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"availableSF"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, preambleScramblingCodeWordNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreambleScramblingCodeWordNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preambleScramblingCodeWordNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, puncturingLimit),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PuncturingLimit,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"puncturingLimit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, availableSubChannelNumbers),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AvailableSubChannelNumbers,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"availableSubChannelNumbers"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* availableSignatures */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* availableSF */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* preambleScramblingCodeWordNumber */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* puncturingLimit */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* availableSubChannelNumbers */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_3 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_3 = {
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
	asn_DEF_fdd_tags_3,
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_3,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_3,
	5,	/* Elements count */
	&asn_SPC_fdd_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd384, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd384, channelisationCodeList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TDD_PRACH_CCodeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCodeList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd384, prach_Midamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Midamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-Midamble"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd384_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisationCodeList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* prach-Midamble */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_9 = {
	sizeof(struct tdd384),
	offsetof(struct tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_9,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_9 = {
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
	asn_DEF_tdd384_tags_9,
	sizeof(asn_DEF_tdd384_tags_9)
		/sizeof(asn_DEF_tdd384_tags_9[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_9,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_9)
		/sizeof(asn_DEF_tdd384_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_9,
	3,	/* Elements count */
	&asn_SPC_tdd384_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd768_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd768, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd768, channelisationCodeList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TDD768_PRACH_CCodeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCodeList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd768, prach_Midamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Midamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-Midamble"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd768_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd768_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisationCodeList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* prach-Midamble */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd768_specs_13 = {
	sizeof(struct tdd768),
	offsetof(struct tdd768, _asn_ctx),
	asn_MAP_tdd768_tag2el_13,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd768_13 = {
	"tdd768",
	"tdd768",
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
	asn_DEF_tdd768_tags_13,
	sizeof(asn_DEF_tdd768_tags_13)
		/sizeof(asn_DEF_tdd768_tags_13[0]) - 1, /* 1 */
	asn_DEF_tdd768_tags_13,	/* Same as above */
	sizeof(asn_DEF_tdd768_tags_13)
		/sizeof(asn_DEF_tdd768_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd768_13,
	3,	/* Elements count */
	&asn_SPC_tdd768_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd384_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd768_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd768"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd768 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_2 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_2 = {
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
	&asn_PER_type_modeSpecificInfo_constr_2,
	asn_MBR_modeSpecificInfo_2,
	3,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PRACH_RACH_Info_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_RACH_Info_r7, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_PRACH_RACH_Info_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PRACH_RACH_Info_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modeSpecificInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_PRACH_RACH_Info_r7_specs_1 = {
	sizeof(struct PRACH_RACH_Info_r7),
	offsetof(struct PRACH_RACH_Info_r7, _asn_ctx),
	asn_MAP_PRACH_RACH_Info_r7_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_RACH_Info_r7 = {
	"PRACH-RACH-Info-r7",
	"PRACH-RACH-Info-r7",
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
	asn_DEF_PRACH_RACH_Info_r7_tags_1,
	sizeof(asn_DEF_PRACH_RACH_Info_r7_tags_1)
		/sizeof(asn_DEF_PRACH_RACH_Info_r7_tags_1[0]), /* 1 */
	asn_DEF_PRACH_RACH_Info_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_RACH_Info_r7_tags_1)
		/sizeof(asn_DEF_PRACH_RACH_Info_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PRACH_RACH_Info_r7_1,
	1,	/* Elements count */
	&asn_SPC_PRACH_RACH_Info_r7_specs_1	/* Additional specs */
};

