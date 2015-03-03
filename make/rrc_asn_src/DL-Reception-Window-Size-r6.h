/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_Reception_Window_Size_r6_H_
#define	_DL_Reception_Window_Size_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_Reception_Window_Size_r6 {
	DL_Reception_Window_Size_r6_size32	= 0,
	DL_Reception_Window_Size_r6_size48	= 1,
	DL_Reception_Window_Size_r6_size64	= 2,
	DL_Reception_Window_Size_r6_size80	= 3,
	DL_Reception_Window_Size_r6_size96	= 4,
	DL_Reception_Window_Size_r6_size112	= 5
} e_DL_Reception_Window_Size_r6;

/* DL-Reception-Window-Size-r6 */
typedef long	 DL_Reception_Window_Size_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_Reception_Window_Size_r6;
asn_struct_free_f DL_Reception_Window_Size_r6_free;
asn_struct_print_f DL_Reception_Window_Size_r6_print;
asn_constr_check_f DL_Reception_Window_Size_r6_constraint;
ber_type_decoder_f DL_Reception_Window_Size_r6_decode_ber;
der_type_encoder_f DL_Reception_Window_Size_r6_encode_der;
xer_type_decoder_f DL_Reception_Window_Size_r6_decode_xer;
xer_type_encoder_f DL_Reception_Window_Size_r6_encode_xer;
per_type_decoder_f DL_Reception_Window_Size_r6_decode_uper;
per_type_encoder_f DL_Reception_Window_Size_r6_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_Reception_Window_Size_r6_H_ */
#include <asn_internal.h>
