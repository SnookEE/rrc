/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PDCP-Info-r4.h"

static asn_TYPE_member_t asn_MBR_PDCP_Info_r4_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PDCP_Info_r4, losslessSRNS_RelocSupport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LosslessSRNS_RelocSupport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"losslessSRNS-RelocSupport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Info_r4, pdcp_PDU_Header),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_PDU_Header,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-PDU-Header"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Info_r4, headerCompressionInfoList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeaderCompressionInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"headerCompressionInfoList"
		},
};
static const int asn_MAP_PDCP_Info_r4_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_PDCP_Info_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Info_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* losslessSRNS-RelocSupport */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcp-PDU-Header */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* headerCompressionInfoList */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Info_r4_specs_1 = {
	sizeof(struct PDCP_Info_r4),
	offsetof(struct PDCP_Info_r4, _asn_ctx),
	asn_MAP_PDCP_Info_r4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PDCP_Info_r4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Info_r4 = {
	"PDCP-Info-r4",
	"PDCP-Info-r4",
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
	asn_DEF_PDCP_Info_r4_tags_1,
	sizeof(asn_DEF_PDCP_Info_r4_tags_1)
		/sizeof(asn_DEF_PDCP_Info_r4_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Info_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Info_r4_tags_1)
		/sizeof(asn_DEF_PDCP_Info_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Info_r4_1,
	3,	/* Elements count */
	&asn_SPC_PDCP_Info_r4_specs_1	/* Additional specs */
};

