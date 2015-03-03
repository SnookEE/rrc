/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ClosedLoopTimingAdjMode_H_
#define	_ClosedLoopTimingAdjMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ClosedLoopTimingAdjMode {
	ClosedLoopTimingAdjMode_slot1	= 0,
	ClosedLoopTimingAdjMode_slot2	= 1
} e_ClosedLoopTimingAdjMode;

/* ClosedLoopTimingAdjMode */
typedef long	 ClosedLoopTimingAdjMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClosedLoopTimingAdjMode;
asn_struct_free_f ClosedLoopTimingAdjMode_free;
asn_struct_print_f ClosedLoopTimingAdjMode_print;
asn_constr_check_f ClosedLoopTimingAdjMode_constraint;
ber_type_decoder_f ClosedLoopTimingAdjMode_decode_ber;
der_type_encoder_f ClosedLoopTimingAdjMode_encode_der;
xer_type_decoder_f ClosedLoopTimingAdjMode_decode_xer;
xer_type_encoder_f ClosedLoopTimingAdjMode_encode_xer;
per_type_decoder_f ClosedLoopTimingAdjMode_decode_uper;
per_type_encoder_f ClosedLoopTimingAdjMode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ClosedLoopTimingAdjMode_H_ */
#include <asn_internal.h>
