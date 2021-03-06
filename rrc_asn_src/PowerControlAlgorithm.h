/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PowerControlAlgorithm_H_
#define	_PowerControlAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TPC-StepSizeFDD.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowerControlAlgorithm_PR {
	PowerControlAlgorithm_PR_NOTHING,	/* No components present */
	PowerControlAlgorithm_PR_algorithm1,
	PowerControlAlgorithm_PR_algorithm2
} PowerControlAlgorithm_PR;

/* PowerControlAlgorithm */
typedef struct PowerControlAlgorithm {
	PowerControlAlgorithm_PR present;
	union PowerControlAlgorithm_u {
		TPC_StepSizeFDD_t	 algorithm1;
		NULL_t	 algorithm2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerControlAlgorithm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PowerControlAlgorithm;

#ifdef __cplusplus
}
#endif

#endif	/* _PowerControlAlgorithm_H_ */
#include <asn_internal.h>
