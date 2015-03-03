/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_TrCH_Type_H_
#define	_UL_TrCH_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TrCH_Type {
	UL_TrCH_Type_dch	= 0,
	UL_TrCH_Type_usch	= 1
} e_UL_TrCH_Type;

/* UL-TrCH-Type */
typedef long	 UL_TrCH_Type_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TrCH_Type;
asn_struct_free_f UL_TrCH_Type_free;
asn_struct_print_f UL_TrCH_Type_print;
asn_constr_check_f UL_TrCH_Type_constraint;
ber_type_decoder_f UL_TrCH_Type_decode_ber;
der_type_encoder_f UL_TrCH_Type_encode_der;
xer_type_decoder_f UL_TrCH_Type_decode_xer;
xer_type_encoder_f UL_TrCH_Type_encode_xer;
per_type_decoder_f UL_TrCH_Type_decode_uper;
per_type_encoder_f UL_TrCH_Type_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_TrCH_Type_H_ */
#include <asn_internal.h>
