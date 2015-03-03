/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "RB-InformationReconfig.h"

static asn_TYPE_member_t asn_MBR_RB_InformationReconfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RB_InformationReconfig, rb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-Identity"
		},
	{ ATF_POINTER, 5, offsetof(struct RB_InformationReconfig, pdcp_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_InfoReconfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Info"
		},
	{ ATF_POINTER, 4, offsetof(struct RB_InformationReconfig, pdcp_SN_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_SN_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-SN-Info"
		},
	{ ATF_POINTER, 3, offsetof(struct RB_InformationReconfig, rlc_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct RB_InformationReconfig, rb_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_MappingInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-MappingInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct RB_InformationReconfig, rb_StopContinue),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_StopContinue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-StopContinue"
		},
};
static const int asn_MAP_RB_InformationReconfig_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RB_InformationReconfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RB_InformationReconfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcp-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-SN-Info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Info */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rb-MappingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* rb-StopContinue */
};
static asn_SEQUENCE_specifics_t asn_SPC_RB_InformationReconfig_specs_1 = {
	sizeof(struct RB_InformationReconfig),
	offsetof(struct RB_InformationReconfig, _asn_ctx),
	asn_MAP_RB_InformationReconfig_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RB_InformationReconfig_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RB_InformationReconfig = {
	"RB-InformationReconfig",
	"RB-InformationReconfig",
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
	asn_DEF_RB_InformationReconfig_tags_1,
	sizeof(asn_DEF_RB_InformationReconfig_tags_1)
		/sizeof(asn_DEF_RB_InformationReconfig_tags_1[0]), /* 1 */
	asn_DEF_RB_InformationReconfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RB_InformationReconfig_tags_1)
		/sizeof(asn_DEF_RB_InformationReconfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RB_InformationReconfig_1,
	6,	/* Elements count */
	&asn_SPC_RB_InformationReconfig_specs_1	/* Additional specs */
};
