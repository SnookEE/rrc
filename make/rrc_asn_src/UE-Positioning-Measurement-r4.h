/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_Measurement_r4_H_
#define	_UE_Positioning_Measurement_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-ReportingQuantity-r4.h"
#include "UE-Positioning-ReportCriteria.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementValidity;
struct UE_Positioning_OTDOA_AssistanceData_r4;
struct UE_Positioning_GPS_AssistanceData;

/* UE-Positioning-Measurement-r4 */
typedef struct UE_Positioning_Measurement_r4 {
	UE_Positioning_ReportingQuantity_r4_t	 ue_positioning_ReportingQuantity;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	UE_Positioning_ReportCriteria_t	 reportCriteria;
	struct UE_Positioning_OTDOA_AssistanceData_r4	*ue_positioning_OTDOA_AssistanceData	/* OPTIONAL */;
	struct UE_Positioning_GPS_AssistanceData	*ue_positioning_GPS_AssistanceData	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_Measurement_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_Measurement_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementValidity.h"
#include "UE-Positioning-OTDOA-AssistanceData-r4.h"
#include "UE-Positioning-GPS-AssistanceData.h"

#endif	/* _UE_Positioning_Measurement_r4_H_ */
#include <asn_internal.h>
