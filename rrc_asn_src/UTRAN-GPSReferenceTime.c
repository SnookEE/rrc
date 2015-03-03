/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UTRAN-GPSReferenceTime.h"

static int
ls_part_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static void
ls_part_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeInteger.free_struct;
	td->print_struct   = asn_DEF_NativeInteger.print_struct;
	td->check_constraints = asn_DEF_NativeInteger.check_constraints;
	td->ber_decoder    = asn_DEF_NativeInteger.ber_decoder;
	td->der_encoder    = asn_DEF_NativeInteger.der_encoder;
	td->xer_decoder    = asn_DEF_NativeInteger.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeInteger.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeInteger.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeInteger.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeInteger.per_constraints;
	td->elements       = asn_DEF_NativeInteger.elements;
	td->elements_count = asn_DEF_NativeInteger.elements_count;
     /* td->specifics      = asn_DEF_NativeInteger.specifics;	// Defined explicitly */
}

static void
ls_part_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ls_part_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ls_part_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ls_part_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ls_part_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ls_part_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ls_part_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ls_part_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ls_part_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ls_part_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_ms_part_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_ls_part_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_sfn_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ls_part_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ms_part_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ls_part_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sfn_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_ls_part_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_ls_part_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ls_part_4 = {
	"ls-part",
	"ls-part",
	ls_part_4_free,
	ls_part_4_print,
	ls_part_4_constraint,
	ls_part_4_decode_ber,
	ls_part_4_encode_der,
	ls_part_4_decode_xer,
	ls_part_4_encode_xer,
	ls_part_4_decode_uper,
	ls_part_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ls_part_tags_4,
	sizeof(asn_DEF_ls_part_tags_4)
		/sizeof(asn_DEF_ls_part_tags_4[0]) - 1, /* 1 */
	asn_DEF_ls_part_tags_4,	/* Same as above */
	sizeof(asn_DEF_ls_part_tags_4)
		/sizeof(asn_DEF_ls_part_tags_4[0]), /* 2 */
	&asn_PER_type_ls_part_constr_4,
	0, 0,	/* No members */
	&asn_SPC_ls_part_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_utran_GPSTimingOfCell_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct utran_GPSTimingOfCell, ms_part),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ms_part_constraint_2,
		&asn_PER_memb_ms_part_constr_3,
		0,
		"ms-part"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct utran_GPSTimingOfCell, ls_part),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ls_part_4,
		memb_ls_part_constraint_2,
		&asn_PER_memb_ls_part_constr_4,
		0,
		"ls-part"
		},
};
static const ber_tlv_tag_t asn_DEF_utran_GPSTimingOfCell_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_utran_GPSTimingOfCell_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ms-part */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ls-part */
};
static asn_SEQUENCE_specifics_t asn_SPC_utran_GPSTimingOfCell_specs_2 = {
	sizeof(struct utran_GPSTimingOfCell),
	offsetof(struct utran_GPSTimingOfCell, _asn_ctx),
	asn_MAP_utran_GPSTimingOfCell_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_utran_GPSTimingOfCell_2 = {
	"utran-GPSTimingOfCell",
	"utran-GPSTimingOfCell",
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
	asn_DEF_utran_GPSTimingOfCell_tags_2,
	sizeof(asn_DEF_utran_GPSTimingOfCell_tags_2)
		/sizeof(asn_DEF_utran_GPSTimingOfCell_tags_2[0]) - 1, /* 1 */
	asn_DEF_utran_GPSTimingOfCell_tags_2,	/* Same as above */
	sizeof(asn_DEF_utran_GPSTimingOfCell_tags_2)
		/sizeof(asn_DEF_utran_GPSTimingOfCell_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_utran_GPSTimingOfCell_2,
	2,	/* Elements count */
	&asn_SPC_utran_GPSTimingOfCell_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, referenceIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* referenceIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_6 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_6 = {
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
	asn_DEF_fdd_tags_6,
	sizeof(asn_DEF_fdd_tags_6)
		/sizeof(asn_DEF_fdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_6)
		/sizeof(asn_DEF_fdd_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_6,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, referenceIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellParametersID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* referenceIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_8 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
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

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_6,
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
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_5 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_5 = {
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
	&asn_PER_type_modeSpecificInfo_constr_5,
	asn_MBR_modeSpecificInfo_5,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UTRAN_GPSReferenceTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GPSReferenceTime, utran_GPSTimingOfCell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_utran_GPSTimingOfCell_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-GPSTimingOfCell"
		},
	{ ATF_POINTER, 1, offsetof(struct UTRAN_GPSReferenceTime, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UTRAN_GPSReferenceTime, sfn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sfn_constraint_1,
		&asn_PER_memb_sfn_constr_10,
		0,
		"sfn"
		},
};
static const int asn_MAP_UTRAN_GPSReferenceTime_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UTRAN_GPSReferenceTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UTRAN_GPSReferenceTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utran-GPSTimingOfCell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* modeSpecificInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sfn */
};
static asn_SEQUENCE_specifics_t asn_SPC_UTRAN_GPSReferenceTime_specs_1 = {
	sizeof(struct UTRAN_GPSReferenceTime),
	offsetof(struct UTRAN_GPSReferenceTime, _asn_ctx),
	asn_MAP_UTRAN_GPSReferenceTime_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UTRAN_GPSReferenceTime_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UTRAN_GPSReferenceTime = {
	"UTRAN-GPSReferenceTime",
	"UTRAN-GPSReferenceTime",
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
	asn_DEF_UTRAN_GPSReferenceTime_tags_1,
	sizeof(asn_DEF_UTRAN_GPSReferenceTime_tags_1)
		/sizeof(asn_DEF_UTRAN_GPSReferenceTime_tags_1[0]), /* 1 */
	asn_DEF_UTRAN_GPSReferenceTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_UTRAN_GPSReferenceTime_tags_1)
		/sizeof(asn_DEF_UTRAN_GPSReferenceTime_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UTRAN_GPSReferenceTime_1,
	3,	/* Elements count */
	&asn_SPC_UTRAN_GPSReferenceTime_specs_1	/* Additional specs */
};

