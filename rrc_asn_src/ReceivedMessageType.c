/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "ReceivedMessageType.h"

int
ReceivedMessageType_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ReceivedMessageType_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ReceivedMessageType_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
ReceivedMessageType_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
ReceivedMessageType_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
ReceivedMessageType_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
ReceivedMessageType_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
ReceivedMessageType_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
ReceivedMessageType_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
ReceivedMessageType_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ReceivedMessageType_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_ReceivedMessageType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ReceivedMessageType_value2enum_1[] = {
	{ 0,	15,	"activeSetUpdate" },
	{ 1,	24,	"cellChangeOrderFromUTRAN" },
	{ 2,	17,	"cellUpdateConfirm" },
	{ 3,	12,	"counterCheck" },
	{ 4,	22,	"downlinkDirectTransfer" },
	{ 5,	23,	"interRATHandoverCommand" },
	{ 6,	18,	"measurementControl" },
	{ 7,	11,	"pagingType2" },
	{ 8,	30,	"physicalChannelReconfiguration" },
	{ 9,	31,	"physicalSharedChannelAllocation" },
	{ 10,	26,	"radioBearerReconfiguration" },
	{ 11,	18,	"radioBearerRelease" },
	{ 12,	16,	"radioBearerSetup" },
	{ 13,	20,	"rrcConnectionRelease" },
	{ 14,	19,	"rrcConnectionReject" },
	{ 15,	18,	"rrcConnectionSetup" },
	{ 16,	19,	"securityModeCommand" },
	{ 17,	27,	"signallingConnectionRelease" },
	{ 18,	31,	"transportChannelReconfiguration" },
	{ 19,	33,	"transportFormatCombinationControl" },
	{ 20,	19,	"ueCapabilityEnquiry" },
	{ 21,	30,	"ueCapabilityInformationConfirm" },
	{ 22,	28,	"uplinkPhysicalChannelControl" },
	{ 23,	16,	"uraUpdateConfirm" },
	{ 24,	24,	"utranMobilityInformation" },
	{ 25,	22,	"assistanceDataDelivery" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_ReceivedMessageType_enum2value_1[] = {
	0,	/* activeSetUpdate(0) */
	25,	/* assistanceDataDelivery(25) */
	1,	/* cellChangeOrderFromUTRAN(1) */
	2,	/* cellUpdateConfirm(2) */
	3,	/* counterCheck(3) */
	4,	/* downlinkDirectTransfer(4) */
	5,	/* interRATHandoverCommand(5) */
	6,	/* measurementControl(6) */
	7,	/* pagingType2(7) */
	8,	/* physicalChannelReconfiguration(8) */
	9,	/* physicalSharedChannelAllocation(9) */
	10,	/* radioBearerReconfiguration(10) */
	11,	/* radioBearerRelease(11) */
	12,	/* radioBearerSetup(12) */
	14,	/* rrcConnectionReject(14) */
	13,	/* rrcConnectionRelease(13) */
	15,	/* rrcConnectionSetup(15) */
	16,	/* securityModeCommand(16) */
	17,	/* signallingConnectionRelease(17) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	18,	/* transportChannelReconfiguration(18) */
	19,	/* transportFormatCombinationControl(19) */
	20,	/* ueCapabilityEnquiry(20) */
	21,	/* ueCapabilityInformationConfirm(21) */
	22,	/* uplinkPhysicalChannelControl(22) */
	23,	/* uraUpdateConfirm(23) */
	24	/* utranMobilityInformation(24) */
};
static const asn_INTEGER_specifics_t asn_SPC_ReceivedMessageType_specs_1 = {
	asn_MAP_ReceivedMessageType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReceivedMessageType_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReceivedMessageType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReceivedMessageType = {
	"ReceivedMessageType",
	"ReceivedMessageType",
	ReceivedMessageType_free,
	ReceivedMessageType_print,
	ReceivedMessageType_constraint,
	ReceivedMessageType_decode_ber,
	ReceivedMessageType_encode_der,
	ReceivedMessageType_decode_xer,
	ReceivedMessageType_encode_xer,
	ReceivedMessageType_decode_uper,
	ReceivedMessageType_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReceivedMessageType_tags_1,
	sizeof(asn_DEF_ReceivedMessageType_tags_1)
		/sizeof(asn_DEF_ReceivedMessageType_tags_1[0]), /* 1 */
	asn_DEF_ReceivedMessageType_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReceivedMessageType_tags_1)
		/sizeof(asn_DEF_ReceivedMessageType_tags_1[0]), /* 1 */
	&asn_PER_type_ReceivedMessageType_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReceivedMessageType_specs_1	/* Additional specs */
};

