/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "RAT-TDD-Info.h"

static asn_TYPE_member_t asn_MBR_RAT_TDD_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RAT_TDD_Info, rat_Identifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAT_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rat-Identifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RAT_TDD_Info, s_SearchRAT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-SearchRAT"
		},
	{ ATF_POINTER, 1, offsetof(struct RAT_TDD_Info, s_HCS_RAT),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-HCS-RAT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RAT_TDD_Info, s_Limit_SearchRAT),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Limit-SearchRAT"
		},
};
static const int asn_MAP_RAT_TDD_Info_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RAT_TDD_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RAT_TDD_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rat-Identifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-SearchRAT */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* s-HCS-RAT */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* s-Limit-SearchRAT */
};
static asn_SEQUENCE_specifics_t asn_SPC_RAT_TDD_Info_specs_1 = {
	sizeof(struct RAT_TDD_Info),
	offsetof(struct RAT_TDD_Info, _asn_ctx),
	asn_MAP_RAT_TDD_Info_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RAT_TDD_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RAT_TDD_Info = {
	"RAT-TDD-Info",
	"RAT-TDD-Info",
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
	asn_DEF_RAT_TDD_Info_tags_1,
	sizeof(asn_DEF_RAT_TDD_Info_tags_1)
		/sizeof(asn_DEF_RAT_TDD_Info_tags_1[0]), /* 1 */
	asn_DEF_RAT_TDD_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_RAT_TDD_Info_tags_1)
		/sizeof(asn_DEF_RAT_TDD_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RAT_TDD_Info_1,
	4,	/* Elements count */
	&asn_SPC_RAT_TDD_Info_specs_1	/* Additional specs */
};
