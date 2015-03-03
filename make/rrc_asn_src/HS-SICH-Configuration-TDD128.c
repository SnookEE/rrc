/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "HS-SICH-Configuration-TDD128.h"

static int
tpc_step_size_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
tpc_step_size_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
tpc_step_size_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tpc_step_size_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tpc_step_size_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tpc_step_size_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tpc_step_size_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tpc_step_size_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tpc_step_size_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tpc_step_size_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tpc_step_size_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_midambleConfiguration_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_nack_ack_power_offset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -7 && value <= 8)) {
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
memb_power_level_HSSICH_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -120 && value <= -58)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tpc_step_size_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nack_ack_power_offset_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -7,  8 }	/* (-7..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_power_level_HSSICH_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -120, -58 }	/* (-120..-58) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftLong,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShift"
		},
};
static const ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_6 = {
	sizeof(struct ueSpecificMidamble),
	offsetof(struct ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_6 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
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
	asn_DEF_ueSpecificMidamble_tags_6,
	sizeof(asn_DEF_ueSpecificMidamble_tags_6)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_6[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_6,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_6)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ueSpecificMidamble_6,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueSpecificMidamble"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueSpecificMidamble */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_4 = {
	sizeof(struct midambleAllocationMode),
	offsetof(struct midambleAllocationMode, _asn_ctx),
	offsetof(struct midambleAllocationMode, present),
	sizeof(((struct midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_4 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
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
	&asn_PER_type_midambleAllocationMode_constr_4,
	asn_MBR_midambleAllocationMode_4,
	2,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tpc_step_size_value2enum_11[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s3" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_tpc_step_size_enum2value_11[] = {
	0,	/* s1(0) */
	1,	/* s2(1) */
	2,	/* s3(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_tpc_step_size_specs_11 = {
	asn_MAP_tpc_step_size_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_tpc_step_size_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tpc_step_size_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_step_size_11 = {
	"tpc-step-size",
	"tpc-step-size",
	tpc_step_size_11_free,
	tpc_step_size_11_print,
	tpc_step_size_11_constraint,
	tpc_step_size_11_decode_ber,
	tpc_step_size_11_encode_der,
	tpc_step_size_11_decode_xer,
	tpc_step_size_11_encode_xer,
	tpc_step_size_11_decode_uper,
	tpc_step_size_11_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tpc_step_size_tags_11,
	sizeof(asn_DEF_tpc_step_size_tags_11)
		/sizeof(asn_DEF_tpc_step_size_tags_11[0]) - 1, /* 1 */
	asn_DEF_tpc_step_size_tags_11,	/* Same as above */
	sizeof(asn_DEF_tpc_step_size_tags_11)
		/sizeof(asn_DEF_tpc_step_size_tags_11[0]), /* 2 */
	&asn_PER_type_tpc_step_size_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tpc_step_size_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SICH_Configuration_TDD128_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_ChannelisationCode_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleAllocationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleConfiguration_constraint_1,
		&asn_PER_memb_midambleConfiguration_constr_8,
		0,
		"midambleConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, nack_ack_power_offset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nack_ack_power_offset_constraint_1,
		&asn_PER_memb_nack_ack_power_offset_constr_9,
		0,
		"nack-ack-power-offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, power_level_HSSICH),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_power_level_HSSICH_constraint_1,
		&asn_PER_memb_power_level_HSSICH_constr_10,
		0,
		"power-level-HSSICH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD128, tpc_step_size),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tpc_step_size_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-step-size"
		},
};
static const ber_tlv_tag_t asn_DEF_HS_SICH_Configuration_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HS_SICH_Configuration_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisationCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleAllocationMode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* midambleConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nack-ack-power-offset */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* power-level-HSSICH */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* tpc-step-size */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_SICH_Configuration_TDD128_specs_1 = {
	sizeof(struct HS_SICH_Configuration_TDD128),
	offsetof(struct HS_SICH_Configuration_TDD128, _asn_ctx),
	asn_MAP_HS_SICH_Configuration_TDD128_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_SICH_Configuration_TDD128 = {
	"HS-SICH-Configuration-TDD128",
	"HS-SICH-Configuration-TDD128",
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
	asn_DEF_HS_SICH_Configuration_TDD128_tags_1,
	sizeof(asn_DEF_HS_SICH_Configuration_TDD128_tags_1)
		/sizeof(asn_DEF_HS_SICH_Configuration_TDD128_tags_1[0]), /* 1 */
	asn_DEF_HS_SICH_Configuration_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SICH_Configuration_TDD128_tags_1)
		/sizeof(asn_DEF_HS_SICH_Configuration_TDD128_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_SICH_Configuration_TDD128_1,
	7,	/* Elements count */
	&asn_SPC_HS_SICH_Configuration_TDD128_specs_1	/* Additional specs */
};

