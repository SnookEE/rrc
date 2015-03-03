/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PUSCH-CapacityAllocationInfo.h"

static asn_per_constraints_t asn_PER_type_configuration_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pusch_Allocation_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_9_set_1(int set_value, void **sptr) {
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
static asn_TYPE_member_t asn_MBR_old_Configuration_8[] = {
	{ ATF_POINTER, 1, offsetof(struct old_Configuration, tfcs_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_IdentityPlain,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_9_set_1,	/* DEFAULT 1 */
		"tfcs-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct old_Configuration, pusch_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-Identity"
		},
};
static const int asn_MAP_old_Configuration_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_old_Configuration_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_old_Configuration_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tfcs-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pusch-Identity */
};
static asn_SEQUENCE_specifics_t asn_SPC_old_Configuration_specs_8 = {
	sizeof(struct old_Configuration),
	offsetof(struct old_Configuration, _asn_ctx),
	asn_MAP_old_Configuration_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_old_Configuration_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_old_Configuration_8 = {
	"old-Configuration",
	"old-Configuration",
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
	asn_DEF_old_Configuration_tags_8,
	sizeof(asn_DEF_old_Configuration_tags_8)
		/sizeof(asn_DEF_old_Configuration_tags_8[0]) - 1, /* 1 */
	asn_DEF_old_Configuration_tags_8,	/* Same as above */
	sizeof(asn_DEF_old_Configuration_tags_8)
		/sizeof(asn_DEF_old_Configuration_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_old_Configuration_8,
	2,	/* Elements count */
	&asn_SPC_old_Configuration_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_new_Configuration_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct new_Configuration, pusch_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct new_Configuration, pusch_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-Identity"
		},
};
static const int asn_MAP_new_Configuration_oms_11[] = { 1 };
static const ber_tlv_tag_t asn_DEF_new_Configuration_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_new_Configuration_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-Info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pusch-Identity */
};
static asn_SEQUENCE_specifics_t asn_SPC_new_Configuration_specs_11 = {
	sizeof(struct new_Configuration),
	offsetof(struct new_Configuration, _asn_ctx),
	asn_MAP_new_Configuration_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_new_Configuration_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_new_Configuration_11 = {
	"new-Configuration",
	"new-Configuration",
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
	asn_DEF_new_Configuration_tags_11,
	sizeof(asn_DEF_new_Configuration_tags_11)
		/sizeof(asn_DEF_new_Configuration_tags_11[0]) - 1, /* 1 */
	asn_DEF_new_Configuration_tags_11,	/* Same as above */
	sizeof(asn_DEF_new_Configuration_tags_11)
		/sizeof(asn_DEF_new_Configuration_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_new_Configuration_11,
	2,	/* Elements count */
	&asn_SPC_new_Configuration_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_configuration_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct configuration, choice.old_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_old_Configuration_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"old-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct configuration, choice.new_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_new_Configuration_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-Configuration"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_configuration_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* old-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* new-Configuration */
};
static asn_CHOICE_specifics_t asn_SPC_configuration_specs_7 = {
	sizeof(struct configuration),
	offsetof(struct configuration, _asn_ctx),
	offsetof(struct configuration, present),
	sizeof(((struct configuration *)0)->present),
	asn_MAP_configuration_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_configuration_7 = {
	"configuration",
	"configuration",
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
	&asn_PER_type_configuration_constr_7,
	asn_MBR_configuration_7,
	2,	/* Elements count */
	&asn_SPC_configuration_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pusch_AllocationAssignment_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct pusch_AllocationAssignment, pusch_AllocationPeriodInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllocationPeriodInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-AllocationPeriodInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct pusch_AllocationAssignment, pusch_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TargetSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-PowerControlInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct pusch_AllocationAssignment, configuration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_configuration_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"configuration"
		},
};
static const int asn_MAP_pusch_AllocationAssignment_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_pusch_AllocationAssignment_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pusch_AllocationAssignment_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-AllocationPeriodInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-PowerControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* configuration */
};
static asn_SEQUENCE_specifics_t asn_SPC_pusch_AllocationAssignment_specs_4 = {
	sizeof(struct pusch_AllocationAssignment),
	offsetof(struct pusch_AllocationAssignment, _asn_ctx),
	asn_MAP_pusch_AllocationAssignment_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_pusch_AllocationAssignment_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pusch_AllocationAssignment_4 = {
	"pusch-AllocationAssignment",
	"pusch-AllocationAssignment",
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
	asn_DEF_pusch_AllocationAssignment_tags_4,
	sizeof(asn_DEF_pusch_AllocationAssignment_tags_4)
		/sizeof(asn_DEF_pusch_AllocationAssignment_tags_4[0]) - 1, /* 1 */
	asn_DEF_pusch_AllocationAssignment_tags_4,	/* Same as above */
	sizeof(asn_DEF_pusch_AllocationAssignment_tags_4)
		/sizeof(asn_DEF_pusch_AllocationAssignment_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_pusch_AllocationAssignment_4,
	3,	/* Elements count */
	&asn_SPC_pusch_AllocationAssignment_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pusch_Allocation_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct pusch_Allocation, choice.pusch_AllocationPending),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-AllocationPending"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct pusch_Allocation, choice.pusch_AllocationAssignment),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_pusch_AllocationAssignment_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-AllocationAssignment"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pusch_Allocation_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-AllocationPending */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pusch-AllocationAssignment */
};
static asn_CHOICE_specifics_t asn_SPC_pusch_Allocation_specs_2 = {
	sizeof(struct pusch_Allocation),
	offsetof(struct pusch_Allocation, _asn_ctx),
	offsetof(struct pusch_Allocation, present),
	sizeof(((struct pusch_Allocation *)0)->present),
	asn_MAP_pusch_Allocation_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pusch_Allocation_2 = {
	"pusch-Allocation",
	"pusch-Allocation",
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
	&asn_PER_type_pusch_Allocation_constr_2,
	asn_MBR_pusch_Allocation_2,
	2,	/* Elements count */
	&asn_SPC_pusch_Allocation_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PUSCH_CapacityAllocationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_CapacityAllocationInfo, pusch_Allocation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pusch_Allocation_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-Allocation"
		},
};
static const ber_tlv_tag_t asn_DEF_PUSCH_CapacityAllocationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_CapacityAllocationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pusch-Allocation */
};
static asn_SEQUENCE_specifics_t asn_SPC_PUSCH_CapacityAllocationInfo_specs_1 = {
	sizeof(struct PUSCH_CapacityAllocationInfo),
	offsetof(struct PUSCH_CapacityAllocationInfo, _asn_ctx),
	asn_MAP_PUSCH_CapacityAllocationInfo_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_CapacityAllocationInfo = {
	"PUSCH-CapacityAllocationInfo",
	"PUSCH-CapacityAllocationInfo",
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
	asn_DEF_PUSCH_CapacityAllocationInfo_tags_1,
	sizeof(asn_DEF_PUSCH_CapacityAllocationInfo_tags_1)
		/sizeof(asn_DEF_PUSCH_CapacityAllocationInfo_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_CapacityAllocationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_CapacityAllocationInfo_tags_1)
		/sizeof(asn_DEF_PUSCH_CapacityAllocationInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PUSCH_CapacityAllocationInfo_1,
	1,	/* Elements count */
	&asn_SPC_PUSCH_CapacityAllocationInfo_specs_1	/* Additional specs */
};

