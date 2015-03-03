/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-DPCH-PowerControlInfoPostFDD.h"

static asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfoPostFDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPostFDD, dpcch_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPCCH_PowerOffset2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpcch-PowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPostFDD, pc_Preamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PC_Preamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pc-Preamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPostFDD, sRB_delay),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_delay,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sRB-delay"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfoPostFDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dpcch-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pc-Preamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sRB-delay */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_DPCH_PowerControlInfoPostFDD_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfoPostFDD),
	offsetof(struct UL_DPCH_PowerControlInfoPostFDD, _asn_ctx),
	asn_MAP_UL_DPCH_PowerControlInfoPostFDD_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfoPostFDD = {
	"UL-DPCH-PowerControlInfoPostFDD",
	"UL-DPCH-PowerControlInfoPostFDD",
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
	asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1,
	sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1)
		/sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1[0]), /* 1 */
	asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1)
		/sizeof(asn_DEF_UL_DPCH_PowerControlInfoPostFDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_DPCH_PowerControlInfoPostFDD_1,
	3,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfoPostFDD_specs_1	/* Additional specs */
};

