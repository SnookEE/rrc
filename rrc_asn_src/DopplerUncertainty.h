/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DopplerUncertainty_H_
#define	_DopplerUncertainty_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DopplerUncertainty {
	DopplerUncertainty_hz12_5	= 0,
	DopplerUncertainty_hz25	= 1,
	DopplerUncertainty_hz50	= 2,
	DopplerUncertainty_hz100	= 3,
	DopplerUncertainty_hz200	= 4,
	DopplerUncertainty_spare3	= 5,
	DopplerUncertainty_spare2	= 6,
	DopplerUncertainty_spare1	= 7
} e_DopplerUncertainty;

/* DopplerUncertainty */
typedef long	 DopplerUncertainty_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DopplerUncertainty;
asn_struct_free_f DopplerUncertainty_free;
asn_struct_print_f DopplerUncertainty_print;
asn_constr_check_f DopplerUncertainty_constraint;
ber_type_decoder_f DopplerUncertainty_decode_ber;
der_type_encoder_f DopplerUncertainty_encode_der;
xer_type_decoder_f DopplerUncertainty_decode_xer;
xer_type_encoder_f DopplerUncertainty_encode_xer;
per_type_decoder_f DopplerUncertainty_decode_uper;
per_type_encoder_f DopplerUncertainty_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DopplerUncertainty_H_ */
#include <asn_internal.h>