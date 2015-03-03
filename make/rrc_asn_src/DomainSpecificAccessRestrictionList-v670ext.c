/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DomainSpecificAccessRestrictionList-v670ext.h"

static asn_TYPE_member_t asn_MBR_DomainSpecificAccessRestrictionList_v670ext_1[] = {
	{ ATF_POINTER, 5, offsetof(struct DomainSpecificAccessRestrictionList_v670ext, domainSpecificAccessRestrictionParametersForOperator1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestrictionParam_v670ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"domainSpecificAccessRestrictionParametersForOperator1"
		},
	{ ATF_POINTER, 4, offsetof(struct DomainSpecificAccessRestrictionList_v670ext, domainSpecificAccessRestrictionParametersForOperator2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestrictionParam_v670ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"domainSpecificAccessRestrictionParametersForOperator2"
		},
	{ ATF_POINTER, 3, offsetof(struct DomainSpecificAccessRestrictionList_v670ext, domainSpecificAccessRestrictionParametersForOperator3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestrictionParam_v670ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"domainSpecificAccessRestrictionParametersForOperator3"
		},
	{ ATF_POINTER, 2, offsetof(struct DomainSpecificAccessRestrictionList_v670ext, domainSpecificAccessRestrictionParametersForOperator4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestrictionParam_v670ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"domainSpecificAccessRestrictionParametersForOperator4"
		},
	{ ATF_POINTER, 1, offsetof(struct DomainSpecificAccessRestrictionList_v670ext, domainSpecificAccessRestrictionParametersForOperator5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainSpecificAccessRestrictionParam_v670ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"domainSpecificAccessRestrictionParametersForOperator5"
		},
};
static const int asn_MAP_DomainSpecificAccessRestrictionList_v670ext_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DomainSpecificAccessRestrictionList_v670ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* domainSpecificAccessRestrictionParametersForOperator1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* domainSpecificAccessRestrictionParametersForOperator2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* domainSpecificAccessRestrictionParametersForOperator3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* domainSpecificAccessRestrictionParametersForOperator4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* domainSpecificAccessRestrictionParametersForOperator5 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DomainSpecificAccessRestrictionList_v670ext_specs_1 = {
	sizeof(struct DomainSpecificAccessRestrictionList_v670ext),
	offsetof(struct DomainSpecificAccessRestrictionList_v670ext, _asn_ctx),
	asn_MAP_DomainSpecificAccessRestrictionList_v670ext_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DomainSpecificAccessRestrictionList_v670ext_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DomainSpecificAccessRestrictionList_v670ext = {
	"DomainSpecificAccessRestrictionList-v670ext",
	"DomainSpecificAccessRestrictionList-v670ext",
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
	asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1,
	sizeof(asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1)
		/sizeof(asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1[0]), /* 1 */
	asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1)
		/sizeof(asn_DEF_DomainSpecificAccessRestrictionList_v670ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DomainSpecificAccessRestrictionList_v670ext_1,
	5,	/* Elements count */
	&asn_SPC_DomainSpecificAccessRestrictionList_v670ext_specs_1	/* Additional specs */
};

