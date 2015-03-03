/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_OTDOA_SearchWindowSize_H_
#define	_OTDOA_SearchWindowSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OTDOA_SearchWindowSize {
	OTDOA_SearchWindowSize_c20	= 0,
	OTDOA_SearchWindowSize_c40	= 1,
	OTDOA_SearchWindowSize_c80	= 2,
	OTDOA_SearchWindowSize_c160	= 3,
	OTDOA_SearchWindowSize_c320	= 4,
	OTDOA_SearchWindowSize_c640	= 5,
	OTDOA_SearchWindowSize_c1280	= 6,
	OTDOA_SearchWindowSize_moreThan1280	= 7
} e_OTDOA_SearchWindowSize;

/* OTDOA-SearchWindowSize */
typedef long	 OTDOA_SearchWindowSize_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OTDOA_SearchWindowSize;
asn_struct_free_f OTDOA_SearchWindowSize_free;
asn_struct_print_f OTDOA_SearchWindowSize_print;
asn_constr_check_f OTDOA_SearchWindowSize_constraint;
ber_type_decoder_f OTDOA_SearchWindowSize_decode_ber;
der_type_encoder_f OTDOA_SearchWindowSize_encode_der;
xer_type_decoder_f OTDOA_SearchWindowSize_decode_xer;
xer_type_encoder_f OTDOA_SearchWindowSize_encode_xer;
per_type_decoder_f OTDOA_SearchWindowSize_decode_uper;
per_type_encoder_f OTDOA_SearchWindowSize_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _OTDOA_SearchWindowSize_H_ */
#include <asn_internal.h>
