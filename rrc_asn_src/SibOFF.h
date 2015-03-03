/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SibOFF_H_
#define	_SibOFF_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SibOFF {
	SibOFF_so2	= 0,
	SibOFF_so4	= 1,
	SibOFF_so6	= 2,
	SibOFF_so8	= 3,
	SibOFF_so10	= 4,
	SibOFF_so12	= 5,
	SibOFF_so14	= 6,
	SibOFF_so16	= 7,
	SibOFF_so18	= 8,
	SibOFF_so20	= 9,
	SibOFF_so22	= 10,
	SibOFF_so24	= 11,
	SibOFF_so26	= 12,
	SibOFF_so28	= 13,
	SibOFF_so30	= 14,
	SibOFF_so32	= 15
} e_SibOFF;

/* SibOFF */
typedef long	 SibOFF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SibOFF;
asn_struct_free_f SibOFF_free;
asn_struct_print_f SibOFF_print;
asn_constr_check_f SibOFF_constraint;
ber_type_decoder_f SibOFF_decode_ber;
der_type_encoder_f SibOFF_encode_der;
xer_type_decoder_f SibOFF_decode_xer;
xer_type_encoder_f SibOFF_encode_xer;
per_type_decoder_f SibOFF_decode_uper;
per_type_encoder_f SibOFF_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SibOFF_H_ */
#include <asn_internal.h>
