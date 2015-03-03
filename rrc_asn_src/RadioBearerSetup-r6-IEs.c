/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "RadioBearerSetup-r6-IEs.h"

static asn_per_constraints_t asn_PER_type_specificationMode_constr_15 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_complete_16[] = {
	{ ATF_POINTER, 13, offsetof(struct complete, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 12, offsetof(struct complete, rab_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationSetupList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationSetupList"
		},
	{ ATF_POINTER, 11, offsetof(struct complete, rab_InformationReconfigList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationReconfigList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationReconfigList"
		},
	{ ATF_POINTER, 10, offsetof(struct complete, rb_InformationReconfigList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationReconfigList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationReconfigList"
		},
	{ ATF_POINTER, 9, offsetof(struct complete, rb_InformationAffectedList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationAffectedList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationAffectedList"
		},
	{ ATF_POINTER, 8, offsetof(struct complete, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct complete, pdcp_ROHC_TargetMode),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_ROHC_TargetMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-ROHC-TargetMode"
		},
	{ ATF_POINTER, 6, offsetof(struct complete, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct complete, ul_deletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DeletedTransChInfoList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-deletedTransChInfoList"
		},
	{ ATF_POINTER, 4, offsetof(struct complete, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 3, offsetof(struct complete, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct complete, dl_DeletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DeletedTransChInfoList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DeletedTransChInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct complete, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
};
static const int asn_MAP_complete_oms_16[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_complete_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_complete_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-InformationSetupList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rab-InformationSetupList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rab-InformationReconfigList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rb-InformationReconfigList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rb-InformationAffectedList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-CounterSynchronisationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdcp-ROHC-TargetMode */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ul-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ul-deletedTransChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ul-AddReconfTransChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dl-CommonTransChInfo */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* dl-DeletedTransChInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* dl-AddReconfTransChInfoList */
};
static asn_SEQUENCE_specifics_t asn_SPC_complete_specs_16 = {
	sizeof(struct complete),
	offsetof(struct complete, _asn_ctx),
	asn_MAP_complete_tag2el_16,
	13,	/* Count of tags in the map */
	asn_MAP_complete_oms_16,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_complete_16 = {
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
	asn_DEF_complete_tags_16,
	sizeof(asn_DEF_complete_tags_16)
		/sizeof(asn_DEF_complete_tags_16[0]) - 1, /* 1 */
	asn_DEF_complete_tags_16,	/* Same as above */
	sizeof(asn_DEF_complete_tags_16)
		/sizeof(asn_DEF_complete_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_complete_16,
	13,	/* Elements count */
	&asn_SPC_complete_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preconfiguration_30[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct preconfiguration, rab_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_Info_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct preconfiguration, defaultConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct preconfiguration, defaultConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigIdentity_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigIdentity"
		},
	{ ATF_POINTER, 1, offsetof(struct preconfiguration, rb_InformationChangedList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationChangedList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationChangedList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct preconfiguration, powerOffsetInfoShort),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PowerOffsetInfoShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerOffsetInfoShort"
		},
};
static const int asn_MAP_preconfiguration_oms_30[] = { 3 };
static const ber_tlv_tag_t asn_DEF_preconfiguration_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_preconfiguration_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rab-Info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* defaultConfigMode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* defaultConfigIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rb-InformationChangedList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* powerOffsetInfoShort */
};
static asn_SEQUENCE_specifics_t asn_SPC_preconfiguration_specs_30 = {
	sizeof(struct preconfiguration),
	offsetof(struct preconfiguration, _asn_ctx),
	asn_MAP_preconfiguration_tag2el_30,
	5,	/* Count of tags in the map */
	asn_MAP_preconfiguration_oms_30,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preconfiguration_30 = {
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
	asn_DEF_preconfiguration_tags_30,
	sizeof(asn_DEF_preconfiguration_tags_30)
		/sizeof(asn_DEF_preconfiguration_tags_30[0]) - 1, /* 1 */
	asn_DEF_preconfiguration_tags_30,	/* Same as above */
	sizeof(asn_DEF_preconfiguration_tags_30)
		/sizeof(asn_DEF_preconfiguration_tags_30[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_preconfiguration_30,
	5,	/* Elements count */
	&asn_SPC_preconfiguration_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_specificationMode_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct specificationMode, choice.complete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_complete_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"complete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct specificationMode, choice.preconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_preconfiguration_30,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preconfiguration"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_specificationMode_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* complete */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preconfiguration */
};
static asn_CHOICE_specifics_t asn_SPC_specificationMode_specs_15 = {
	sizeof(struct specificationMode),
	offsetof(struct specificationMode, _asn_ctx),
	offsetof(struct specificationMode, present),
	sizeof(((struct specificationMode *)0)->present),
	asn_MAP_specificationMode_tag2el_15,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specificationMode_15 = {
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
	&asn_PER_type_specificationMode_constr_15,
	asn_MBR_specificationMode_15,
	2,	/* Elements count */
	&asn_SPC_specificationMode_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioBearerSetup_r6_IEs_1[] = {
	{ ATF_POINTER, 9, offsetof(struct RadioBearerSetup_r6_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioBearerSetup_r6_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerSetup_r6_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerSetup_r6_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerSetup_r6_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerSetup_r6_IEs, new_DSCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSCH_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-DSCH-RNTI"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetup_r6_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetup_r6_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetup_r6_IEs, newSecondary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newSecondary-E-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerSetup_r6_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetup_r6_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetup_r6_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetup_r6_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerSetup_r6_IEs, specificationMode),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_specificationMode_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specificationMode"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioBearerSetup_r6_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerSetup_r6_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerSetup_r6_IEs, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerSetup_r6_IEs, ul_EDCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_EDCH_Information_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-EDCH-Information"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerSetup_r6_IEs, dl_HSPDSCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-Information"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerSetup_r6_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerSetup_r6_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerSetup_r6_IEs, mbms_PL_ServiceRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PL_ServiceRestrictInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-PL-ServiceRestrictInfo"
		},
};
static const int asn_MAP_RadioBearerSetup_r6_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21 };
static const ber_tlv_tag_t asn_DEF_RadioBearerSetup_r6_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioBearerSetup_r6_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* new-U-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-C-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* new-DSCH-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* new-H-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* newPrimary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* newSecondary-E-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rrc-StateIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* utran-DRX-CycleLengthCoeff */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ura-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* cn-InformationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* specificationMode */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* frequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* maxAllowedUL-TX-Power */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ul-DPCH-Info */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* ul-EDCH-Information */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* dl-HSPDSCH-Information */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* dl-CommonInformation */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* dl-InformationPerRL-List */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 } /* mbms-PL-ServiceRestrictInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioBearerSetup_r6_IEs_specs_1 = {
	sizeof(struct RadioBearerSetup_r6_IEs),
	offsetof(struct RadioBearerSetup_r6_IEs, _asn_ctx),
	asn_MAP_RadioBearerSetup_r6_IEs_tag2el_1,
	22,	/* Count of tags in the map */
	asn_MAP_RadioBearerSetup_r6_IEs_oms_1,	/* Optional members */
	20, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_r6_IEs = {
	"RadioBearerSetup-r6-IEs",
	"RadioBearerSetup-r6-IEs",
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
	asn_DEF_RadioBearerSetup_r6_IEs_tags_1,
	sizeof(asn_DEF_RadioBearerSetup_r6_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerSetup_r6_IEs_tags_1[0]), /* 1 */
	asn_DEF_RadioBearerSetup_r6_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioBearerSetup_r6_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerSetup_r6_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioBearerSetup_r6_IEs_1,
	22,	/* Elements count */
	&asn_SPC_RadioBearerSetup_r6_IEs_specs_1	/* Additional specs */
};

