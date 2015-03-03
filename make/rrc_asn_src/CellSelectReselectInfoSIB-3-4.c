/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "CellSelectReselectInfoSIB-3-4.h"

static asn_per_constraints_t asn_PER_type_cellSelectQualityMeasure_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cpich_Ec_N0_4[] = {
	{ ATF_POINTER, 1, offsetof(struct cpich_Ec_N0, q_HYST_2_S),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_Hyst_S,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-HYST-2-S"
		},
};
static const int asn_MAP_cpich_Ec_N0_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_cpich_Ec_N0_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpich_Ec_N0_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-HYST-2-S */
};
static asn_SEQUENCE_specifics_t asn_SPC_cpich_Ec_N0_specs_4 = {
	sizeof(struct cpich_Ec_N0),
	offsetof(struct cpich_Ec_N0, _asn_ctx),
	asn_MAP_cpich_Ec_N0_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_cpich_Ec_N0_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpich_Ec_N0_4 = {
	"cpich-Ec-N0",
	"cpich-Ec-N0",
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
	asn_DEF_cpich_Ec_N0_tags_4,
	sizeof(asn_DEF_cpich_Ec_N0_tags_4)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_4[0]) - 1, /* 1 */
	asn_DEF_cpich_Ec_N0_tags_4,	/* Same as above */
	sizeof(asn_DEF_cpich_Ec_N0_tags_4)
		/sizeof(asn_DEF_cpich_Ec_N0_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cpich_Ec_N0_4,
	1,	/* Elements count */
	&asn_SPC_cpich_Ec_N0_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectQualityMeasure_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cellSelectQualityMeasure, choice.cpich_Ec_N0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cpich_Ec_N0_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cpich-Ec-N0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cellSelectQualityMeasure, choice.cpich_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cpich-RSCP"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectQualityMeasure_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cpich-Ec-N0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cpich-RSCP */
};
static asn_CHOICE_specifics_t asn_SPC_cellSelectQualityMeasure_specs_3 = {
	sizeof(struct cellSelectQualityMeasure),
	offsetof(struct cellSelectQualityMeasure, _asn_ctx),
	offsetof(struct cellSelectQualityMeasure, present),
	sizeof(((struct cellSelectQualityMeasure *)0)->present),
	asn_MAP_cellSelectQualityMeasure_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectQualityMeasure_3 = {
	"cellSelectQualityMeasure",
	"cellSelectQualityMeasure",
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
	&asn_PER_type_cellSelectQualityMeasure_constr_3,
	asn_MBR_cellSelectQualityMeasure_3,
	2,	/* Elements count */
	&asn_SPC_cellSelectQualityMeasure_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_8[] = {
	{ ATF_POINTER, 4, offsetof(struct fdd, s_Intrasearch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchQual,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Intrasearch"
		},
	{ ATF_POINTER, 3, offsetof(struct fdd, s_Intersearch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchQual,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Intersearch"
		},
	{ ATF_POINTER, 2, offsetof(struct fdd, s_SearchHCS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-SearchHCS"
		},
	{ ATF_POINTER, 1, offsetof(struct fdd, rat_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAT_FDD_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rat-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxlevMin"
		},
};
static const int asn_MAP_fdd_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-Intrasearch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-Intersearch */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* s-SearchHCS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rat-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-QualMin */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* q-RxlevMin */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_8 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_8,
	6,	/* Count of tags in the map */
	asn_MAP_fdd_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_8 = {
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
	asn_DEF_fdd_tags_8,
	sizeof(asn_DEF_fdd_tags_8)
		/sizeof(asn_DEF_fdd_tags_8[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_8,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_8)
		/sizeof(asn_DEF_fdd_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_8,
	6,	/* Elements count */
	&asn_SPC_fdd_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_15[] = {
	{ ATF_POINTER, 4, offsetof(struct tdd, s_Intrasearch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Intrasearch"
		},
	{ ATF_POINTER, 3, offsetof(struct tdd, s_Intersearch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Intersearch"
		},
	{ ATF_POINTER, 2, offsetof(struct tdd, s_SearchHCS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_SearchRXLEV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-SearchHCS"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd, rat_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAT_TDD_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rat-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxlevMin"
		},
};
static const int asn_MAP_tdd_oms_15[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-Intrasearch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-Intersearch */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* s-SearchHCS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rat-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* q-RxlevMin */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_15 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_15,
	5,	/* Count of tags in the map */
	asn_MAP_tdd_oms_15,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_15 = {
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
	asn_DEF_tdd_tags_15,
	sizeof(asn_DEF_tdd_tags_15)
		/sizeof(asn_DEF_tdd_tags_15[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_15,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_15)
		/sizeof(asn_DEF_tdd_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_15,
	5,	/* Elements count */
	&asn_SPC_tdd_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_7 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_7 = {
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
	&asn_PER_type_modeSpecificInfo_constr_7,
	asn_MBR_modeSpecificInfo_7,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellSelectReselectInfoSIB_3_4_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_3_4, mappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MappingInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mappingInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_3_4, cellSelectQualityMeasure),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellSelectQualityMeasure_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellSelectQualityMeasure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_3_4, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_3_4, q_Hyst_l_S),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_Hyst_S,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-Hyst-l-S"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_3_4, t_Reselection_S),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection_S,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-Reselection-S"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_3_4, hcs_ServingCellInformation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HCS_ServingCellInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hcs-ServingCellInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_3_4, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
};
static const int asn_MAP_CellSelectReselectInfoSIB_3_4_oms_1[] = { 0, 5 };
static const ber_tlv_tag_t asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectReselectInfoSIB_3_4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mappingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellSelectQualityMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* q-Hyst-l-S */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t-Reselection-S */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* hcs-ServingCellInformation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* maxAllowedUL-TX-Power */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellSelectReselectInfoSIB_3_4_specs_1 = {
	sizeof(struct CellSelectReselectInfoSIB_3_4),
	offsetof(struct CellSelectReselectInfoSIB_3_4, _asn_ctx),
	asn_MAP_CellSelectReselectInfoSIB_3_4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CellSelectReselectInfoSIB_3_4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectReselectInfoSIB_3_4 = {
	"CellSelectReselectInfoSIB-3-4",
	"CellSelectReselectInfoSIB-3-4",
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
	asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1,
	sizeof(asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1[0]), /* 1 */
	asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_3_4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellSelectReselectInfoSIB_3_4_1,
	7,	/* Elements count */
	&asn_SPC_CellSelectReselectInfoSIB_3_4_specs_1	/* Additional specs */
};

