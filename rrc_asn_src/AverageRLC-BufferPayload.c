/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "AverageRLC-BufferPayload.h"

int
AverageRLC_BufferPayload_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
AverageRLC_BufferPayload_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
AverageRLC_BufferPayload_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
AverageRLC_BufferPayload_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
AverageRLC_BufferPayload_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
AverageRLC_BufferPayload_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
AverageRLC_BufferPayload_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
AverageRLC_BufferPayload_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
AverageRLC_BufferPayload_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	AverageRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_AverageRLC_BufferPayload_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_AverageRLC_BufferPayload_value2enum_1[] = {
	{ 0,	4,	"pla0" },
	{ 1,	4,	"pla4" },
	{ 2,	4,	"pla8" },
	{ 3,	5,	"pla16" },
	{ 4,	5,	"pla32" },
	{ 5,	5,	"pla64" },
	{ 6,	6,	"pla128" },
	{ 7,	6,	"pla256" },
	{ 8,	6,	"pla512" },
	{ 9,	7,	"pla1024" },
	{ 10,	5,	"pla2k" },
	{ 11,	5,	"pla4k" },
	{ 12,	5,	"pla8k" },
	{ 13,	6,	"pla16k" },
	{ 14,	6,	"pla32k" },
	{ 15,	6,	"pla64k" },
	{ 16,	7,	"pla128k" },
	{ 17,	7,	"pla256k" },
	{ 18,	7,	"pla512k" },
	{ 19,	8,	"pla1024k" },
	{ 20,	7,	"spare12" },
	{ 21,	7,	"spare11" },
	{ 22,	7,	"spare10" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_AverageRLC_BufferPayload_enum2value_1[] = {
	0,	/* pla0(0) */
	9,	/* pla1024(9) */
	19,	/* pla1024k(19) */
	6,	/* pla128(6) */
	16,	/* pla128k(16) */
	3,	/* pla16(3) */
	13,	/* pla16k(13) */
	7,	/* pla256(7) */
	17,	/* pla256k(17) */
	10,	/* pla2k(10) */
	4,	/* pla32(4) */
	14,	/* pla32k(14) */
	1,	/* pla4(1) */
	11,	/* pla4k(11) */
	8,	/* pla512(8) */
	18,	/* pla512k(18) */
	5,	/* pla64(5) */
	15,	/* pla64k(15) */
	2,	/* pla8(2) */
	12,	/* pla8k(12) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_AverageRLC_BufferPayload_specs_1 = {
	asn_MAP_AverageRLC_BufferPayload_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AverageRLC_BufferPayload_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AverageRLC_BufferPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AverageRLC_BufferPayload = {
	"AverageRLC-BufferPayload",
	"AverageRLC-BufferPayload",
	AverageRLC_BufferPayload_free,
	AverageRLC_BufferPayload_print,
	AverageRLC_BufferPayload_constraint,
	AverageRLC_BufferPayload_decode_ber,
	AverageRLC_BufferPayload_encode_der,
	AverageRLC_BufferPayload_decode_xer,
	AverageRLC_BufferPayload_encode_xer,
	AverageRLC_BufferPayload_decode_uper,
	AverageRLC_BufferPayload_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AverageRLC_BufferPayload_tags_1,
	sizeof(asn_DEF_AverageRLC_BufferPayload_tags_1)
		/sizeof(asn_DEF_AverageRLC_BufferPayload_tags_1[0]), /* 1 */
	asn_DEF_AverageRLC_BufferPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_AverageRLC_BufferPayload_tags_1)
		/sizeof(asn_DEF_AverageRLC_BufferPayload_tags_1[0]), /* 1 */
	&asn_PER_type_AverageRLC_BufferPayload_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AverageRLC_BufferPayload_specs_1	/* Additional specs */
};

