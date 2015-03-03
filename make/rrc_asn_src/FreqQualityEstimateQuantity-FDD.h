/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_FreqQualityEstimateQuantity_FDD_H_
#define	_FreqQualityEstimateQuantity_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FreqQualityEstimateQuantity_FDD {
	FreqQualityEstimateQuantity_FDD_cpich_Ec_N0	= 0,
	FreqQualityEstimateQuantity_FDD_cpich_RSCP	= 1
} e_FreqQualityEstimateQuantity_FDD;

/* FreqQualityEstimateQuantity-FDD */
typedef long	 FreqQualityEstimateQuantity_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqQualityEstimateQuantity_FDD;
asn_struct_free_f FreqQualityEstimateQuantity_FDD_free;
asn_struct_print_f FreqQualityEstimateQuantity_FDD_print;
asn_constr_check_f FreqQualityEstimateQuantity_FDD_constraint;
ber_type_decoder_f FreqQualityEstimateQuantity_FDD_decode_ber;
der_type_encoder_f FreqQualityEstimateQuantity_FDD_encode_der;
xer_type_decoder_f FreqQualityEstimateQuantity_FDD_decode_xer;
xer_type_encoder_f FreqQualityEstimateQuantity_FDD_encode_xer;
per_type_decoder_f FreqQualityEstimateQuantity_FDD_decode_uper;
per_type_encoder_f FreqQualityEstimateQuantity_FDD_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqQualityEstimateQuantity_FDD_H_ */
#include <asn_internal.h>
