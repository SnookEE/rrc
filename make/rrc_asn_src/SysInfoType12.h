/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType12_H_
#define	_SysInfoType12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementControlSysInfo.h"
#include "SysInfoType12-v590ext-IEs.h"
#include "SysInfoType12-v690ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FACH_MeasurementOccasionInfo;
struct SysInfoType12_v4b0ext_IEs;

/* SysInfoType12 */
typedef struct SysInfoType12 {
	struct FACH_MeasurementOccasionInfo	*fach_MeasurementOccasionInfo	/* OPTIONAL */;
	MeasurementControlSysInfo_t	 measurementControlSysInfo;
	struct v4b0NonCriticalExtensions {
		struct SysInfoType12_v4b0ext_IEs	*sysInfoType12_v4b0ext	/* OPTIONAL */;
		struct v590NonCriticalExtension {
			SysInfoType12_v590ext_IEs_t	 sysInfoType12_v590ext;
			struct v690NonCriticalExtensions {
				SysInfoType12_v690ext_IEs_t	 sysInfoType12_v690ext;
				struct nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v690NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtension;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FACH-MeasurementOccasionInfo.h"
#include "SysInfoType12-v4b0ext-IEs.h"

#endif	/* _SysInfoType12_H_ */
#include <asn_internal.h>
