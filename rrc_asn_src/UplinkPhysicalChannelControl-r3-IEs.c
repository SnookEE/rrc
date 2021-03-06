/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "UplinkPhysicalChannelControl-r3-IEs.h"

static asn_TYPE_member_t asn_MBR_UplinkPhysicalChannelControl_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 6, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, ccTrCH_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCTrCH_PowerControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ccTrCH-PowerControlInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, timingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvanceControl,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timingAdvance"
		},
	{ ATF_POINTER, 4, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, alpha),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alpha"
		},
	{ ATF_POINTER, 3, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, specialBurstScheduling),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpecialBurstScheduling,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specialBurstScheduling"
		},
	{ ATF_POINTER, 2, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, prach_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValueTdd,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-ConstantValue"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPhysicalChannelControl_r3_IEs, pusch_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValueTdd,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConstantValue"
		},
};
static const int asn_MAP_UplinkPhysicalChannelControl_r3_IEs_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPhysicalChannelControl_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ccTrCH-PowerControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alpha */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* specialBurstScheduling */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* prach-ConstantValue */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* pusch-ConstantValue */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPhysicalChannelControl_r3_IEs_specs_1 = {
	sizeof(struct UplinkPhysicalChannelControl_r3_IEs),
	offsetof(struct UplinkPhysicalChannelControl_r3_IEs, _asn_ctx),
	asn_MAP_UplinkPhysicalChannelControl_r3_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UplinkPhysicalChannelControl_r3_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPhysicalChannelControl_r3_IEs = {
	"UplinkPhysicalChannelControl-r3-IEs",
	"UplinkPhysicalChannelControl-r3-IEs",
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
	asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1,
	sizeof(asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1)
		/sizeof(asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1)
		/sizeof(asn_DEF_UplinkPhysicalChannelControl_r3_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPhysicalChannelControl_r3_IEs_1,
	7,	/* Elements count */
	&asn_SPC_UplinkPhysicalChannelControl_r3_IEs_specs_1	/* Additional specs */
};

