/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "RB-InformationAffected-r6.h"

static asn_TYPE_member_t asn_MBR_RB_InformationAffected_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RB_InformationAffected_r6, rb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RB_InformationAffected_r6, rb_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_MappingInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-MappingInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_RB_InformationAffected_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RB_InformationAffected_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rb-MappingInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_RB_InformationAffected_r6_specs_1 = {
	sizeof(struct RB_InformationAffected_r6),
	offsetof(struct RB_InformationAffected_r6, _asn_ctx),
	asn_MAP_RB_InformationAffected_r6_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RB_InformationAffected_r6 = {
	"RB-InformationAffected-r6",
	"RB-InformationAffected-r6",
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
	asn_DEF_RB_InformationAffected_r6_tags_1,
	sizeof(asn_DEF_RB_InformationAffected_r6_tags_1)
		/sizeof(asn_DEF_RB_InformationAffected_r6_tags_1[0]), /* 1 */
	asn_DEF_RB_InformationAffected_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_RB_InformationAffected_r6_tags_1)
		/sizeof(asn_DEF_RB_InformationAffected_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RB_InformationAffected_r6_1,
	2,	/* Elements count */
	&asn_SPC_RB_InformationAffected_r6_specs_1	/* Additional specs */
};

