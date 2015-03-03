/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-LogicalChannelMappingList-r6.h"

static int
memb_ul_LogicalChannelMapping_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ul_LogicalChannelMapping_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ul_LogicalChannelMapping_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ul_LogicalChannelMapping_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UL_LogicalChannelMapping_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ul_LogicalChannelMapping_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ul_LogicalChannelMapping_specs_3 = {
	sizeof(struct ul_LogicalChannelMapping),
	offsetof(struct ul_LogicalChannelMapping, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_LogicalChannelMapping_3 = {
	"ul-LogicalChannelMapping",
	"ul-LogicalChannelMapping",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_LogicalChannelMapping_tags_3,
	sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3)
		/sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3[0]) - 1, /* 1 */
	asn_DEF_ul_LogicalChannelMapping_tags_3,	/* Same as above */
	sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3)
		/sizeof(asn_DEF_ul_LogicalChannelMapping_tags_3[0]), /* 2 */
	&asn_PER_type_ul_LogicalChannelMapping_constr_3,
	asn_MBR_ul_LogicalChannelMapping_3,
	1,	/* Single element */
	&asn_SPC_ul_LogicalChannelMapping_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_LogicalChannelMappingList_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_LogicalChannelMappingList_r6, rlc_LogicalChannelMappingIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-LogicalChannelMappingIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_LogicalChannelMappingList_r6, ul_LogicalChannelMapping),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_LogicalChannelMapping_3,
		memb_ul_LogicalChannelMapping_constraint_1,
		&asn_PER_memb_ul_LogicalChannelMapping_constr_3,
		0,
		"ul-LogicalChannelMapping"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_LogicalChannelMappingList_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_LogicalChannelMappingList_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-LogicalChannelMappingIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-LogicalChannelMapping */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_LogicalChannelMappingList_r6_specs_1 = {
	sizeof(struct UL_LogicalChannelMappingList_r6),
	offsetof(struct UL_LogicalChannelMappingList_r6, _asn_ctx),
	asn_MAP_UL_LogicalChannelMappingList_r6_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_LogicalChannelMappingList_r6 = {
	"UL-LogicalChannelMappingList-r6",
	"UL-LogicalChannelMappingList-r6",
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
	asn_DEF_UL_LogicalChannelMappingList_r6_tags_1,
	sizeof(asn_DEF_UL_LogicalChannelMappingList_r6_tags_1)
		/sizeof(asn_DEF_UL_LogicalChannelMappingList_r6_tags_1[0]), /* 1 */
	asn_DEF_UL_LogicalChannelMappingList_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_LogicalChannelMappingList_r6_tags_1)
		/sizeof(asn_DEF_UL_LogicalChannelMappingList_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_LogicalChannelMappingList_r6_1,
	2,	/* Elements count */
	&asn_SPC_UL_LogicalChannelMappingList_r6_specs_1	/* Additional specs */
};

