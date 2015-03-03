/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DedicatedDynamicTF-Info-DynamicTTI.h"

static asn_per_constraints_t asn_PER_type_rlc_Size_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Size_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct rlc_Size, choice.bitMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BitModeRLC_SizeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bitMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct rlc_Size, choice.octetModeType1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OctetModeRLC_SizeInfoType1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"octetModeType1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_Size_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bitMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* octetModeType1 */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Size_specs_2 = {
	sizeof(struct rlc_Size),
	offsetof(struct rlc_Size, _asn_ctx),
	offsetof(struct rlc_Size, present),
	sizeof(((struct rlc_Size *)0)->present),
	asn_MAP_rlc_Size_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Size_2 = {
	"rlc-Size",
	"rlc-Size",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_rlc_Size_constr_2,
	asn_MBR_rlc_Size_2,
	2,	/* Elements count */
	&asn_SPC_rlc_Size_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DedicatedDynamicTF_Info_DynamicTTI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, rlc_Size),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Size_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Size"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, numberOfTbSizeAndTTIList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfTbSizeAndTTIList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfTbSizeAndTTIList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, logicalChannelList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LogicalChannelList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelList"
		},
};
static const ber_tlv_tag_t asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DedicatedDynamicTF_Info_DynamicTTI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Size */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfTbSizeAndTTIList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelList */
};
static asn_SEQUENCE_specifics_t asn_SPC_DedicatedDynamicTF_Info_DynamicTTI_specs_1 = {
	sizeof(struct DedicatedDynamicTF_Info_DynamicTTI),
	offsetof(struct DedicatedDynamicTF_Info_DynamicTTI, _asn_ctx),
	asn_MAP_DedicatedDynamicTF_Info_DynamicTTI_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DedicatedDynamicTF_Info_DynamicTTI = {
	"DedicatedDynamicTF-Info-DynamicTTI",
	"DedicatedDynamicTF-Info-DynamicTTI",
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
	asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1,
	sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[0]), /* 1 */
	asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1,	/* Same as above */
	sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1)
		/sizeof(asn_DEF_DedicatedDynamicTF_Info_DynamicTTI_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DedicatedDynamicTF_Info_DynamicTTI_1,
	3,	/* Elements count */
	&asn_SPC_DedicatedDynamicTF_Info_DynamicTTI_specs_1	/* Additional specs */
};

