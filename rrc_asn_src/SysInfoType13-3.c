/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "SysInfoType13-3.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_3 = {
	sizeof(struct nonCriticalExtensions),
	offsetof(struct nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_3 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_3,
	sizeof(asn_DEF_nonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType13_3_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType13_3, ansi_41_PrivateNeighbourListInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ANSI_41_PrivateNeighbourListInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ansi-41-PrivateNeighbourListInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType13_3, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType13_3_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SysInfoType13_3_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType13_3_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ansi-41-PrivateNeighbourListInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType13_3_specs_1 = {
	sizeof(struct SysInfoType13_3),
	offsetof(struct SysInfoType13_3, _asn_ctx),
	asn_MAP_SysInfoType13_3_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SysInfoType13_3_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType13_3 = {
	"SysInfoType13-3",
	"SysInfoType13-3",
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
	asn_DEF_SysInfoType13_3_tags_1,
	sizeof(asn_DEF_SysInfoType13_3_tags_1)
		/sizeof(asn_DEF_SysInfoType13_3_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType13_3_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType13_3_tags_1)
		/sizeof(asn_DEF_SysInfoType13_3_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType13_3_1,
	2,	/* Elements count */
	&asn_SPC_SysInfoType13_3_specs_1	/* Additional specs */
};

