/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TrafficVolumeReportingCriteria_H_
#define	_TrafficVolumeReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransChCriteriaList;

/* TrafficVolumeReportingCriteria */
typedef struct TrafficVolumeReportingCriteria {
	struct TransChCriteriaList	*transChCriteriaList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeReportingCriteria;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TransChCriteriaList.h"

#endif	/* _TrafficVolumeReportingCriteria_H_ */
#include <asn_internal.h>
