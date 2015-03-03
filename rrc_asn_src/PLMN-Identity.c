/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PLMN-Identity.h"

static asn_TYPE_member_t asn_MBR_PLMN_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Identity, mcc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MCC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Identity, mnc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MNC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mnc"
		},
};
static const ber_tlv_tag_t asn_DEF_PLMN_Identity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PLMN_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mnc */
};
static asn_SEQUENCE_specifics_t asn_SPC_PLMN_Identity_specs_1 = {
	sizeof(struct PLMN_Identity),
	offsetof(struct PLMN_Identity, _asn_ctx),
	asn_MAP_PLMN_Identity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_Identity = {
	"PLMN-Identity",
	"PLMN-Identity",
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
	asn_DEF_PLMN_Identity_tags_1,
	sizeof(asn_DEF_PLMN_Identity_tags_1)
		/sizeof(asn_DEF_PLMN_Identity_tags_1[0]), /* 1 */
	asn_DEF_PLMN_Identity_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_Identity_tags_1)
		/sizeof(asn_DEF_PLMN_Identity_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PLMN_Identity_1,
	2,	/* Elements count */
	&asn_SPC_PLMN_Identity_specs_1	/* Additional specs */
};

