/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_GPS_ReferenceTime_H_
#define	_UE_Positioning_GPS_ReferenceTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GPS-TOW-1msec.h"
#include "SFN-TOW-Uncertainty.h"
#include "UTRAN-GPS-DriftRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UTRAN_GPSReferenceTime;
struct GPS_TOW_AssistList;

/* UE-Positioning-GPS-ReferenceTime */
typedef struct UE_Positioning_GPS_ReferenceTime {
	long	 gps_Week;
	GPS_TOW_1msec_t	 gps_tow_1msec;
	struct UTRAN_GPSReferenceTime	*utran_GPSReferenceTime	/* OPTIONAL */;
	SFN_TOW_Uncertainty_t	*sfn_tow_Uncertainty	/* OPTIONAL */;
	UTRAN_GPS_DriftRate_t	*utran_GPS_DriftRate	/* OPTIONAL */;
	struct GPS_TOW_AssistList	*gps_TOW_AssistList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_ReferenceTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_ReferenceTime;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UTRAN-GPSReferenceTime.h"
#include "GPS-TOW-AssistList.h"

#endif	/* _UE_Positioning_GPS_ReferenceTime_H_ */
#include <asn_internal.h>