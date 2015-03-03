/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "SecurityModeCommand-r3-IEs.h"

static asn_TYPE_member_t asn_MBR_SecurityModeCommand_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityModeCommand_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityModeCommand_r3_IEs, securityCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"securityCapability"
		},
	{ ATF_POINTER, 2, offsetof(struct SecurityModeCommand_r3_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SecurityModeCommand_r3_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityModeCommand_r3_IEs, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_POINTER, 1, offsetof(struct SecurityModeCommand_r3_IEs, ue_SystemSpecificSecurityCap),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRAT_UE_SecurityCapList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-SystemSpecificSecurityCap"
		},
};
static const int asn_MAP_SecurityModeCommand_r3_IEs_oms_1[] = { 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_SecurityModeCommand_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityModeCommand_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* securityCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cipheringModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* integrityProtectionModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cn-DomainIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ue-SystemSpecificSecurityCap */
};
static asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_r3_IEs_specs_1 = {
	sizeof(struct SecurityModeCommand_r3_IEs),
	offsetof(struct SecurityModeCommand_r3_IEs, _asn_ctx),
	asn_MAP_SecurityModeCommand_r3_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SecurityModeCommand_r3_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand_r3_IEs = {
	"SecurityModeCommand-r3-IEs",
	"SecurityModeCommand-r3-IEs",
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
	asn_DEF_SecurityModeCommand_r3_IEs_tags_1,
	sizeof(asn_DEF_SecurityModeCommand_r3_IEs_tags_1)
		/sizeof(asn_DEF_SecurityModeCommand_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_SecurityModeCommand_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityModeCommand_r3_IEs_tags_1)
		/sizeof(asn_DEF_SecurityModeCommand_r3_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SecurityModeCommand_r3_IEs_1,
	6,	/* Elements count */
	&asn_SPC_SecurityModeCommand_r3_IEs_specs_1	/* Additional specs */
};
