/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMSCommonPTMRBInformation_H_
#define	_MBMSCommonPTMRBInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-CommonRBInformationList-r6.h"
#include "MBMS-TranspChInfoForEachTrCh-r6.h"
#include "MBMS-PhyChInformationList-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_TranspChInfoForEachCCTrCh_r6;

/* MBMSCommonPTMRBInformation */
typedef struct MBMSCommonPTMRBInformation {
	MBMS_CommonRBInformationList_r6_t	 mbms_CommonRBInformationList;
	MBMS_TranspChInfoForEachTrCh_r6_t	 mbms_TranspChInfoForEachTrCh;
	struct MBMS_TranspChInfoForEachCCTrCh_r6	*mbms_TranspChInfoForEachCCTrCh	/* OPTIONAL */;
	MBMS_PhyChInformationList_r6_t	 mbms_PhyChInformationList;
	struct nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSCommonPTMRBInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSCommonPTMRBInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-TranspChInfoForEachCCTrCh-r6.h"

#endif	/* _MBMSCommonPTMRBInformation_H_ */
#include <asn_internal.h>