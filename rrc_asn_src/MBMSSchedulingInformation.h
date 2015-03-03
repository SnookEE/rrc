/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMSSchedulingInformation_H_
#define	_MBMSSchedulingInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-ServiceSchedulingInfoList-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMSSchedulingInformation */
typedef struct MBMSSchedulingInformation {
	MBMS_ServiceSchedulingInfoList_r6_t	 serviceSchedulingInfoList;
	struct nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSSchedulingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSSchedulingInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMSSchedulingInformation_H_ */
#include <asn_internal.h>
