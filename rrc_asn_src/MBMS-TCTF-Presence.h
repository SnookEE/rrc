/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_TCTF_Presence_H_
#define	_MBMS_TCTF_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_TCTF_Presence {
	MBMS_TCTF_Presence_false	= 0
} e_MBMS_TCTF_Presence;

/* MBMS-TCTF-Presence */
typedef long	 MBMS_TCTF_Presence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_TCTF_Presence;
asn_struct_free_f MBMS_TCTF_Presence_free;
asn_struct_print_f MBMS_TCTF_Presence_print;
asn_constr_check_f MBMS_TCTF_Presence_constraint;
ber_type_decoder_f MBMS_TCTF_Presence_decode_ber;
der_type_encoder_f MBMS_TCTF_Presence_encode_der;
xer_type_decoder_f MBMS_TCTF_Presence_decode_xer;
xer_type_encoder_f MBMS_TCTF_Presence_encode_xer;
per_type_decoder_f MBMS_TCTF_Presence_decode_uper;
per_type_encoder_f MBMS_TCTF_Presence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_TCTF_Presence_H_ */
#include <asn_internal.h>
