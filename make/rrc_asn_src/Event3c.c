/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "Event3c.h"

static asn_TYPE_member_t asn_MBR_Event3c_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event3c, thresholdOtherSystem),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Threshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"thresholdOtherSystem"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event3c, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Hysteresis,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event3c, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeToTrigger"
		},
	{ ATF_POINTER, 1, offsetof(struct Event3c, reportingCellStatus),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReportingCellStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingCellStatus"
		},
};
static const int asn_MAP_Event3c_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_Event3c_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Event3c_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdOtherSystem */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reportingCellStatus */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event3c_specs_1 = {
	sizeof(struct Event3c),
	offsetof(struct Event3c, _asn_ctx),
	asn_MAP_Event3c_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Event3c_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event3c = {
	"Event3c",
	"Event3c",
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
	asn_DEF_Event3c_tags_1,
	sizeof(asn_DEF_Event3c_tags_1)
		/sizeof(asn_DEF_Event3c_tags_1[0]), /* 1 */
	asn_DEF_Event3c_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event3c_tags_1)
		/sizeof(asn_DEF_Event3c_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event3c_1,
	4,	/* Elements count */
	&asn_SPC_Event3c_specs_1	/* Additional specs */
};

