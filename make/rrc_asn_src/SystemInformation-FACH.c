/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "SystemInformation-FACH.h"

static asn_per_constraints_t asn_PER_type_payload_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_lastAndFirst_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndFirst, lastSegmentShort),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LastSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastSegmentShort"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndFirst, firstSegment),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FirstSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstSegment"
		},
};
static const ber_tlv_tag_t asn_DEF_lastAndFirst_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_lastAndFirst_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastSegmentShort */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* firstSegment */
};
static asn_SEQUENCE_specifics_t asn_SPC_lastAndFirst_specs_7 = {
	sizeof(struct lastAndFirst),
	offsetof(struct lastAndFirst, _asn_ctx),
	asn_MAP_lastAndFirst_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lastAndFirst_7 = {
	"lastAndFirst",
	"lastAndFirst",
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
	asn_DEF_lastAndFirst_tags_7,
	sizeof(asn_DEF_lastAndFirst_tags_7)
		/sizeof(asn_DEF_lastAndFirst_tags_7[0]) - 1, /* 1 */
	asn_DEF_lastAndFirst_tags_7,	/* Same as above */
	sizeof(asn_DEF_lastAndFirst_tags_7)
		/sizeof(asn_DEF_lastAndFirst_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_lastAndFirst_7,
	2,	/* Elements count */
	&asn_SPC_lastAndFirst_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_lastAndComplete_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndComplete, lastSegmentShort),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LastSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastSegmentShort"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndComplete, completeSIB_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteSIB_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeSIB-List"
		},
};
static const ber_tlv_tag_t asn_DEF_lastAndComplete_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_lastAndComplete_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastSegmentShort */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* completeSIB-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_lastAndComplete_specs_10 = {
	sizeof(struct lastAndComplete),
	offsetof(struct lastAndComplete, _asn_ctx),
	asn_MAP_lastAndComplete_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lastAndComplete_10 = {
	"lastAndComplete",
	"lastAndComplete",
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
	asn_DEF_lastAndComplete_tags_10,
	sizeof(asn_DEF_lastAndComplete_tags_10)
		/sizeof(asn_DEF_lastAndComplete_tags_10[0]) - 1, /* 1 */
	asn_DEF_lastAndComplete_tags_10,	/* Same as above */
	sizeof(asn_DEF_lastAndComplete_tags_10)
		/sizeof(asn_DEF_lastAndComplete_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_lastAndComplete_10,
	2,	/* Elements count */
	&asn_SPC_lastAndComplete_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_lastAndCompleteAndFirst_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndCompleteAndFirst, lastSegmentShort),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LastSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastSegmentShort"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndCompleteAndFirst, completeSIB_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteSIB_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeSIB-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct lastAndCompleteAndFirst, firstSegment),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FirstSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstSegment"
		},
};
static const ber_tlv_tag_t asn_DEF_lastAndCompleteAndFirst_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_lastAndCompleteAndFirst_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastSegmentShort */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* completeSIB-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* firstSegment */
};
static asn_SEQUENCE_specifics_t asn_SPC_lastAndCompleteAndFirst_specs_13 = {
	sizeof(struct lastAndCompleteAndFirst),
	offsetof(struct lastAndCompleteAndFirst, _asn_ctx),
	asn_MAP_lastAndCompleteAndFirst_tag2el_13,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lastAndCompleteAndFirst_13 = {
	"lastAndCompleteAndFirst",
	"lastAndCompleteAndFirst",
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
	asn_DEF_lastAndCompleteAndFirst_tags_13,
	sizeof(asn_DEF_lastAndCompleteAndFirst_tags_13)
		/sizeof(asn_DEF_lastAndCompleteAndFirst_tags_13[0]) - 1, /* 1 */
	asn_DEF_lastAndCompleteAndFirst_tags_13,	/* Same as above */
	sizeof(asn_DEF_lastAndCompleteAndFirst_tags_13)
		/sizeof(asn_DEF_lastAndCompleteAndFirst_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_lastAndCompleteAndFirst_13,
	3,	/* Elements count */
	&asn_SPC_lastAndCompleteAndFirst_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_completeAndFirst_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct completeAndFirst, completeSIB_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteSIB_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeSIB-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct completeAndFirst, firstSegment),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FirstSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstSegment"
		},
};
static const ber_tlv_tag_t asn_DEF_completeAndFirst_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_completeAndFirst_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* completeSIB-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* firstSegment */
};
static asn_SEQUENCE_specifics_t asn_SPC_completeAndFirst_specs_18 = {
	sizeof(struct completeAndFirst),
	offsetof(struct completeAndFirst, _asn_ctx),
	asn_MAP_completeAndFirst_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_completeAndFirst_18 = {
	"completeAndFirst",
	"completeAndFirst",
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
	asn_DEF_completeAndFirst_tags_18,
	sizeof(asn_DEF_completeAndFirst_tags_18)
		/sizeof(asn_DEF_completeAndFirst_tags_18[0]) - 1, /* 1 */
	asn_DEF_completeAndFirst_tags_18,	/* Same as above */
	sizeof(asn_DEF_completeAndFirst_tags_18)
		/sizeof(asn_DEF_completeAndFirst_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_completeAndFirst_18,
	2,	/* Elements count */
	&asn_SPC_completeAndFirst_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_payload_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.noSegment),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.firstSegment),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FirstSegment,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.subsequentSegment),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubsequentSegment,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subsequentSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.lastSegmentShort),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LastSegmentShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastSegmentShort"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.lastAndFirst),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_lastAndFirst_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastAndFirst"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.lastAndComplete),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_lastAndComplete_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastAndComplete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.lastAndCompleteAndFirst),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_lastAndCompleteAndFirst_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastAndCompleteAndFirst"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.completeSIB_List),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteSIB_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeSIB-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.completeAndFirst),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_completeAndFirst_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeAndFirst"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.completeSIB),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteSIB,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeSIB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.lastSegment),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LastSegment,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lastSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.spare5),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct payload, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_payload_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* noSegment */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* firstSegment */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subsequentSegment */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lastSegmentShort */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lastAndFirst */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lastAndComplete */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lastAndCompleteAndFirst */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* completeSIB-List */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* completeAndFirst */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* completeSIB */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* lastSegment */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* spare5 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_payload_specs_2 = {
	sizeof(struct payload),
	offsetof(struct payload, _asn_ctx),
	offsetof(struct payload, present),
	sizeof(((struct payload *)0)->present),
	asn_MAP_payload_tag2el_2,
	16,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_payload_2 = {
	"payload",
	"payload",
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
	&asn_PER_type_payload_constr_2,
	asn_MBR_payload_2,
	16,	/* Elements count */
	&asn_SPC_payload_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformation_FACH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_FACH, payload),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_payload_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"payload"
		},
};
static const ber_tlv_tag_t asn_DEF_SystemInformation_FACH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformation_FACH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* payload */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_FACH_specs_1 = {
	sizeof(struct SystemInformation_FACH),
	offsetof(struct SystemInformation_FACH, _asn_ctx),
	asn_MAP_SystemInformation_FACH_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformation_FACH = {
	"SystemInformation-FACH",
	"SystemInformation-FACH",
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
	asn_DEF_SystemInformation_FACH_tags_1,
	sizeof(asn_DEF_SystemInformation_FACH_tags_1)
		/sizeof(asn_DEF_SystemInformation_FACH_tags_1[0]), /* 1 */
	asn_DEF_SystemInformation_FACH_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformation_FACH_tags_1)
		/sizeof(asn_DEF_SystemInformation_FACH_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformation_FACH_1,
	1,	/* Elements count */
	&asn_SPC_SystemInformation_FACH_specs_1	/* Additional specs */
};

