/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MaxDAT_H_
#define	_MaxDAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxDAT {
	MaxDAT_dat1	= 0,
	MaxDAT_dat2	= 1,
	MaxDAT_dat3	= 2,
	MaxDAT_dat4	= 3,
	MaxDAT_dat5	= 4,
	MaxDAT_dat6	= 5,
	MaxDAT_dat7	= 6,
	MaxDAT_dat8	= 7,
	MaxDAT_dat9	= 8,
	MaxDAT_dat10	= 9,
	MaxDAT_dat15	= 10,
	MaxDAT_dat20	= 11,
	MaxDAT_dat25	= 12,
	MaxDAT_dat30	= 13,
	MaxDAT_dat35	= 14,
	MaxDAT_dat40	= 15
} e_MaxDAT;

/* MaxDAT */
typedef long	 MaxDAT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxDAT;
asn_struct_free_f MaxDAT_free;
asn_struct_print_f MaxDAT_print;
asn_constr_check_f MaxDAT_constraint;
ber_type_decoder_f MaxDAT_decode_ber;
der_type_encoder_f MaxDAT_encode_der;
xer_type_decoder_f MaxDAT_decode_xer;
xer_type_encoder_f MaxDAT_encode_xer;
per_type_decoder_f MaxDAT_decode_uper;
per_type_encoder_f MaxDAT_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxDAT_H_ */
#include <asn_internal.h>
