/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "RRC-FailureInfo.h"

static asn_per_constraints_t asn_PER_type_RRC_FailureInfo_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_6 = {
	sizeof(struct nonCriticalExtensions),
	offsetof(struct nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_6 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_6,
	sizeof(asn_DEF_nonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_4[] = {
	{ ATF_POINTER, 2, offsetof(struct laterNonCriticalExtensions, rrc_FailureInfo_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-FailureInfo-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct laterNonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_laterNonCriticalExtensions_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-FailureInfo-r3-add-ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_4 = {
	sizeof(struct laterNonCriticalExtensions),
	offsetof(struct laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_4 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
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
	asn_DEF_laterNonCriticalExtensions_tags_4,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_r3_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct r3, rRC_FailureInfo_r3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_FailureInfo_r3_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rRC-FailureInfo-r3"
		},
	{ ATF_POINTER, 1, offsetof(struct r3, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static const int asn_MAP_r3_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_r3_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_r3_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rRC-FailureInfo-r3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* laterNonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_r3_specs_2 = {
	sizeof(struct r3),
	offsetof(struct r3, _asn_ctx),
	asn_MAP_r3_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_r3_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_r3_2 = {
	"r3",
	"r3",
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
	asn_DEF_r3_tags_2,
	sizeof(asn_DEF_r3_tags_2)
		/sizeof(asn_DEF_r3_tags_2[0]) - 1, /* 1 */
	asn_DEF_r3_tags_2,	/* Same as above */
	sizeof(asn_DEF_r3_tags_2)
		/sizeof(asn_DEF_r3_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_r3_2,
	2,	/* Elements count */
	&asn_SPC_r3_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_criticalExtensions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensions_specs_7 = {
	sizeof(struct criticalExtensions),
	offsetof(struct criticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_7 = {
	"criticalExtensions",
	"criticalExtensions",
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
	asn_DEF_criticalExtensions_tags_7,
	sizeof(asn_DEF_criticalExtensions_tags_7)
		/sizeof(asn_DEF_criticalExtensions_tags_7[0]) - 1, /* 1 */
	asn_DEF_criticalExtensions_tags_7,	/* Same as above */
	sizeof(asn_DEF_criticalExtensions_tags_7)
		/sizeof(asn_DEF_criticalExtensions_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_FailureInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_FailureInfo, choice.r3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_r3_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"r3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_FailureInfo, choice.criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensions_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_FailureInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* r3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions */
};
static asn_CHOICE_specifics_t asn_SPC_RRC_FailureInfo_specs_1 = {
	sizeof(struct RRC_FailureInfo),
	offsetof(struct RRC_FailureInfo, _asn_ctx),
	offsetof(struct RRC_FailureInfo, present),
	sizeof(((struct RRC_FailureInfo *)0)->present),
	asn_MAP_RRC_FailureInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RRC_FailureInfo = {
	"RRC-FailureInfo",
	"RRC-FailureInfo",
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
	&asn_PER_type_RRC_FailureInfo_constr_1,
	asn_MBR_RRC_FailureInfo_1,
	2,	/* Elements count */
	&asn_SPC_RRC_FailureInfo_specs_1	/* Additional specs */
};

