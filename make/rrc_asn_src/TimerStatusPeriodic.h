/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TimerStatusPeriodic_H_
#define	_TimerStatusPeriodic_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimerStatusPeriodic {
	TimerStatusPeriodic_tsp100	= 0,
	TimerStatusPeriodic_tsp200	= 1,
	TimerStatusPeriodic_tsp300	= 2,
	TimerStatusPeriodic_tsp400	= 3,
	TimerStatusPeriodic_tsp500	= 4,
	TimerStatusPeriodic_tsp750	= 5,
	TimerStatusPeriodic_tsp1000	= 6,
	TimerStatusPeriodic_tsp2000	= 7
} e_TimerStatusPeriodic;

/* TimerStatusPeriodic */
typedef long	 TimerStatusPeriodic_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimerStatusPeriodic;
asn_struct_free_f TimerStatusPeriodic_free;
asn_struct_print_f TimerStatusPeriodic_print;
asn_constr_check_f TimerStatusPeriodic_constraint;
ber_type_decoder_f TimerStatusPeriodic_decode_ber;
der_type_encoder_f TimerStatusPeriodic_encode_der;
xer_type_decoder_f TimerStatusPeriodic_decode_xer;
xer_type_encoder_f TimerStatusPeriodic_encode_xer;
per_type_decoder_f TimerStatusPeriodic_decode_uper;
per_type_encoder_f TimerStatusPeriodic_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimerStatusPeriodic_H_ */
#include <asn_internal.h>
