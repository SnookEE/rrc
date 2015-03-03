/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "TFCS.h"

static asn_per_constraints_t asn_PER_type_TFCS_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_TFCS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TFCS, choice.normalTFCI_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ExplicitTFCS_Configuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"normalTFCI-Signalling"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TFCS, choice.dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SplitTFCI_Signalling,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TFCS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* normalTFCI-Signalling */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy */
};
static asn_CHOICE_specifics_t asn_SPC_TFCS_specs_1 = {
	sizeof(struct TFCS),
	offsetof(struct TFCS, _asn_ctx),
	offsetof(struct TFCS, present),
	sizeof(((struct TFCS *)0)->present),
	asn_MAP_TFCS_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TFCS = {
	"TFCS",
	"TFCS",
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
	&asn_PER_type_TFCS_constr_1,
	asn_MBR_TFCS_1,
	2,	/* Elements count */
	&asn_SPC_TFCS_specs_1	/* Additional specs */
};
