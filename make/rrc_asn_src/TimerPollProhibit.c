/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "TimerPollProhibit.h"

int
TimerPollProhibit_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
TimerPollProhibit_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
TimerPollProhibit_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TimerPollProhibit_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TimerPollProhibit_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TimerPollProhibit_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TimerPollProhibit_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TimerPollProhibit_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
TimerPollProhibit_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
TimerPollProhibit_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	TimerPollProhibit_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_TimerPollProhibit_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TimerPollProhibit_value2enum_1[] = {
	{ 0,	5,	"tpp10" },
	{ 1,	5,	"tpp20" },
	{ 2,	5,	"tpp30" },
	{ 3,	5,	"tpp40" },
	{ 4,	5,	"tpp50" },
	{ 5,	5,	"tpp60" },
	{ 6,	5,	"tpp70" },
	{ 7,	5,	"tpp80" },
	{ 8,	5,	"tpp90" },
	{ 9,	6,	"tpp100" },
	{ 10,	6,	"tpp110" },
	{ 11,	6,	"tpp120" },
	{ 12,	6,	"tpp130" },
	{ 13,	6,	"tpp140" },
	{ 14,	6,	"tpp150" },
	{ 15,	6,	"tpp160" },
	{ 16,	6,	"tpp170" },
	{ 17,	6,	"tpp180" },
	{ 18,	6,	"tpp190" },
	{ 19,	6,	"tpp200" },
	{ 20,	6,	"tpp210" },
	{ 21,	6,	"tpp220" },
	{ 22,	6,	"tpp230" },
	{ 23,	6,	"tpp240" },
	{ 24,	6,	"tpp250" },
	{ 25,	6,	"tpp260" },
	{ 26,	6,	"tpp270" },
	{ 27,	6,	"tpp280" },
	{ 28,	6,	"tpp290" },
	{ 29,	6,	"tpp300" },
	{ 30,	6,	"tpp310" },
	{ 31,	6,	"tpp320" },
	{ 32,	6,	"tpp330" },
	{ 33,	6,	"tpp340" },
	{ 34,	6,	"tpp350" },
	{ 35,	6,	"tpp360" },
	{ 36,	6,	"tpp370" },
	{ 37,	6,	"tpp380" },
	{ 38,	6,	"tpp390" },
	{ 39,	6,	"tpp400" },
	{ 40,	6,	"tpp410" },
	{ 41,	6,	"tpp420" },
	{ 42,	6,	"tpp430" },
	{ 43,	6,	"tpp440" },
	{ 44,	6,	"tpp450" },
	{ 45,	6,	"tpp460" },
	{ 46,	6,	"tpp470" },
	{ 47,	6,	"tpp480" },
	{ 48,	6,	"tpp490" },
	{ 49,	6,	"tpp500" },
	{ 50,	6,	"tpp510" },
	{ 51,	6,	"tpp520" },
	{ 52,	6,	"tpp530" },
	{ 53,	6,	"tpp540" },
	{ 54,	6,	"tpp550" },
	{ 55,	6,	"tpp600" },
	{ 56,	6,	"tpp650" },
	{ 57,	6,	"tpp700" },
	{ 58,	6,	"tpp750" },
	{ 59,	6,	"tpp800" },
	{ 60,	6,	"tpp850" },
	{ 61,	6,	"tpp900" },
	{ 62,	6,	"tpp950" },
	{ 63,	7,	"tpp1000" }
};
static const unsigned int asn_MAP_TimerPollProhibit_enum2value_1[] = {
	0,	/* tpp10(0) */
	9,	/* tpp100(9) */
	63,	/* tpp1000(63) */
	10,	/* tpp110(10) */
	11,	/* tpp120(11) */
	12,	/* tpp130(12) */
	13,	/* tpp140(13) */
	14,	/* tpp150(14) */
	15,	/* tpp160(15) */
	16,	/* tpp170(16) */
	17,	/* tpp180(17) */
	18,	/* tpp190(18) */
	1,	/* tpp20(1) */
	19,	/* tpp200(19) */
	20,	/* tpp210(20) */
	21,	/* tpp220(21) */
	22,	/* tpp230(22) */
	23,	/* tpp240(23) */
	24,	/* tpp250(24) */
	25,	/* tpp260(25) */
	26,	/* tpp270(26) */
	27,	/* tpp280(27) */
	28,	/* tpp290(28) */
	2,	/* tpp30(2) */
	29,	/* tpp300(29) */
	30,	/* tpp310(30) */
	31,	/* tpp320(31) */
	32,	/* tpp330(32) */
	33,	/* tpp340(33) */
	34,	/* tpp350(34) */
	35,	/* tpp360(35) */
	36,	/* tpp370(36) */
	37,	/* tpp380(37) */
	38,	/* tpp390(38) */
	3,	/* tpp40(3) */
	39,	/* tpp400(39) */
	40,	/* tpp410(40) */
	41,	/* tpp420(41) */
	42,	/* tpp430(42) */
	43,	/* tpp440(43) */
	44,	/* tpp450(44) */
	45,	/* tpp460(45) */
	46,	/* tpp470(46) */
	47,	/* tpp480(47) */
	48,	/* tpp490(48) */
	4,	/* tpp50(4) */
	49,	/* tpp500(49) */
	50,	/* tpp510(50) */
	51,	/* tpp520(51) */
	52,	/* tpp530(52) */
	53,	/* tpp540(53) */
	54,	/* tpp550(54) */
	5,	/* tpp60(5) */
	55,	/* tpp600(55) */
	56,	/* tpp650(56) */
	6,	/* tpp70(6) */
	57,	/* tpp700(57) */
	58,	/* tpp750(58) */
	7,	/* tpp80(7) */
	59,	/* tpp800(59) */
	60,	/* tpp850(60) */
	8,	/* tpp90(8) */
	61,	/* tpp900(61) */
	62	/* tpp950(62) */
};
static const asn_INTEGER_specifics_t asn_SPC_TimerPollProhibit_specs_1 = {
	asn_MAP_TimerPollProhibit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimerPollProhibit_enum2value_1,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimerPollProhibit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimerPollProhibit = {
	"TimerPollProhibit",
	"TimerPollProhibit",
	TimerPollProhibit_free,
	TimerPollProhibit_print,
	TimerPollProhibit_constraint,
	TimerPollProhibit_decode_ber,
	TimerPollProhibit_encode_der,
	TimerPollProhibit_decode_xer,
	TimerPollProhibit_encode_xer,
	TimerPollProhibit_decode_uper,
	TimerPollProhibit_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimerPollProhibit_tags_1,
	sizeof(asn_DEF_TimerPollProhibit_tags_1)
		/sizeof(asn_DEF_TimerPollProhibit_tags_1[0]), /* 1 */
	asn_DEF_TimerPollProhibit_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimerPollProhibit_tags_1)
		/sizeof(asn_DEF_TimerPollProhibit_tags_1[0]), /* 1 */
	&asn_PER_type_TimerPollProhibit_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimerPollProhibit_specs_1	/* Additional specs */
};

