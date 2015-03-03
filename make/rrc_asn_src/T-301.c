/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "T-301.h"

int
T_301_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
T_301_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
T_301_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	T_301_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
T_301_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
T_301_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
T_301_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
T_301_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
T_301_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
T_301_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
T_301_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	T_301_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_T_301_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_301_value2enum_1[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms400" },
	{ 3,	5,	"ms600" },
	{ 4,	5,	"ms800" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1200" },
	{ 7,	6,	"ms1400" },
	{ 8,	6,	"ms1600" },
	{ 9,	6,	"ms1800" },
	{ 10,	6,	"ms2000" },
	{ 11,	6,	"ms3000" },
	{ 12,	6,	"ms4000" },
	{ 13,	6,	"ms6000" },
	{ 14,	6,	"ms8000" },
	{ 15,	5,	"spare" }
};
static const unsigned int asn_MAP_T_301_enum2value_1[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1200(6) */
	7,	/* ms1400(7) */
	8,	/* ms1600(8) */
	9,	/* ms1800(9) */
	1,	/* ms200(1) */
	10,	/* ms2000(10) */
	11,	/* ms3000(11) */
	2,	/* ms400(2) */
	12,	/* ms4000(12) */
	3,	/* ms600(3) */
	13,	/* ms6000(13) */
	4,	/* ms800(4) */
	14,	/* ms8000(14) */
	15	/* spare(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_T_301_specs_1 = {
	asn_MAP_T_301_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_301_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_301_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_301 = {
	"T-301",
	"T-301",
	T_301_free,
	T_301_print,
	T_301_constraint,
	T_301_decode_ber,
	T_301_encode_der,
	T_301_decode_xer,
	T_301_encode_xer,
	T_301_decode_uper,
	T_301_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_T_301_tags_1,
	sizeof(asn_DEF_T_301_tags_1)
		/sizeof(asn_DEF_T_301_tags_1[0]), /* 1 */
	asn_DEF_T_301_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_301_tags_1)
		/sizeof(asn_DEF_T_301_tags_1[0]), /* 1 */
	&asn_PER_type_T_301_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_301_specs_1	/* Additional specs */
};

