/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TrafficVolumeMeasurementObjectList_H_
#define	_TrafficVolumeMeasurementObjectList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_TrCH_Identity;

/* TrafficVolumeMeasurementObjectList */
typedef struct TrafficVolumeMeasurementObjectList {
	A_SEQUENCE_OF(struct UL_TrCH_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeMeasurementObjectList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasurementObjectList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-TrCH-Identity.h"

#endif	/* _TrafficVolumeMeasurementObjectList_H_ */
#include <asn_internal.h>
