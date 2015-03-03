/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_N_312ext_H_
#define	_N_312ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum N_312ext {
	N_312ext_s2	= 0,
	N_312ext_s4	= 1,
	N_312ext_s10	= 2,
	N_312ext_s20	= 3
} e_N_312ext;

/* N-312ext */
typedef long	 N_312ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_N_312ext;
asn_struct_free_f N_312ext_free;
asn_struct_print_f N_312ext_print;
asn_constr_check_f N_312ext_constraint;
ber_type_decoder_f N_312ext_decode_ber;
der_type_encoder_f N_312ext_encode_der;
xer_type_decoder_f N_312ext_decode_xer;
xer_type_encoder_f N_312ext_encode_xer;
per_type_decoder_f N_312ext_decode_uper;
per_type_encoder_f N_312ext_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _N_312ext_H_ */
#include <asn_internal.h>
