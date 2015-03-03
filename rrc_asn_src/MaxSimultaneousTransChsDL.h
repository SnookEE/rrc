/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MaxSimultaneousTransChsDL_H_
#define	_MaxSimultaneousTransChsDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxSimultaneousTransChsDL {
	MaxSimultaneousTransChsDL_e4	= 0,
	MaxSimultaneousTransChsDL_e8	= 1,
	MaxSimultaneousTransChsDL_e16	= 2,
	MaxSimultaneousTransChsDL_e32	= 3
} e_MaxSimultaneousTransChsDL;

/* MaxSimultaneousTransChsDL */
typedef long	 MaxSimultaneousTransChsDL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxSimultaneousTransChsDL;
asn_struct_free_f MaxSimultaneousTransChsDL_free;
asn_struct_print_f MaxSimultaneousTransChsDL_print;
asn_constr_check_f MaxSimultaneousTransChsDL_constraint;
ber_type_decoder_f MaxSimultaneousTransChsDL_decode_ber;
der_type_encoder_f MaxSimultaneousTransChsDL_encode_der;
xer_type_decoder_f MaxSimultaneousTransChsDL_decode_xer;
xer_type_encoder_f MaxSimultaneousTransChsDL_encode_xer;
per_type_decoder_f MaxSimultaneousTransChsDL_decode_uper;
per_type_encoder_f MaxSimultaneousTransChsDL_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxSimultaneousTransChsDL_H_ */
#include <asn_internal.h>
