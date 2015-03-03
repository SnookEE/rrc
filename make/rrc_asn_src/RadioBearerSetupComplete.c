/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "RadioBearerSetupComplete.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_13 = {
	sizeof(struct nonCriticalExtensions),
	offsetof(struct nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_13 = {
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
	asn_DEF_nonCriticalExtensions_tags_13,
	sizeof(asn_DEF_nonCriticalExtensions_tags_13)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_13[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_13,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_13)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v7xyNonCriticalExtensions_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct v7xyNonCriticalExtensions, radioBearerSetupComplete_v7xyext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerSetupComplete_v7xyext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioBearerSetupComplete-v7xyext"
		},
	{ ATF_POINTER, 1, offsetof(struct v7xyNonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_v7xyNonCriticalExtensions_oms_11[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v7xyNonCriticalExtensions_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v7xyNonCriticalExtensions_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioBearerSetupComplete-v7xyext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v7xyNonCriticalExtensions_specs_11 = {
	sizeof(struct v7xyNonCriticalExtensions),
	offsetof(struct v7xyNonCriticalExtensions, _asn_ctx),
	asn_MAP_v7xyNonCriticalExtensions_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_v7xyNonCriticalExtensions_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v7xyNonCriticalExtensions_11 = {
	"v7xyNonCriticalExtensions",
	"v7xyNonCriticalExtensions",
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
	asn_DEF_v7xyNonCriticalExtensions_tags_11,
	sizeof(asn_DEF_v7xyNonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_v7xyNonCriticalExtensions_tags_11[0]) - 1, /* 1 */
	asn_DEF_v7xyNonCriticalExtensions_tags_11,	/* Same as above */
	sizeof(asn_DEF_v7xyNonCriticalExtensions_tags_11)
		/sizeof(asn_DEF_v7xyNonCriticalExtensions_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v7xyNonCriticalExtensions_11,
	2,	/* Elements count */
	&asn_SPC_v7xyNonCriticalExtensions_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_9[] = {
	{ ATF_POINTER, 2, offsetof(struct laterNonCriticalExtensions, radioBearerSetupComplete_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioBearerSetupComplete-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct laterNonCriticalExtensions, v7xyNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v7xyNonCriticalExtensions_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v7xyNonCriticalExtensions"
		},
};
static const int asn_MAP_laterNonCriticalExtensions_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioBearerSetupComplete-r3-add-ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v7xyNonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_9 = {
	sizeof(struct laterNonCriticalExtensions),
	offsetof(struct laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_9 = {
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
	asn_DEF_laterNonCriticalExtensions_tags_9,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_9[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_9,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_9)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_9,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioBearerSetupComplete_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerSetupComplete, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerSetupComplete, ul_IntegProtActivationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtActivationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-IntegProtActivationInfo"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerSetupComplete, ul_TimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TimingAdvance"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerSetupComplete, start_Value),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_START_Value,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"start-Value"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerSetupComplete, count_C_ActivationTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"count-C-ActivationTime"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetupComplete, dummy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_ActivationTimeInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetupComplete, ul_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CounterSynchronisationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetupComplete, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static const int asn_MAP_RadioBearerSetupComplete_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_RadioBearerSetupComplete_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioBearerSetupComplete_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-IntegProtActivationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-TimingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* start-Value */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* count-C-ActivationTime */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ul-CounterSynchronisationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* laterNonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioBearerSetupComplete_specs_1 = {
	sizeof(struct RadioBearerSetupComplete),
	offsetof(struct RadioBearerSetupComplete, _asn_ctx),
	asn_MAP_RadioBearerSetupComplete_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_RadioBearerSetupComplete_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioBearerSetupComplete = {
	"RadioBearerSetupComplete",
	"RadioBearerSetupComplete",
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
	asn_DEF_RadioBearerSetupComplete_tags_1,
	sizeof(asn_DEF_RadioBearerSetupComplete_tags_1)
		/sizeof(asn_DEF_RadioBearerSetupComplete_tags_1[0]), /* 1 */
	asn_DEF_RadioBearerSetupComplete_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioBearerSetupComplete_tags_1)
		/sizeof(asn_DEF_RadioBearerSetupComplete_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioBearerSetupComplete_1,
	8,	/* Elements count */
	&asn_SPC_RadioBearerSetupComplete_specs_1	/* Additional specs */
};

