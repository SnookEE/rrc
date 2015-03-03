/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "RRCConnectionSetup-r7-IEs.h"

static asn_per_constraints_t asn_PER_type_preConfigMode_constr_19 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_specificationMode_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_complete_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct complete, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList2_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 4, offsetof(struct complete, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct complete, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 2, offsetof(struct complete, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct complete, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
};
static const int asn_MAP_complete_oms_12[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_complete_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_complete_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-InformationSetupList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-AddReconfTransChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dl-AddReconfTransChInfoList */
};
static asn_SEQUENCE_specifics_t asn_SPC_complete_specs_12 = {
	sizeof(struct complete),
	offsetof(struct complete, _asn_ctx),
	asn_MAP_complete_tag2el_12,
	5,	/* Count of tags in the map */
	asn_MAP_complete_oms_12,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_complete_12 = {
	"complete",
	"complete",
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
	asn_DEF_complete_tags_12,
	sizeof(asn_DEF_complete_tags_12)
		/sizeof(asn_DEF_complete_tags_12[0]) - 1, /* 1 */
	asn_DEF_complete_tags_12,	/* Same as above */
	sizeof(asn_DEF_complete_tags_12)
		/sizeof(asn_DEF_complete_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_complete_12,
	5,	/* Elements count */
	&asn_SPC_complete_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_defaultConfig_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct defaultConfig, defaultConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct defaultConfig, defaultConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigIdentity_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_defaultConfig_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_defaultConfig_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultConfigMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfigIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_defaultConfig_specs_21 = {
	sizeof(struct defaultConfig),
	offsetof(struct defaultConfig, _asn_ctx),
	asn_MAP_defaultConfig_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_defaultConfig_21 = {
	"defaultConfig",
	"defaultConfig",
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
	asn_DEF_defaultConfig_tags_21,
	sizeof(asn_DEF_defaultConfig_tags_21)
		/sizeof(asn_DEF_defaultConfig_tags_21[0]) - 1, /* 1 */
	asn_DEF_defaultConfig_tags_21,	/* Same as above */
	sizeof(asn_DEF_defaultConfig_tags_21)
		/sizeof(asn_DEF_defaultConfig_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_defaultConfig_21,
	2,	/* Elements count */
	&asn_SPC_defaultConfig_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preConfigMode_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct preConfigMode, choice.predefinedConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"predefinedConfigIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct preConfigMode, choice.defaultConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_defaultConfig_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfig"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_preConfigMode_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* predefinedConfigIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfig */
};
static asn_CHOICE_specifics_t asn_SPC_preConfigMode_specs_19 = {
	sizeof(struct preConfigMode),
	offsetof(struct preConfigMode, _asn_ctx),
	offsetof(struct preConfigMode, present),
	sizeof(((struct preConfigMode *)0)->present),
	asn_MAP_preConfigMode_tag2el_19,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preConfigMode_19 = {
	"preConfigMode",
	"preConfigMode",
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
	&asn_PER_type_preConfigMode_constr_19,
	asn_MBR_preConfigMode_19,
	2,	/* Elements count */
	&asn_SPC_preConfigMode_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preconfiguration_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct preconfiguration, preConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_preConfigMode_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preConfigMode"
		},
};
static const ber_tlv_tag_t asn_DEF_preconfiguration_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_preconfiguration_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* preConfigMode */
};
static asn_SEQUENCE_specifics_t asn_SPC_preconfiguration_specs_18 = {
	sizeof(struct preconfiguration),
	offsetof(struct preconfiguration, _asn_ctx),
	asn_MAP_preconfiguration_tag2el_18,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preconfiguration_18 = {
	"preconfiguration",
	"preconfiguration",
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
	asn_DEF_preconfiguration_tags_18,
	sizeof(asn_DEF_preconfiguration_tags_18)
		/sizeof(asn_DEF_preconfiguration_tags_18[0]) - 1, /* 1 */
	asn_DEF_preconfiguration_tags_18,	/* Same as above */
	sizeof(asn_DEF_preconfiguration_tags_18)
		/sizeof(asn_DEF_preconfiguration_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_preconfiguration_18,
	1,	/* Elements count */
	&asn_SPC_preconfiguration_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_specificationMode_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct specificationMode, choice.complete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_complete_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"complete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct specificationMode, choice.preconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_preconfiguration_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preconfiguration"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_specificationMode_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* complete */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preconfiguration */
};
static asn_CHOICE_specifics_t asn_SPC_specificationMode_specs_11 = {
	sizeof(struct specificationMode),
	offsetof(struct specificationMode, _asn_ctx),
	offsetof(struct specificationMode, present),
	sizeof(((struct specificationMode *)0)->present),
	asn_MAP_specificationMode_tag2el_11,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specificationMode_11 = {
	"specificationMode",
	"specificationMode",
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
	&asn_PER_type_specificationMode_constr_11,
	asn_MBR_specificationMode_11,
	2,	/* Elements count */
	&asn_SPC_specificationMode_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionSetup_r7_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r7_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r7_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetup_r7_IEs, new_c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-c-RNTI"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetup_r7_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetup_r7_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r7_IEs, newSecondary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newSecondary-E-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r7_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r7_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r7_IEs, capabilityUpdateRequirement),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CapabilityUpdateRequirement_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"capabilityUpdateRequirement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r7_IEs, specificationMode),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_specificationMode_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specificationMode"
		},
	{ ATF_POINTER, 7, offsetof(struct RRCConnectionSetup_r7_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionSetup_r7_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionSetup_r7_IEs, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetup_r7_IEs, ul_EDCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_EDCH_Information_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-EDCH-Information"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetup_r7_IEs, dl_HSPDSCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetup_r7_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r7_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
};
static const int asn_MAP_RRCConnectionSetup_r7_IEs_oms_1[] = { 0, 2, 3, 4, 5, 8, 10, 11, 12, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionSetup_r7_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetup_r7_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activationTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* new-U-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* new-c-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* new-H-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* newPrimary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* newSecondary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rrc-StateIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* utran-DRX-CycleLengthCoeff */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* capabilityUpdateRequirement */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* specificationMode */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* frequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* maxAllowedUL-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ul-DPCH-Info */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ul-EDCH-Information */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* dl-HSPDSCH-Information */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* dl-CommonInformation */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* dl-InformationPerRL-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_r7_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetup_r7_IEs),
	offsetof(struct RRCConnectionSetup_r7_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetup_r7_IEs_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetup_r7_IEs_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r7_IEs = {
	"RRCConnectionSetup-r7-IEs",
	"RRCConnectionSetup-r7-IEs",
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
	asn_DEF_RRCConnectionSetup_r7_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetup_r7_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_r7_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetup_r7_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetup_r7_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_r7_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetup_r7_IEs_1,
	17,	/* Elements count */
	&asn_SPC_RRCConnectionSetup_r7_IEs_specs_1	/* Additional specs */
};

