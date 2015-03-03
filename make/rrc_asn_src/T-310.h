/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_T_310_H_
#define	_T_310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_310 {
	T_310_ms40	= 0,
	T_310_ms80	= 1,
	T_310_ms120	= 2,
	T_310_ms160	= 3,
	T_310_ms200	= 4,
	T_310_ms240	= 5,
	T_310_ms280	= 6,
	T_310_ms320	= 7
} e_T_310;

/* T-310 */
typedef long	 T_310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_310;
asn_struct_free_f T_310_free;
asn_struct_print_f T_310_print;
asn_constr_check_f T_310_constraint;
ber_type_decoder_f T_310_decode_ber;
der_type_encoder_f T_310_encode_der;
xer_type_decoder_f T_310_decode_xer;
xer_type_encoder_f T_310_encode_xer;
per_type_decoder_f T_310_decode_uper;
per_type_encoder_f T_310_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_310_H_ */
#include <asn_internal.h>
