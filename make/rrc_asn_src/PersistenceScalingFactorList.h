/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PersistenceScalingFactorList_H_
#define	_PersistenceScalingFactorList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PersistenceScalingFactor.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PersistenceScalingFactorList */
typedef struct PersistenceScalingFactorList {
	A_SEQUENCE_OF(PersistenceScalingFactor_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PersistenceScalingFactorList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersistenceScalingFactorList;

#ifdef __cplusplus
}
#endif

#endif	/* _PersistenceScalingFactorList_H_ */
#include <asn_internal.h>
