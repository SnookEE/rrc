/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PrimaryCPICH_Info_H_
#define	_PrimaryCPICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryScramblingCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrimaryCPICH-Info */
typedef struct PrimaryCPICH_Info {
	PrimaryScramblingCode_t	 primaryScramblingCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrimaryCPICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrimaryCPICH_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _PrimaryCPICH_Info_H_ */
#include <asn_internal.h>
