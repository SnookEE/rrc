/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATReportingCriteria_H_
#define	_InterRATReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterRATEventList;

/* InterRATReportingCriteria */
typedef struct InterRATReportingCriteria {
	struct InterRATEventList	*interRATEventList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATReportingCriteria;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterRATEventList.h"

#endif	/* _InterRATReportingCriteria_H_ */
#include <asn_internal.h>
