/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_AccessProbabilityFactor_H_
#define	_MBMS_AccessProbabilityFactor_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_AccessProbabilityFactor {
	MBMS_AccessProbabilityFactor_apf0	= 0,
	MBMS_AccessProbabilityFactor_apf32	= 1,
	MBMS_AccessProbabilityFactor_apf64	= 2,
	MBMS_AccessProbabilityFactor_apf96	= 3,
	MBMS_AccessProbabilityFactor_apf128	= 4,
	MBMS_AccessProbabilityFactor_apf160	= 5,
	MBMS_AccessProbabilityFactor_apf192	= 6,
	MBMS_AccessProbabilityFactor_apf224	= 7,
	MBMS_AccessProbabilityFactor_apf256	= 8,
	MBMS_AccessProbabilityFactor_apf288	= 9,
	MBMS_AccessProbabilityFactor_apf320	= 10,
	MBMS_AccessProbabilityFactor_apf352	= 11,
	MBMS_AccessProbabilityFactor_apf384	= 12,
	MBMS_AccessProbabilityFactor_apf416	= 13,
	MBMS_AccessProbabilityFactor_apf448	= 14,
	MBMS_AccessProbabilityFactor_apf480	= 15,
	MBMS_AccessProbabilityFactor_apf512	= 16,
	MBMS_AccessProbabilityFactor_apf544	= 17,
	MBMS_AccessProbabilityFactor_apf576	= 18,
	MBMS_AccessProbabilityFactor_apf608	= 19,
	MBMS_AccessProbabilityFactor_apf640	= 20,
	MBMS_AccessProbabilityFactor_apf672	= 21,
	MBMS_AccessProbabilityFactor_apf704	= 22,
	MBMS_AccessProbabilityFactor_apf736	= 23,
	MBMS_AccessProbabilityFactor_apf768	= 24,
	MBMS_AccessProbabilityFactor_apf800	= 25,
	MBMS_AccessProbabilityFactor_apf832	= 26,
	MBMS_AccessProbabilityFactor_apf864	= 27,
	MBMS_AccessProbabilityFactor_apf896	= 28,
	MBMS_AccessProbabilityFactor_apf928	= 29,
	MBMS_AccessProbabilityFactor_apf960	= 30,
	MBMS_AccessProbabilityFactor_apf1000	= 31
} e_MBMS_AccessProbabilityFactor;

/* MBMS-AccessProbabilityFactor */
typedef long	 MBMS_AccessProbabilityFactor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_AccessProbabilityFactor;
asn_struct_free_f MBMS_AccessProbabilityFactor_free;
asn_struct_print_f MBMS_AccessProbabilityFactor_print;
asn_constr_check_f MBMS_AccessProbabilityFactor_constraint;
ber_type_decoder_f MBMS_AccessProbabilityFactor_decode_ber;
der_type_encoder_f MBMS_AccessProbabilityFactor_encode_der;
xer_type_decoder_f MBMS_AccessProbabilityFactor_decode_xer;
xer_type_encoder_f MBMS_AccessProbabilityFactor_encode_xer;
per_type_decoder_f MBMS_AccessProbabilityFactor_decode_uper;
per_type_encoder_f MBMS_AccessProbabilityFactor_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_AccessProbabilityFactor_H_ */
#include <asn_internal.h>
