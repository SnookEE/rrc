/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_ServiceAccessInfo_r6_H_
#define	_MBMS_ServiceAccessInfo_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-ShortTransmissionID.h"
#include "MBMS-AccessProbabilityFactor.h"
#include "MBMS-ConnectedModeCountingScope.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-ServiceAccessInfo-r6 */
typedef struct MBMS_ServiceAccessInfo_r6 {
	MBMS_ShortTransmissionID_t	 shortTransmissionID;
	MBMS_AccessProbabilityFactor_t	 accessprobabilityFactor_Idle;
	MBMS_AccessProbabilityFactor_t	*accessprobabilityFactor_UraPCH	/* OPTIONAL */;
	MBMS_ConnectedModeCountingScope_t	 mbms_ConnectedModeCountingScope;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_ServiceAccessInfo_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_ServiceAccessInfo_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_ServiceAccessInfo_r6_H_ */
#include <asn_internal.h>
