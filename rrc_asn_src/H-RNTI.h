/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_H_RNTI_H_
#define	_H_RNTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* H-RNTI */
typedef BIT_STRING_t	 H_RNTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_H_RNTI;
asn_struct_free_f H_RNTI_free;
asn_struct_print_f H_RNTI_print;
asn_constr_check_f H_RNTI_constraint;
ber_type_decoder_f H_RNTI_decode_ber;
der_type_encoder_f H_RNTI_encode_der;
xer_type_decoder_f H_RNTI_decode_xer;
xer_type_encoder_f H_RNTI_encode_xer;
per_type_decoder_f H_RNTI_decode_uper;
per_type_encoder_f H_RNTI_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _H_RNTI_H_ */
#include <asn_internal.h>
