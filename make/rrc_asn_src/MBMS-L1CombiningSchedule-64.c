/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "MBMS-L1CombiningSchedule-64.h"

static int
memb_periodStart_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_periodDuration_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cycleOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_mtch_L1CombiningPeriodList_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_periodStart_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_periodDuration_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mtch_L1CombiningPeriodList_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cycleOffset_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mtch_L1CombiningPeriodList_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member, periodStart),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_periodStart_constraint_4,
		&asn_PER_memb_periodStart_constr_5,
		0,
		"periodStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Member, periodDuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_periodDuration_constraint_4,
		&asn_PER_memb_periodDuration_constr_6,
		0,
		"periodDuration"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodStart */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodDuration */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_4 = {
	sizeof(struct Member),
	offsetof(struct Member, _asn_ctx),
	asn_MAP_Member_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_4 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_4,
	sizeof(asn_DEF_Member_tags_4)
		/sizeof(asn_DEF_Member_tags_4[0]), /* 1 */
	asn_DEF_Member_tags_4,	/* Same as above */
	sizeof(asn_DEF_Member_tags_4)
		/sizeof(asn_DEF_Member_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_4,
	2,	/* Elements count */
	&asn_SPC_Member_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mtch_L1CombiningPeriodList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_mtch_L1CombiningPeriodList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_mtch_L1CombiningPeriodList_specs_3 = {
	sizeof(struct mtch_L1CombiningPeriodList),
	offsetof(struct mtch_L1CombiningPeriodList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mtch_L1CombiningPeriodList_3 = {
	"mtch-L1CombiningPeriodList",
	"mtch-L1CombiningPeriodList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mtch_L1CombiningPeriodList_tags_3,
	sizeof(asn_DEF_mtch_L1CombiningPeriodList_tags_3)
		/sizeof(asn_DEF_mtch_L1CombiningPeriodList_tags_3[0]) - 1, /* 1 */
	asn_DEF_mtch_L1CombiningPeriodList_tags_3,	/* Same as above */
	sizeof(asn_DEF_mtch_L1CombiningPeriodList_tags_3)
		/sizeof(asn_DEF_mtch_L1CombiningPeriodList_tags_3[0]), /* 2 */
	&asn_PER_type_mtch_L1CombiningPeriodList_constr_3,
	asn_MBR_mtch_L1CombiningPeriodList_3,
	1,	/* Single element */
	&asn_SPC_mtch_L1CombiningPeriodList_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_L1CombiningSchedule_64_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MBMS_L1CombiningSchedule_64, cycleOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cycleOffset_constraint_1,
		&asn_PER_memb_cycleOffset_constr_2,
		0,
		"cycleOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule_64, mtch_L1CombiningPeriodList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_mtch_L1CombiningPeriodList_3,
		memb_mtch_L1CombiningPeriodList_constraint_1,
		&asn_PER_memb_mtch_L1CombiningPeriodList_constr_3,
		0,
		"mtch-L1CombiningPeriodList"
		},
};
static const int asn_MAP_MBMS_L1CombiningSchedule_64_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MBMS_L1CombiningSchedule_64_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_L1CombiningSchedule_64_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cycleOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mtch-L1CombiningPeriodList */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_L1CombiningSchedule_64_specs_1 = {
	sizeof(struct MBMS_L1CombiningSchedule_64),
	offsetof(struct MBMS_L1CombiningSchedule_64, _asn_ctx),
	asn_MAP_MBMS_L1CombiningSchedule_64_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MBMS_L1CombiningSchedule_64_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_L1CombiningSchedule_64 = {
	"MBMS-L1CombiningSchedule-64",
	"MBMS-L1CombiningSchedule-64",
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
	asn_DEF_MBMS_L1CombiningSchedule_64_tags_1,
	sizeof(asn_DEF_MBMS_L1CombiningSchedule_64_tags_1)
		/sizeof(asn_DEF_MBMS_L1CombiningSchedule_64_tags_1[0]), /* 1 */
	asn_DEF_MBMS_L1CombiningSchedule_64_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_L1CombiningSchedule_64_tags_1)
		/sizeof(asn_DEF_MBMS_L1CombiningSchedule_64_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_L1CombiningSchedule_64_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_L1CombiningSchedule_64_specs_1	/* Additional specs */
};

