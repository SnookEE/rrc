/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "CommonTimeslotInfo.h"

static asn_TYPE_member_t asn_MBR_CommonTimeslotInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTimeslotInfo, secondInterleavingMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondInterleavingMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondInterleavingMode"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonTimeslotInfo, tfci_Coding),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCI_Coding,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfci-Coding"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTimeslotInfo, puncturingLimit),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PuncturingLimit,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"puncturingLimit"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonTimeslotInfo, repetitionPeriodAndLength),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepetitionPeriodAndLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodAndLength"
		},
};
static const int asn_MAP_CommonTimeslotInfo_oms_1[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_CommonTimeslotInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CommonTimeslotInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondInterleavingMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfci-Coding */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* puncturingLimit */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* repetitionPeriodAndLength */
};
static asn_SEQUENCE_specifics_t asn_SPC_CommonTimeslotInfo_specs_1 = {
	sizeof(struct CommonTimeslotInfo),
	offsetof(struct CommonTimeslotInfo, _asn_ctx),
	asn_MAP_CommonTimeslotInfo_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CommonTimeslotInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CommonTimeslotInfo = {
	"CommonTimeslotInfo",
	"CommonTimeslotInfo",
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
	asn_DEF_CommonTimeslotInfo_tags_1,
	sizeof(asn_DEF_CommonTimeslotInfo_tags_1)
		/sizeof(asn_DEF_CommonTimeslotInfo_tags_1[0]), /* 1 */
	asn_DEF_CommonTimeslotInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonTimeslotInfo_tags_1)
		/sizeof(asn_DEF_CommonTimeslotInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CommonTimeslotInfo_1,
	4,	/* Elements count */
	&asn_SPC_CommonTimeslotInfo_specs_1	/* Additional specs */
};
