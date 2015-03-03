/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MaxHcContextSpace_r5_ext_H_
#define	_MaxHcContextSpace_r5_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxHcContextSpace_r5_ext {
	MaxHcContextSpace_r5_ext_by16384	= 0,
	MaxHcContextSpace_r5_ext_by32768	= 1,
	MaxHcContextSpace_r5_ext_by65536	= 2,
	MaxHcContextSpace_r5_ext_by131072	= 3
} e_MaxHcContextSpace_r5_ext;

/* MaxHcContextSpace-r5-ext */
typedef long	 MaxHcContextSpace_r5_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxHcContextSpace_r5_ext;
asn_struct_free_f MaxHcContextSpace_r5_ext_free;
asn_struct_print_f MaxHcContextSpace_r5_ext_print;
asn_constr_check_f MaxHcContextSpace_r5_ext_constraint;
ber_type_decoder_f MaxHcContextSpace_r5_ext_decode_ber;
der_type_encoder_f MaxHcContextSpace_r5_ext_encode_der;
xer_type_decoder_f MaxHcContextSpace_r5_ext_decode_xer;
xer_type_encoder_f MaxHcContextSpace_r5_ext_encode_xer;
per_type_decoder_f MaxHcContextSpace_r5_ext_decode_uper;
per_type_encoder_f MaxHcContextSpace_r5_ext_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxHcContextSpace_r5_ext_H_ */
#include <asn_internal.h>
