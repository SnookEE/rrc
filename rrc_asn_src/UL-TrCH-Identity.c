/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-TrCH-Identity.h"

static asn_per_constraints_t asn_PER_type_UL_TrCH_Identity_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UL_TrCH_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TrCH_Identity, choice.dch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TrCH_Identity, choice.rachorcpch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rachorcpch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TrCH_Identity, choice.usch),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"usch"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_TrCH_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rachorcpch */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* usch */
};
static asn_CHOICE_specifics_t asn_SPC_UL_TrCH_Identity_specs_1 = {
	sizeof(struct UL_TrCH_Identity),
	offsetof(struct UL_TrCH_Identity, _asn_ctx),
	offsetof(struct UL_TrCH_Identity, present),
	sizeof(((struct UL_TrCH_Identity *)0)->present),
	asn_MAP_UL_TrCH_Identity_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_TrCH_Identity = {
	"UL-TrCH-Identity",
	"UL-TrCH-Identity",
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
	&asn_PER_type_UL_TrCH_Identity_constr_1,
	asn_MBR_UL_TrCH_Identity_1,
	3,	/* Elements count */
	&asn_SPC_UL_TrCH_Identity_specs_1	/* Additional specs */
};

