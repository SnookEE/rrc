/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_GSM_Measurements_H_
#define	_GSM_Measurements_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-Measurements */
typedef struct GSM_Measurements {
	BOOLEAN_t	 gsm900;
	BOOLEAN_t	 dcs1800;
	BOOLEAN_t	 gsm1900;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_Measurements_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_Measurements;

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_Measurements_H_ */
#include <asn_internal.h>