/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TrafficVolumeMeasuredResultsList_H_
#define	_TrafficVolumeMeasuredResultsList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrafficVolumeMeasuredResults;

/* TrafficVolumeMeasuredResultsList */
typedef struct TrafficVolumeMeasuredResultsList {
	A_SEQUENCE_OF(struct TrafficVolumeMeasuredResults) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeMeasuredResultsList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasuredResultsList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrafficVolumeMeasuredResults.h"

#endif	/* _TrafficVolumeMeasuredResultsList_H_ */
#include <asn_internal.h>
