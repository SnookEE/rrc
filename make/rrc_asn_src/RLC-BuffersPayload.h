/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RLC_BuffersPayload_H_
#define	_RLC_BuffersPayload_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_BuffersPayload {
	RLC_BuffersPayload_pl0	= 0,
	RLC_BuffersPayload_pl4	= 1,
	RLC_BuffersPayload_pl8	= 2,
	RLC_BuffersPayload_pl16	= 3,
	RLC_BuffersPayload_pl32	= 4,
	RLC_BuffersPayload_pl64	= 5,
	RLC_BuffersPayload_pl128	= 6,
	RLC_BuffersPayload_pl256	= 7,
	RLC_BuffersPayload_pl512	= 8,
	RLC_BuffersPayload_pl1024	= 9,
	RLC_BuffersPayload_pl2k	= 10,
	RLC_BuffersPayload_pl4k	= 11,
	RLC_BuffersPayload_pl8k	= 12,
	RLC_BuffersPayload_pl16k	= 13,
	RLC_BuffersPayload_pl32k	= 14,
	RLC_BuffersPayload_pl64k	= 15,
	RLC_BuffersPayload_pl128k	= 16,
	RLC_BuffersPayload_pl256k	= 17,
	RLC_BuffersPayload_pl512k	= 18,
	RLC_BuffersPayload_pl1024k	= 19,
	RLC_BuffersPayload_spare12	= 20,
	RLC_BuffersPayload_spare11	= 21,
	RLC_BuffersPayload_spare10	= 22,
	RLC_BuffersPayload_spare9	= 23,
	RLC_BuffersPayload_spare8	= 24,
	RLC_BuffersPayload_spare7	= 25,
	RLC_BuffersPayload_spare6	= 26,
	RLC_BuffersPayload_spare5	= 27,
	RLC_BuffersPayload_spare4	= 28,
	RLC_BuffersPayload_spare3	= 29,
	RLC_BuffersPayload_spare2	= 30,
	RLC_BuffersPayload_spare1	= 31
} e_RLC_BuffersPayload;

/* RLC-BuffersPayload */
typedef long	 RLC_BuffersPayload_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_BuffersPayload;
asn_struct_free_f RLC_BuffersPayload_free;
asn_struct_print_f RLC_BuffersPayload_print;
asn_constr_check_f RLC_BuffersPayload_constraint;
ber_type_decoder_f RLC_BuffersPayload_decode_ber;
der_type_encoder_f RLC_BuffersPayload_encode_der;
xer_type_decoder_f RLC_BuffersPayload_decode_xer;
xer_type_encoder_f RLC_BuffersPayload_encode_xer;
per_type_decoder_f RLC_BuffersPayload_decode_uper;
per_type_encoder_f RLC_BuffersPayload_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_BuffersPayload_H_ */
#include <asn_internal.h>
