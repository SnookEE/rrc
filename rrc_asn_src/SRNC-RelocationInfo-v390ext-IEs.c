/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#include "SRNC-RelocationInfo-v390ext-IEs.h"

static asn_TYPE_member_t asn_MBR_SRNC_RelocationInfo_v390ext_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SRNC_RelocationInfo_v390ext_IEs, cn_DomainInformationList_v390ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainInformationList_v390ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainInformationList-v390ext"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_v390ext_IEs, ue_RadioAccessCapability_v370ext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioAccessCapability_v370ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RadioAccessCapability-v370ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_v390ext_IEs, ue_RadioAccessCapability_v380ext),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioAccessCapability_v380ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RadioAccessCapability-v380ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_v390ext_IEs, dl_PhysChCapabilityFDD_v380ext),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityFDD_v380ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-PhysChCapabilityFDD-v380ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_v390ext_IEs, failureCauseWithProtErr),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FailureCauseWithProtErr,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failureCauseWithProtErr"
		},
};
static const int asn_MAP_SRNC_RelocationInfo_v390ext_IEs_oms_1[] = { 0, 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRNC_RelocationInfo_v390ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cn-DomainInformationList-v390ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-RadioAccessCapability-v370ext */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-RadioAccessCapability-v380ext */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-PhysChCapabilityFDD-v380ext */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* failureCauseWithProtErr */
};
static asn_SEQUENCE_specifics_t asn_SPC_SRNC_RelocationInfo_v390ext_IEs_specs_1 = {
	sizeof(struct SRNC_RelocationInfo_v390ext_IEs),
	offsetof(struct SRNC_RelocationInfo_v390ext_IEs, _asn_ctx),
	asn_MAP_SRNC_RelocationInfo_v390ext_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SRNC_RelocationInfo_v390ext_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_v390ext_IEs = {
	"SRNC-RelocationInfo-v390ext-IEs",
	"SRNC-RelocationInfo-v390ext-IEs",
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
	asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1,
	sizeof(asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1)
		/sizeof(asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1)
		/sizeof(asn_DEF_SRNC_RelocationInfo_v390ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SRNC_RelocationInfo_v390ext_IEs_1,
	5,	/* Elements count */
	&asn_SPC_SRNC_RelocationInfo_v390ext_IEs_specs_1	/* Additional specs */
};

