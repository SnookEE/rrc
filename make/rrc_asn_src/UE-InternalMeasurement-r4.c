/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UE-InternalMeasurement-r4.h"

static asn_TYPE_member_t asn_MBR_UE_InternalMeasurement_r4_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_InternalMeasurement_r4, ue_InternalMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_InternalMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-InternalMeasQuantity"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_InternalMeasurement_r4, ue_InternalReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_InternalReportingQuantity_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-InternalReportingQuantity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_InternalMeasurement_r4, reportCriteria),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_InternalReportCriteria,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportCriteria"
		},
};
static const int asn_MAP_UE_InternalMeasurement_r4_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_InternalMeasurement_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_InternalMeasurement_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-InternalMeasQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-InternalReportingQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reportCriteria */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_InternalMeasurement_r4_specs_1 = {
	sizeof(struct UE_InternalMeasurement_r4),
	offsetof(struct UE_InternalMeasurement_r4, _asn_ctx),
	asn_MAP_UE_InternalMeasurement_r4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_InternalMeasurement_r4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_InternalMeasurement_r4 = {
	"UE-InternalMeasurement-r4",
	"UE-InternalMeasurement-r4",
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
	asn_DEF_UE_InternalMeasurement_r4_tags_1,
	sizeof(asn_DEF_UE_InternalMeasurement_r4_tags_1)
		/sizeof(asn_DEF_UE_InternalMeasurement_r4_tags_1[0]), /* 1 */
	asn_DEF_UE_InternalMeasurement_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_InternalMeasurement_r4_tags_1)
		/sizeof(asn_DEF_UE_InternalMeasurement_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_InternalMeasurement_r4_1,
	3,	/* Elements count */
	&asn_SPC_UE_InternalMeasurement_r4_specs_1	/* Additional specs */
};

