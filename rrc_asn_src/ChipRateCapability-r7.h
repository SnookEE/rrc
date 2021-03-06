/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ChipRateCapability_r7_H_
#define	_ChipRateCapability_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ChipRateCapability_r7 {
	ChipRateCapability_r7_mcps3_84	= 0,
	ChipRateCapability_r7_mcps7_68	= 1,
	ChipRateCapability_r7_mcps1_28	= 2
} e_ChipRateCapability_r7;

/* ChipRateCapability-r7 */
typedef long	 ChipRateCapability_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChipRateCapability_r7;
asn_struct_free_f ChipRateCapability_r7_free;
asn_struct_print_f ChipRateCapability_r7_print;
asn_constr_check_f ChipRateCapability_r7_constraint;
ber_type_decoder_f ChipRateCapability_r7_decode_ber;
der_type_encoder_f ChipRateCapability_r7_encode_der;
xer_type_decoder_f ChipRateCapability_r7_decode_xer;
xer_type_encoder_f ChipRateCapability_r7_encode_xer;
per_type_decoder_f ChipRateCapability_r7_decode_uper;
per_type_encoder_f ChipRateCapability_r7_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ChipRateCapability_r7_H_ */
#include <asn_internal.h>
