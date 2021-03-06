/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType6_H_
#define	_SysInfoType6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PICH-PowerOffset.h"
#include "AICH-PowerOffset.h"
#include "CSICH-PowerOffset.h"
#include <constr_SEQUENCE.h>
#include "OpenLoopPowerControl-TDD.h"
#include <constr_CHOICE.h>
#include "SysInfoType6-v690ext-IEs.h"
#include "SysInfoType6-v7xyext-IEs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* Forward declarations */
struct PrimaryCCPCH_Info;
struct PRACH_SystemInformationList;
struct SCCPCH_SystemInformationList;
struct CBS_DRX_Level1Information;
struct PUSCH_SysInfoList_SFN;
struct PDSCH_SysInfoList_SFN;
struct SysInfoType6_v4b0ext_IEs;
struct SysInfoType6_v590ext_IEs;
struct SysInfoType6_v650ext_IEs;

/* SysInfoType6 */
typedef struct SysInfoType6 {
	PICH_PowerOffset_t	 pich_PowerOffset;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union SysInfoType6__modeSpecificInfo_u {
			struct fdd {
				AICH_PowerOffset_t	 aich_PowerOffset;
				CSICH_PowerOffset_t	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				struct PUSCH_SysInfoList_SFN	*pusch_SysInfoList_SFN	/* OPTIONAL */;
				struct PDSCH_SysInfoList_SFN	*pdsch_SysInfoList_SFN	/* OPTIONAL */;
				OpenLoopPowerControl_TDD_t	 openLoopPowerControl_TDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct PrimaryCCPCH_Info	*primaryCCPCH_Info	/* OPTIONAL */;
	struct PRACH_SystemInformationList	*prach_SystemInformationList	/* OPTIONAL */;
	struct SCCPCH_SystemInformationList	*sCCPCH_SystemInformationList	/* OPTIONAL */;
	struct CBS_DRX_Level1Information	*cbs_DRX_Level1Information	/* OPTIONAL */;
	struct v4b0NonCriticalExtensions {
		struct SysInfoType6_v4b0ext_IEs	*sysInfoType6_v4b0ext	/* OPTIONAL */;
		struct v590NonCriticalExtensions {
			struct SysInfoType6_v590ext_IEs	*sysInfoType6_v590ext	/* OPTIONAL */;
			struct v650nonCriticalExtensions {
				struct SysInfoType6_v650ext_IEs	*sysInfoType6_v650ext	/* OPTIONAL */;
				struct v690nonCriticalExtensions {
					SysInfoType6_v690ext_IEs_t	 sysInfoType6_v690ext;
					struct v7xyNonCriticalExtensions {
						SysInfoType6_v7xyext_IEs_t	 sysInfoType6_v7xyext;
						struct nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v7xyNonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v650nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrimaryCCPCH-Info.h"
#include "PRACH-SystemInformationList.h"
#include "SCCPCH-SystemInformationList.h"
#include "CBS-DRX-Level1Information.h"
#include "PUSCH-SysInfoList-SFN.h"
#include "PDSCH-SysInfoList-SFN.h"
#include "SysInfoType6-v4b0ext-IEs.h"
#include "SysInfoType6-v590ext-IEs.h"
#include "SysInfoType6-v650ext-IEs.h"

#endif	/* _SysInfoType6_H_ */
#include <asn_internal.h>
