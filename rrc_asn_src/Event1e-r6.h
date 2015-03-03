/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Event1e_r6_H_
#define	_Event1e_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TriggeringCondition2.h"
#include "ThresholdUsedFrequency-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Event1e-r6 */
typedef struct Event1e_r6 {
	TriggeringCondition2_t	 triggeringCondition;
	ThresholdUsedFrequency_r6_t	 thresholdUsedFrequency;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1e_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1e_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _Event1e_r6_H_ */
#include <asn_internal.h>