/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SIB_Data_variable_H_
#define	_SIB_Data_variable_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB-Data-variable */
typedef BIT_STRING_t	 SIB_Data_variable_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_Data_variable;
asn_struct_free_f SIB_Data_variable_free;
asn_struct_print_f SIB_Data_variable_print;
asn_constr_check_f SIB_Data_variable_constraint;
ber_type_decoder_f SIB_Data_variable_decode_ber;
der_type_encoder_f SIB_Data_variable_encode_der;
xer_type_decoder_f SIB_Data_variable_decode_xer;
xer_type_encoder_f SIB_Data_variable_encode_xer;
per_type_decoder_f SIB_Data_variable_decode_uper;
per_type_encoder_f SIB_Data_variable_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Data_variable_H_ */
#include <asn_internal.h>
