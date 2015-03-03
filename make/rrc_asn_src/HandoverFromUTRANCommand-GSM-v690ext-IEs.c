/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "HandoverFromUTRANCommand-GSM-v690ext-IEs.h"

static asn_per_constraints_t asn_PER_type_geran_SystemInfoType_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_geran_SystemInfoType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct geran_SystemInfoType, choice.sI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GERAN_SystemInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct geran_SystemInfoType, choice.pSI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GERAN_SystemInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pSI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_geran_SystemInfoType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pSI */
};
static asn_CHOICE_specifics_t asn_SPC_geran_SystemInfoType_specs_2 = {
	sizeof(struct geran_SystemInfoType),
	offsetof(struct geran_SystemInfoType, _asn_ctx),
	offsetof(struct geran_SystemInfoType, present),
	sizeof(((struct geran_SystemInfoType *)0)->present),
	asn_MAP_geran_SystemInfoType_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_geran_SystemInfoType_2 = {
	"geran-SystemInfoType",
	"geran-SystemInfoType",
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
	&asn_PER_type_geran_SystemInfoType_constr_2,
	asn_MBR_geran_SystemInfoType_2,
	2,	/* Elements count */
	&asn_SPC_geran_SystemInfoType_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HandoverFromUTRANCommand_GSM_v690ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct HandoverFromUTRANCommand_GSM_v690ext_IEs, geran_SystemInfoType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_geran_SystemInfoType_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geran-SystemInfoType"
		},
};
static const int asn_MAP_HandoverFromUTRANCommand_GSM_v690ext_IEs_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverFromUTRANCommand_GSM_v690ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* geran-SystemInfoType */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverFromUTRANCommand_GSM_v690ext_IEs_specs_1 = {
	sizeof(struct HandoverFromUTRANCommand_GSM_v690ext_IEs),
	offsetof(struct HandoverFromUTRANCommand_GSM_v690ext_IEs, _asn_ctx),
	asn_MAP_HandoverFromUTRANCommand_GSM_v690ext_IEs_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_HandoverFromUTRANCommand_GSM_v690ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs = {
	"HandoverFromUTRANCommand-GSM-v690ext-IEs",
	"HandoverFromUTRANCommand-GSM-v690ext-IEs",
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
	asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1,
	sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1)
		/sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1)
		/sizeof(asn_DEF_HandoverFromUTRANCommand_GSM_v690ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HandoverFromUTRANCommand_GSM_v690ext_IEs_1,
	1,	/* Elements count */
	&asn_SPC_HandoverFromUTRANCommand_GSM_v690ext_IEs_specs_1	/* Additional specs */
};

