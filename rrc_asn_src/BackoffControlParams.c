/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "BackoffControlParams.h"

static asn_TYPE_member_t asn_MBR_BackoffControlParams_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, n_AP_RetransMax),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_AP_RetransMax,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"n-AP-RetransMax"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, n_AccessFails),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_AccessFails,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"n-AccessFails"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, nf_BO_NoAICH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NF_BO_NoAICH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nf-BO-NoAICH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, ns_BO_Busy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NS_BO_Busy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ns-BO-Busy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, nf_BO_AllBusy),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NF_BO_AllBusy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nf-BO-AllBusy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, nf_BO_Mismatch),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NF_BO_Mismatch,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nf-BO-Mismatch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BackoffControlParams, t_CPCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_CPCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-CPCH"
		},
};
static const ber_tlv_tag_t asn_DEF_BackoffControlParams_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BackoffControlParams_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-AP-RetransMax */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n-AccessFails */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nf-BO-NoAICH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ns-BO-Busy */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nf-BO-AllBusy */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nf-BO-Mismatch */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* t-CPCH */
};
static asn_SEQUENCE_specifics_t asn_SPC_BackoffControlParams_specs_1 = {
	sizeof(struct BackoffControlParams),
	offsetof(struct BackoffControlParams, _asn_ctx),
	asn_MAP_BackoffControlParams_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BackoffControlParams = {
	"BackoffControlParams",
	"BackoffControlParams",
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
	asn_DEF_BackoffControlParams_tags_1,
	sizeof(asn_DEF_BackoffControlParams_tags_1)
		/sizeof(asn_DEF_BackoffControlParams_tags_1[0]), /* 1 */
	asn_DEF_BackoffControlParams_tags_1,	/* Same as above */
	sizeof(asn_DEF_BackoffControlParams_tags_1)
		/sizeof(asn_DEF_BackoffControlParams_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BackoffControlParams_1,
	7,	/* Elements count */
	&asn_SPC_BackoffControlParams_specs_1	/* Additional specs */
};
