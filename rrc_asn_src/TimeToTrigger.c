/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "TimeToTrigger.h"

int
TimeToTrigger_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
TimeToTrigger_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
TimeToTrigger_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TimeToTrigger_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TimeToTrigger_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TimeToTrigger_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TimeToTrigger_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TimeToTrigger_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
TimeToTrigger_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
TimeToTrigger_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	TimeToTrigger_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_TimeToTrigger_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TimeToTrigger_value2enum_1[] = {
	{ 0,	4,	"ttt0" },
	{ 1,	5,	"ttt10" },
	{ 2,	5,	"ttt20" },
	{ 3,	5,	"ttt40" },
	{ 4,	5,	"ttt60" },
	{ 5,	5,	"ttt80" },
	{ 6,	6,	"ttt100" },
	{ 7,	6,	"ttt120" },
	{ 8,	6,	"ttt160" },
	{ 9,	6,	"ttt200" },
	{ 10,	6,	"ttt240" },
	{ 11,	5,	"tt320" },
	{ 12,	6,	"ttt640" },
	{ 13,	7,	"ttt1280" },
	{ 14,	7,	"ttt2560" },
	{ 15,	7,	"ttt5000" }
};
static const unsigned int asn_MAP_TimeToTrigger_enum2value_1[] = {
	11,	/* tt320(11) */
	0,	/* ttt0(0) */
	1,	/* ttt10(1) */
	6,	/* ttt100(6) */
	7,	/* ttt120(7) */
	13,	/* ttt1280(13) */
	8,	/* ttt160(8) */
	2,	/* ttt20(2) */
	9,	/* ttt200(9) */
	10,	/* ttt240(10) */
	14,	/* ttt2560(14) */
	3,	/* ttt40(3) */
	15,	/* ttt5000(15) */
	4,	/* ttt60(4) */
	12,	/* ttt640(12) */
	5	/* ttt80(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_TimeToTrigger_specs_1 = {
	asn_MAP_TimeToTrigger_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimeToTrigger_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimeToTrigger_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeToTrigger = {
	"TimeToTrigger",
	"TimeToTrigger",
	TimeToTrigger_free,
	TimeToTrigger_print,
	TimeToTrigger_constraint,
	TimeToTrigger_decode_ber,
	TimeToTrigger_encode_der,
	TimeToTrigger_decode_xer,
	TimeToTrigger_encode_xer,
	TimeToTrigger_decode_uper,
	TimeToTrigger_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimeToTrigger_tags_1,
	sizeof(asn_DEF_TimeToTrigger_tags_1)
		/sizeof(asn_DEF_TimeToTrigger_tags_1[0]), /* 1 */
	asn_DEF_TimeToTrigger_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeToTrigger_tags_1)
		/sizeof(asn_DEF_TimeToTrigger_tags_1[0]), /* 1 */
	&asn_PER_type_TimeToTrigger_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimeToTrigger_specs_1	/* Additional specs */
};
