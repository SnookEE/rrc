/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "SibOFF.h"

int
SibOFF_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
SibOFF_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
SibOFF_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SibOFF_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SibOFF_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SibOFF_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SibOFF_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SibOFF_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SibOFF_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SibOFF_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SibOFF_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_SibOFF_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SibOFF_value2enum_1[] = {
	{ 0,	3,	"so2" },
	{ 1,	3,	"so4" },
	{ 2,	3,	"so6" },
	{ 3,	3,	"so8" },
	{ 4,	4,	"so10" },
	{ 5,	4,	"so12" },
	{ 6,	4,	"so14" },
	{ 7,	4,	"so16" },
	{ 8,	4,	"so18" },
	{ 9,	4,	"so20" },
	{ 10,	4,	"so22" },
	{ 11,	4,	"so24" },
	{ 12,	4,	"so26" },
	{ 13,	4,	"so28" },
	{ 14,	4,	"so30" },
	{ 15,	4,	"so32" }
};
static const unsigned int asn_MAP_SibOFF_enum2value_1[] = {
	4,	/* so10(4) */
	5,	/* so12(5) */
	6,	/* so14(6) */
	7,	/* so16(7) */
	8,	/* so18(8) */
	0,	/* so2(0) */
	9,	/* so20(9) */
	10,	/* so22(10) */
	11,	/* so24(11) */
	12,	/* so26(12) */
	13,	/* so28(13) */
	14,	/* so30(14) */
	15,	/* so32(15) */
	1,	/* so4(1) */
	2,	/* so6(2) */
	3	/* so8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_SibOFF_specs_1 = {
	asn_MAP_SibOFF_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SibOFF_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SibOFF_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SibOFF = {
	"SibOFF",
	"SibOFF",
	SibOFF_free,
	SibOFF_print,
	SibOFF_constraint,
	SibOFF_decode_ber,
	SibOFF_encode_der,
	SibOFF_decode_xer,
	SibOFF_encode_xer,
	SibOFF_decode_uper,
	SibOFF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SibOFF_tags_1,
	sizeof(asn_DEF_SibOFF_tags_1)
		/sizeof(asn_DEF_SibOFF_tags_1[0]), /* 1 */
	asn_DEF_SibOFF_tags_1,	/* Same as above */
	sizeof(asn_DEF_SibOFF_tags_1)
		/sizeof(asn_DEF_SibOFF_tags_1[0]), /* 1 */
	&asn_PER_type_SibOFF_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SibOFF_specs_1	/* Additional specs */
};
