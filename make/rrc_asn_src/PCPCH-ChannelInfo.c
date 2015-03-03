/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PCPCH-ChannelInfo.h"

static int
memb_pcpch_UL_ScramblingCode_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pcpch_DL_ChannelisationCode_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_pcpch_UL_ScramblingCode_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_pcpch_DL_ChannelisationCode_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PCPCH_ChannelInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PCPCH_ChannelInfo, pcpch_UL_ScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pcpch_UL_ScramblingCode_constraint_1,
		&asn_PER_memb_pcpch_UL_ScramblingCode_constr_2,
		0,
		"pcpch-UL-ScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PCPCH_ChannelInfo, pcpch_DL_ChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pcpch_DL_ChannelisationCode_constraint_1,
		&asn_PER_memb_pcpch_DL_ChannelisationCode_constr_3,
		0,
		"pcpch-DL-ChannelisationCode"
		},
	{ ATF_POINTER, 1, offsetof(struct PCPCH_ChannelInfo, pcpch_DL_ScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pcpch-DL-ScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PCPCH_ChannelInfo, pcp_Length),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCP_Length,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pcp-Length"
		},
	{ ATF_POINTER, 1, offsetof(struct PCPCH_ChannelInfo, ucsm_Info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UCSM_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ucsm-Info"
		},
};
static const int asn_MAP_PCPCH_ChannelInfo_oms_1[] = { 2, 4 };
static const ber_tlv_tag_t asn_DEF_PCPCH_ChannelInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PCPCH_ChannelInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pcpch-UL-ScramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pcpch-DL-ChannelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pcpch-DL-ScramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pcp-Length */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ucsm-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_PCPCH_ChannelInfo_specs_1 = {
	sizeof(struct PCPCH_ChannelInfo),
	offsetof(struct PCPCH_ChannelInfo, _asn_ctx),
	asn_MAP_PCPCH_ChannelInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PCPCH_ChannelInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PCPCH_ChannelInfo = {
	"PCPCH-ChannelInfo",
	"PCPCH-ChannelInfo",
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
	asn_DEF_PCPCH_ChannelInfo_tags_1,
	sizeof(asn_DEF_PCPCH_ChannelInfo_tags_1)
		/sizeof(asn_DEF_PCPCH_ChannelInfo_tags_1[0]), /* 1 */
	asn_DEF_PCPCH_ChannelInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_PCPCH_ChannelInfo_tags_1)
		/sizeof(asn_DEF_PCPCH_ChannelInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PCPCH_ChannelInfo_1,
	5,	/* Elements count */
	&asn_SPC_PCPCH_ChannelInfo_specs_1	/* Additional specs */
};

