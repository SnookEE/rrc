/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompressedModeMeasCapability_LCR_r4_H_
#define	_CompressedModeMeasCapability_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompressedModeMeasCapability-LCR-r4 */
typedef struct CompressedModeMeasCapability_LCR_r4 {
	BOOLEAN_t	*tdd128_Measurements	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapability_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapability_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _CompressedModeMeasCapability_LCR_r4_H_ */
#include <asn_internal.h>
