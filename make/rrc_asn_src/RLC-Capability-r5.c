/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#include "RLC-Capability-r5.h"

static asn_TYPE_member_t asn_MBR_RLC_Capability_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Capability_r5, totalRLC_AM_BufferSize),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TotalRLC_AM_BufferSize_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"totalRLC-AM-BufferSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Capability_r5, maximumRLC_WindowSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaximumRLC_WindowSize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maximumRLC-WindowSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Capability_r5, maximumAM_EntityNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaximumAM_EntityNumberRLC_Cap,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maximumAM-EntityNumber"
		},
};
static const ber_tlv_tag_t asn_DEF_RLC_Capability_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Capability_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* totalRLC-AM-BufferSize */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maximumRLC-WindowSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* maximumAM-EntityNumber */
};
static asn_SEQUENCE_specifics_t asn_SPC_RLC_Capability_r5_specs_1 = {
	sizeof(struct RLC_Capability_r5),
	offsetof(struct RLC_Capability_r5, _asn_ctx),
	asn_MAP_RLC_Capability_r5_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Capability_r5 = {
	"RLC-Capability-r5",
	"RLC-Capability-r5",
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
	asn_DEF_RLC_Capability_r5_tags_1,
	sizeof(asn_DEF_RLC_Capability_r5_tags_1)
		/sizeof(asn_DEF_RLC_Capability_r5_tags_1[0]), /* 1 */
	asn_DEF_RLC_Capability_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Capability_r5_tags_1)
		/sizeof(asn_DEF_RLC_Capability_r5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RLC_Capability_r5_1,
	3,	/* Elements count */
	&asn_SPC_RLC_Capability_r5_specs_1	/* Additional specs */
};

