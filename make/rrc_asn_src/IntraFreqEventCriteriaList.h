/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqEventCriteriaList_H_
#define	_IntraFreqEventCriteriaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteria;

/* IntraFreqEventCriteriaList */
typedef struct IntraFreqEventCriteriaList {
	A_SEQUENCE_OF(struct IntraFreqEventCriteria) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventCriteriaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventCriteriaList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteria.h"

#endif	/* _IntraFreqEventCriteriaList_H_ */
#include <asn_internal.h>
