/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "OpenLoopPowerControl-IPDL-TDD-r4.h"

static asn_TYPE_member_t asn_MBR_OpenLoopPowerControl_IPDL_TDD_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OpenLoopPowerControl_IPDL_TDD_r4, ipdl_alpha),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ipdl-alpha"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OpenLoopPowerControl_IPDL_TDD_r4, maxPowerIncrease),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxPowerIncrease_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxPowerIncrease"
		},
};
static const ber_tlv_tag_t asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OpenLoopPowerControl_IPDL_TDD_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ipdl-alpha */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxPowerIncrease */
};
static asn_SEQUENCE_specifics_t asn_SPC_OpenLoopPowerControl_IPDL_TDD_r4_specs_1 = {
	sizeof(struct OpenLoopPowerControl_IPDL_TDD_r4),
	offsetof(struct OpenLoopPowerControl_IPDL_TDD_r4, _asn_ctx),
	asn_MAP_OpenLoopPowerControl_IPDL_TDD_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4 = {
	"OpenLoopPowerControl-IPDL-TDD-r4",
	"OpenLoopPowerControl-IPDL-TDD-r4",
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
	asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1,
	sizeof(asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1)
		/sizeof(asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1[0]), /* 1 */
	asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1)
		/sizeof(asn_DEF_OpenLoopPowerControl_IPDL_TDD_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OpenLoopPowerControl_IPDL_TDD_r4_1,
	2,	/* Elements count */
	&asn_SPC_OpenLoopPowerControl_IPDL_TDD_r4_specs_1	/* Additional specs */
};

