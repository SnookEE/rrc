/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TrafficVolumeMeasSysInfo_H_
#define	_TrafficVolumeMeasSysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementIdentity.h"
#include "MeasurementReportingMode.h"
#include "TrafficVolumeReportCriteriaSysInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrafficVolumeMeasurementObjectList;
struct TrafficVolumeMeasQuantity;
struct TrafficVolumeReportingQuantity;
struct TrafficVolumeReportingCriteria;
struct MeasurementValidity;

/* TrafficVolumeMeasSysInfo */
typedef struct TrafficVolumeMeasSysInfo {
	MeasurementIdentity_t	*trafficVolumeMeasurementID	/* DEFAULT 4 */;
	struct TrafficVolumeMeasurementObjectList	*trafficVolumeMeasurementObjectList	/* OPTIONAL */;
	struct TrafficVolumeMeasQuantity	*trafficVolumeMeasQuantity	/* OPTIONAL */;
	struct TrafficVolumeReportingQuantity	*trafficVolumeReportingQuantity	/* OPTIONAL */;
	struct TrafficVolumeReportingCriteria	*dummy	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	MeasurementReportingMode_t	 measurementReportingMode;
	TrafficVolumeReportCriteriaSysInfo_t	 reportCriteriaSysInf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeMeasSysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasSysInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrafficVolumeMeasurementObjectList.h"
#include "TrafficVolumeMeasQuantity.h"
#include "TrafficVolumeReportingQuantity.h"
#include "TrafficVolumeReportingCriteria.h"
#include "MeasurementValidity.h"

#endif	/* _TrafficVolumeMeasSysInfo_H_ */
#include <asn_internal.h>
