/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IS_2000SpecificMeasInfo_H_
#define	_IS_2000SpecificMeasInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IS_2000SpecificMeasInfo {
	IS_2000SpecificMeasInfo_frequency	= 0,
	IS_2000SpecificMeasInfo_timeslot	= 1,
	IS_2000SpecificMeasInfo_colourcode	= 2,
	IS_2000SpecificMeasInfo_outputpower	= 3,
	IS_2000SpecificMeasInfo_pn_Offset	= 4
} e_IS_2000SpecificMeasInfo;

/* IS-2000SpecificMeasInfo */
typedef long	 IS_2000SpecificMeasInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IS_2000SpecificMeasInfo;
asn_struct_free_f IS_2000SpecificMeasInfo_free;
asn_struct_print_f IS_2000SpecificMeasInfo_print;
asn_constr_check_f IS_2000SpecificMeasInfo_constraint;
ber_type_decoder_f IS_2000SpecificMeasInfo_decode_ber;
der_type_encoder_f IS_2000SpecificMeasInfo_encode_der;
xer_type_decoder_f IS_2000SpecificMeasInfo_decode_xer;
xer_type_encoder_f IS_2000SpecificMeasInfo_encode_xer;
per_type_decoder_f IS_2000SpecificMeasInfo_decode_uper;
per_type_encoder_f IS_2000SpecificMeasInfo_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IS_2000SpecificMeasInfo_H_ */
#include <asn_internal.h>
