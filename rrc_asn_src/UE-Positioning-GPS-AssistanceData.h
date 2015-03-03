/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_GPS_AssistanceData_H_
#define	_UE_Positioning_GPS_AssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_ReferenceTime;
struct ReferenceLocation;
struct UE_Positioning_GPS_DGPS_Corrections;
struct UE_Positioning_GPS_NavigationModel;
struct UE_Positioning_GPS_IonosphericModel;
struct UE_Positioning_GPS_UTC_Model;
struct UE_Positioning_GPS_Almanac;
struct UE_Positioning_GPS_AcquisitionAssistance;
struct BadSatList;
struct UE_Positioning_GPS_ReferenceCellInfo;

/* UE-Positioning-GPS-AssistanceData */
typedef struct UE_Positioning_GPS_AssistanceData {
	struct UE_Positioning_GPS_ReferenceTime	*ue_positioning_GPS_ReferenceTime	/* OPTIONAL */;
	struct ReferenceLocation	*ue_positioning_GPS_ReferenceLocation	/* OPTIONAL */;
	struct UE_Positioning_GPS_DGPS_Corrections	*ue_positioning_GPS_DGPS_Corrections	/* OPTIONAL */;
	struct UE_Positioning_GPS_NavigationModel	*ue_positioning_GPS_NavigationModel	/* OPTIONAL */;
	struct UE_Positioning_GPS_IonosphericModel	*ue_positioning_GPS_IonosphericModel	/* OPTIONAL */;
	struct UE_Positioning_GPS_UTC_Model	*ue_positioning_GPS_UTC_Model	/* OPTIONAL */;
	struct UE_Positioning_GPS_Almanac	*ue_positioning_GPS_Almanac	/* OPTIONAL */;
	struct UE_Positioning_GPS_AcquisitionAssistance	*ue_positioning_GPS_AcquisitionAssistance	/* OPTIONAL */;
	struct BadSatList	*ue_positioning_GPS_Real_timeIntegrity	/* OPTIONAL */;
	struct UE_Positioning_GPS_ReferenceCellInfo	*dummy	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_AssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AssistanceData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-ReferenceTime.h"
#include "ReferenceLocation.h"
#include "UE-Positioning-GPS-DGPS-Corrections.h"
#include "UE-Positioning-GPS-NavigationModel.h"
#include "UE-Positioning-GPS-IonosphericModel.h"
#include "UE-Positioning-GPS-UTC-Model.h"
#include "UE-Positioning-GPS-Almanac.h"
#include "UE-Positioning-GPS-AcquisitionAssistance.h"
#include "BadSatList.h"
#include "UE-Positioning-GPS-ReferenceCellInfo.h"

#endif	/* _UE_Positioning_GPS_AssistanceData_H_ */
#include <asn_internal.h>