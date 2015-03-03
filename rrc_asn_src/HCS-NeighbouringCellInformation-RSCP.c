/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "HCS-NeighbouringCellInformation-RSCP.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	HCS_PRIO_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_3_set_0(int set_value, void **sptr) {
	Q_HCS_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_HCS_NeighbouringCellInformation_RSCP_1[] = {
	{ ATF_NOFLAGS, 2, offsetof(struct HCS_NeighbouringCellInformation_RSCP, hcs_PRIO),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HCS_PRIO,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"hcs-PRIO"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct HCS_NeighbouringCellInformation_RSCP, q_HCS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_HCS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_3_set_0,	/* DEFAULT 0 */
		"q-HCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HCS_NeighbouringCellInformation_RSCP, hcs_CellReselectInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HCS_CellReselectInformation_RSCP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hcs-CellReselectInformation"
		},
};
static const int asn_MAP_HCS_NeighbouringCellInformation_RSCP_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HCS_NeighbouringCellInformation_RSCP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hcs-PRIO */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-HCS */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* hcs-CellReselectInformation */
};
static asn_SEQUENCE_specifics_t asn_SPC_HCS_NeighbouringCellInformation_RSCP_specs_1 = {
	sizeof(struct HCS_NeighbouringCellInformation_RSCP),
	offsetof(struct HCS_NeighbouringCellInformation_RSCP, _asn_ctx),
	asn_MAP_HCS_NeighbouringCellInformation_RSCP_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_HCS_NeighbouringCellInformation_RSCP_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HCS_NeighbouringCellInformation_RSCP = {
	"HCS-NeighbouringCellInformation-RSCP",
	"HCS-NeighbouringCellInformation-RSCP",
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
	asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1,
	sizeof(asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1)
		/sizeof(asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1[0]), /* 1 */
	asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1,	/* Same as above */
	sizeof(asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1)
		/sizeof(asn_DEF_HCS_NeighbouringCellInformation_RSCP_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HCS_NeighbouringCellInformation_RSCP_1,
	3,	/* Elements count */
	&asn_SPC_HCS_NeighbouringCellInformation_RSCP_specs_1	/* Additional specs */
};

