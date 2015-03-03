/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PDSCH-Info-LCR-r4.h"

static int asn_DFL_2_set_1(int set_value, void **sptr) {
	TFCS_IdentityPlain_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		*st = 1;
		return 0;
	} else {
		/* Test default value 1 */
		return (*st == 1);
	}
}
static asn_TYPE_member_t asn_MBR_PDSCH_Info_LCR_r4_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PDSCH_Info_LCR_r4, tfcs_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_IdentityPlain,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_1,	/* DEFAULT 1 */
		"tfcs-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_Info_LCR_r4, commonTimeslotInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonTimeslotInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonTimeslotInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_Info_LCR_r4, pdsch_TimeslotsCodes),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownlinkTimeslotsCodes_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-TimeslotsCodes"
		},
};
static const int asn_MAP_PDSCH_Info_LCR_r4_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PDSCH_Info_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_Info_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tfcs-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonTimeslotInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pdsch-TimeslotsCodes */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDSCH_Info_LCR_r4_specs_1 = {
	sizeof(struct PDSCH_Info_LCR_r4),
	offsetof(struct PDSCH_Info_LCR_r4, _asn_ctx),
	asn_MAP_PDSCH_Info_LCR_r4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PDSCH_Info_LCR_r4_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_Info_LCR_r4 = {
	"PDSCH-Info-LCR-r4",
	"PDSCH-Info-LCR-r4",
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
	asn_DEF_PDSCH_Info_LCR_r4_tags_1,
	sizeof(asn_DEF_PDSCH_Info_LCR_r4_tags_1)
		/sizeof(asn_DEF_PDSCH_Info_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_Info_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_Info_LCR_r4_tags_1)
		/sizeof(asn_DEF_PDSCH_Info_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDSCH_Info_LCR_r4_1,
	3,	/* Elements count */
	&asn_SPC_PDSCH_Info_LCR_r4_specs_1	/* Additional specs */
};
