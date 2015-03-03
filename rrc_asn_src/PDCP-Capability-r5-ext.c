/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PDCP-Capability-r5-ext.h"

static asn_TYPE_member_t asn_MBR_PDCP_Capability_r5_ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5_ext, supportForRfc3095ContextRelocation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095ContextRelocation"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Capability_r5_ext, maxHcContextSpace),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxHcContextSpace_r5_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxHcContextSpace"
		},
};
static const int asn_MAP_PDCP_Capability_r5_ext_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PDCP_Capability_r5_ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Capability_r5_ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportForRfc3095ContextRelocation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxHcContextSpace */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Capability_r5_ext_specs_1 = {
	sizeof(struct PDCP_Capability_r5_ext),
	offsetof(struct PDCP_Capability_r5_ext, _asn_ctx),
	asn_MAP_PDCP_Capability_r5_ext_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDCP_Capability_r5_ext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Capability_r5_ext = {
	"PDCP-Capability-r5-ext",
	"PDCP-Capability-r5-ext",
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
	asn_DEF_PDCP_Capability_r5_ext_tags_1,
	sizeof(asn_DEF_PDCP_Capability_r5_ext_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r5_ext_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Capability_r5_ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Capability_r5_ext_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r5_ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Capability_r5_ext_1,
	2,	/* Elements count */
	&asn_SPC_PDCP_Capability_r5_ext_specs_1	/* Additional specs */
};

