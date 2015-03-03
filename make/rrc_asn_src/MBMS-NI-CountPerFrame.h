/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_NI_CountPerFrame_H_
#define	_MBMS_NI_CountPerFrame_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_NI_CountPerFrame {
	MBMS_NI_CountPerFrame_ni18	= 0,
	MBMS_NI_CountPerFrame_ni36	= 1,
	MBMS_NI_CountPerFrame_ni72	= 2,
	MBMS_NI_CountPerFrame_ni144	= 3
} e_MBMS_NI_CountPerFrame;

/* MBMS-NI-CountPerFrame */
typedef long	 MBMS_NI_CountPerFrame_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_NI_CountPerFrame;
asn_struct_free_f MBMS_NI_CountPerFrame_free;
asn_struct_print_f MBMS_NI_CountPerFrame_print;
asn_constr_check_f MBMS_NI_CountPerFrame_constraint;
ber_type_decoder_f MBMS_NI_CountPerFrame_decode_ber;
der_type_encoder_f MBMS_NI_CountPerFrame_encode_der;
xer_type_decoder_f MBMS_NI_CountPerFrame_decode_xer;
xer_type_encoder_f MBMS_NI_CountPerFrame_encode_xer;
per_type_decoder_f MBMS_NI_CountPerFrame_decode_uper;
per_type_encoder_f MBMS_NI_CountPerFrame_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_NI_CountPerFrame_H_ */
#include <asn_internal.h>
