/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PhysicalChannelCapability-LCR-r4.h"

static asn_TYPE_member_t asn_MBR_tdd128_PhysChCapability_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd128_PhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd128_PhysChCapability, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_PhysChCapability_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_PhysChCapability_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_PhysChCapability_specs_2 = {
	sizeof(struct tdd128_PhysChCapability),
	offsetof(struct tdd128_PhysChCapability, _asn_ctx),
	asn_MAP_tdd128_PhysChCapability_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_PhysChCapability_2 = {
	"tdd128-PhysChCapability",
	"tdd128-PhysChCapability",
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
	asn_DEF_tdd128_PhysChCapability_tags_2,
	sizeof(asn_DEF_tdd128_PhysChCapability_tags_2)
		/sizeof(asn_DEF_tdd128_PhysChCapability_tags_2[0]) - 1, /* 1 */
	asn_DEF_tdd128_PhysChCapability_tags_2,	/* Same as above */
	sizeof(asn_DEF_tdd128_PhysChCapability_tags_2)
		/sizeof(asn_DEF_tdd128_PhysChCapability_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_PhysChCapability_2,
	2,	/* Elements count */
	&asn_SPC_tdd128_PhysChCapability_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_LCR_r4_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelCapability_LCR_r4, tdd128_PhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd128_PhysChCapability_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128-PhysChCapability"
		},
};
static const int asn_MAP_PhysicalChannelCapability_LCR_r4_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapability_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd128-PhysChCapability */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_LCR_r4_specs_1 = {
	sizeof(struct PhysicalChannelCapability_LCR_r4),
	offsetof(struct PhysicalChannelCapability_LCR_r4, _asn_ctx),
	asn_MAP_PhysicalChannelCapability_LCR_r4_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelCapability_LCR_r4_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_LCR_r4 = {
	"PhysicalChannelCapability-LCR-r4",
	"PhysicalChannelCapability-LCR-r4",
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
	asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelCapability_LCR_r4_1,
	1,	/* Elements count */
	&asn_SPC_PhysicalChannelCapability_LCR_r4_specs_1	/* Additional specs */
};

