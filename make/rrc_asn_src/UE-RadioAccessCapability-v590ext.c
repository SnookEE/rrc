/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UE-RadioAccessCapability-v590ext.h"

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_v590ext_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v590ext, dl_CapabilityWithSimultaneousHS_DSCHConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CapabilityWithSimultaneousHS_DSCHConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CapabilityWithSimultaneousHS-DSCHConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v590ext, pdcp_Capability_r5_ext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Capability_r5_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Capability-r5-ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v590ext, rlc_Capability_r5_ext),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Capability_r5_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Capability-r5-ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v590ext, physicalChannelCapability),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelCapability_hspdsch_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v590ext, multiModeRAT_Capability_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiModeRAT_Capability_v590ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiModeRAT-Capability-v590ext"
		},
};
static const int asn_MAP_UE_RadioAccessCapability_v590ext_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UE_RadioAccessCapability_v590ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapability_v590ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CapabilityWithSimultaneousHS-DSCHConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcp-Capability-r5-ext */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlc-Capability-r5-ext */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* physicalChannelCapability */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* multiModeRAT-Capability-v590ext */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_v590ext_specs_1 = {
	sizeof(struct UE_RadioAccessCapability_v590ext),
	offsetof(struct UE_RadioAccessCapability_v590ext, _asn_ctx),
	asn_MAP_UE_RadioAccessCapability_v590ext_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapability_v590ext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v590ext = {
	"UE-RadioAccessCapability-v590ext",
	"UE-RadioAccessCapability-v590ext",
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
	asn_DEF_UE_RadioAccessCapability_v590ext_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapability_v590ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v590ext_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapability_v590ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapability_v590ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v590ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapability_v590ext_1,
	5,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapability_v590ext_specs_1	/* Additional specs */
};

