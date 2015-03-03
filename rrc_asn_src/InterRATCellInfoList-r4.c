/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "InterRATCellInfoList-r4.h"

static asn_TYPE_member_t asn_MBR_InterRATCellInfoList_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATCellInfoList_r4, removedInterRATCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RemovedInterRATCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"removedInterRATCellList"
		},
	{ ATF_POINTER, 2, offsetof(struct InterRATCellInfoList_r4, newInterRATCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NewInterRATCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newInterRATCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct InterRATCellInfoList_r4, cellsForInterRATMeasList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsForInterRATMeasList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsForInterRATMeasList"
		},
};
static const int asn_MAP_InterRATCellInfoList_r4_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_InterRATCellInfoList_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterRATCellInfoList_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* removedInterRATCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* newInterRATCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellsForInterRATMeasList */
};
static asn_SEQUENCE_specifics_t asn_SPC_InterRATCellInfoList_r4_specs_1 = {
	sizeof(struct InterRATCellInfoList_r4),
	offsetof(struct InterRATCellInfoList_r4, _asn_ctx),
	asn_MAP_InterRATCellInfoList_r4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_InterRATCellInfoList_r4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList_r4 = {
	"InterRATCellInfoList-r4",
	"InterRATCellInfoList-r4",
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
	asn_DEF_InterRATCellInfoList_r4_tags_1,
	sizeof(asn_DEF_InterRATCellInfoList_r4_tags_1)
		/sizeof(asn_DEF_InterRATCellInfoList_r4_tags_1[0]), /* 1 */
	asn_DEF_InterRATCellInfoList_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterRATCellInfoList_r4_tags_1)
		/sizeof(asn_DEF_InterRATCellInfoList_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InterRATCellInfoList_r4_1,
	3,	/* Elements count */
	&asn_SPC_InterRATCellInfoList_r4_specs_1	/* Additional specs */
};

