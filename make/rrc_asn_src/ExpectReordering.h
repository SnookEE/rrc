/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ExpectReordering_H_
#define	_ExpectReordering_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExpectReordering {
	ExpectReordering_reorderingNotExpected	= 0,
	ExpectReordering_reorderingExpected	= 1
} e_ExpectReordering;

/* ExpectReordering */
typedef long	 ExpectReordering_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExpectReordering;
asn_struct_free_f ExpectReordering_free;
asn_struct_print_f ExpectReordering_print;
asn_constr_check_f ExpectReordering_constraint;
ber_type_decoder_f ExpectReordering_decode_ber;
der_type_encoder_f ExpectReordering_encode_der;
xer_type_decoder_f ExpectReordering_decode_xer;
xer_type_encoder_f ExpectReordering_encode_xer;
per_type_decoder_f ExpectReordering_decode_uper;
per_type_encoder_f ExpectReordering_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExpectReordering_H_ */
#include <asn_internal.h>
