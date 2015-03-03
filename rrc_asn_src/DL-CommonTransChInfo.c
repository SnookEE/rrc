/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DL-CommonTransChInfo.h"

static asn_per_constraints_t asn_PER_type_dl_Parameters_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dl_Parameters_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct dl_Parameters, choice.dl_DCH_TFCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DCH-TFCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct dl_Parameters, choice.sameAsUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sameAsUL"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dl_Parameters_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-DCH-TFCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sameAsUL */
};
static asn_CHOICE_specifics_t asn_SPC_dl_Parameters_specs_5 = {
	sizeof(struct dl_Parameters),
	offsetof(struct dl_Parameters, _asn_ctx),
	offsetof(struct dl_Parameters, present),
	sizeof(((struct dl_Parameters *)0)->present),
	asn_MAP_dl_Parameters_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Parameters_5 = {
	"dl-Parameters",
	"dl-Parameters",
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
	&asn_PER_type_dl_Parameters_constr_5,
	asn_MBR_dl_Parameters_5,
	2,	/* Elements count */
	&asn_SPC_dl_Parameters_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_POINTER, 1, offsetof(struct fdd, dl_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dl_Parameters_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-Parameters"
		},
};
static const int asn_MAP_fdd_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-Parameters */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_fdd_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_4,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_8[] = {
	{ ATF_POINTER, 1, offsetof(struct tdd, individualDL_CCTrCH_InfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualDL_CCTrCH_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"individualDL-CCTrCH-InfoList"
		},
};
static const int asn_MAP_tdd_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* individualDL-CCTrCH-InfoList */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_8 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_tdd_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_8 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_8,
	sizeof(asn_DEF_tdd_tags_8)
		/sizeof(asn_DEF_tdd_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_8)
		/sizeof(asn_DEF_tdd_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_8,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_3,
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_CommonTransChInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_CommonTransChInfo, sccpch_TFCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFCS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sccpch-TFCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CommonTransChInfo, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static const int asn_MAP_DL_CommonTransChInfo_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_DL_CommonTransChInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_CommonTransChInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sccpch-TFCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* modeSpecificInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_CommonTransChInfo_specs_1 = {
	sizeof(struct DL_CommonTransChInfo),
	offsetof(struct DL_CommonTransChInfo, _asn_ctx),
	asn_MAP_DL_CommonTransChInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DL_CommonTransChInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_CommonTransChInfo = {
	"DL-CommonTransChInfo",
	"DL-CommonTransChInfo",
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
	asn_DEF_DL_CommonTransChInfo_tags_1,
	sizeof(asn_DEF_DL_CommonTransChInfo_tags_1)
		/sizeof(asn_DEF_DL_CommonTransChInfo_tags_1[0]), /* 1 */
	asn_DEF_DL_CommonTransChInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_CommonTransChInfo_tags_1)
		/sizeof(asn_DEF_DL_CommonTransChInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_CommonTransChInfo_1,
	2,	/* Elements count */
	&asn_SPC_DL_CommonTransChInfo_specs_1	/* Additional specs */
};

