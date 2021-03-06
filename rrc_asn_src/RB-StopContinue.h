/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RB_StopContinue_H_
#define	_RB_StopContinue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RB_StopContinue {
	RB_StopContinue_stopRB	= 0,
	RB_StopContinue_continueRB	= 1
} e_RB_StopContinue;

/* RB-StopContinue */
typedef long	 RB_StopContinue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_StopContinue;
asn_struct_free_f RB_StopContinue_free;
asn_struct_print_f RB_StopContinue_print;
asn_constr_check_f RB_StopContinue_constraint;
ber_type_decoder_f RB_StopContinue_decode_ber;
der_type_encoder_f RB_StopContinue_encode_der;
xer_type_decoder_f RB_StopContinue_decode_xer;
xer_type_encoder_f RB_StopContinue_encode_xer;
per_type_decoder_f RB_StopContinue_decode_uper;
per_type_encoder_f RB_StopContinue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RB_StopContinue_H_ */
#include <asn_internal.h>
