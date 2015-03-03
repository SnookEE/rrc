/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompressedModeMeasCapability_r4_H_
#define	_CompressedModeMeasCapability_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_Measurements;

/* CompressedModeMeasCapability-r4 */
typedef struct CompressedModeMeasCapability_r4 {
	BOOLEAN_t	 fdd_Measurements;
	BOOLEAN_t	*tdd384_Measurements	/* OPTIONAL */;
	BOOLEAN_t	*tdd128_Measurements	/* OPTIONAL */;
	struct GSM_Measurements	*gsm_Measurements	/* OPTIONAL */;
	BOOLEAN_t	*multiCarrierMeasurements	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapability_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapability_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSM-Measurements.h"

#endif	/* _CompressedModeMeasCapability_r4_H_ */
#include <asn_internal.h>
