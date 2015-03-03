/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#include "StoredTGP-Sequence.h"

static asn_per_constraints_t asn_PER_type_current_tgps_Status_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_active_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct active, tgcfn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGCFN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgcfn"
		},
};
static const ber_tlv_tag_t asn_DEF_active_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_active_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tgcfn */
};
static asn_SEQUENCE_specifics_t asn_SPC_active_specs_4 = {
	sizeof(struct active),
	offsetof(struct active, _asn_ctx),
	asn_MAP_active_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_active_4 = {
	"active",
	"active",
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
	asn_DEF_active_tags_4,
	sizeof(asn_DEF_active_tags_4)
		/sizeof(asn_DEF_active_tags_4[0]) - 1, /* 1 */
	asn_DEF_active_tags_4,	/* Same as above */
	sizeof(asn_DEF_active_tags_4)
		/sizeof(asn_DEF_active_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_active_4,
	1,	/* Elements count */
	&asn_SPC_active_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_current_tgps_Status_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct current_tgps_Status, choice.active),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_active_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"active"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct current_tgps_Status, choice.inactive),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inactive"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_current_tgps_Status_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* active */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* inactive */
};
static asn_CHOICE_specifics_t asn_SPC_current_tgps_Status_specs_3 = {
	sizeof(struct current_tgps_Status),
	offsetof(struct current_tgps_Status, _asn_ctx),
	offsetof(struct current_tgps_Status, present),
	sizeof(((struct current_tgps_Status *)0)->present),
	asn_MAP_current_tgps_Status_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_current_tgps_Status_3 = {
	"current-tgps-Status",
	"current-tgps-Status",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_current_tgps_Status_constr_3,
	asn_MBR_current_tgps_Status_3,
	2,	/* Elements count */
	&asn_SPC_current_tgps_Status_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_StoredTGP_Sequence_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StoredTGP_Sequence, tgpsi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGPSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgpsi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StoredTGP_Sequence, current_tgps_Status),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_current_tgps_Status_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"current-tgps-Status"
		},
	{ ATF_POINTER, 1, offsetof(struct StoredTGP_Sequence, tgps_ConfigurationParams),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGPS_ConfigurationParams,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgps-ConfigurationParams"
		},
};
static const int asn_MAP_StoredTGP_Sequence_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_StoredTGP_Sequence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StoredTGP_Sequence_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tgpsi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* current-tgps-Status */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tgps-ConfigurationParams */
};
static asn_SEQUENCE_specifics_t asn_SPC_StoredTGP_Sequence_specs_1 = {
	sizeof(struct StoredTGP_Sequence),
	offsetof(struct StoredTGP_Sequence, _asn_ctx),
	asn_MAP_StoredTGP_Sequence_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_StoredTGP_Sequence_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StoredTGP_Sequence = {
	"StoredTGP-Sequence",
	"StoredTGP-Sequence",
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
	asn_DEF_StoredTGP_Sequence_tags_1,
	sizeof(asn_DEF_StoredTGP_Sequence_tags_1)
		/sizeof(asn_DEF_StoredTGP_Sequence_tags_1[0]), /* 1 */
	asn_DEF_StoredTGP_Sequence_tags_1,	/* Same as above */
	sizeof(asn_DEF_StoredTGP_Sequence_tags_1)
		/sizeof(asn_DEF_StoredTGP_Sequence_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_StoredTGP_Sequence_1,
	3,	/* Elements count */
	&asn_SPC_StoredTGP_Sequence_specs_1	/* Additional specs */
};

