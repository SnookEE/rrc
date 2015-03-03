/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType5_H_
#define	_SysInfoType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "PICH-PowerOffset.h"
#include "PRACH-SystemInformationList.h"
#include "SCCPCH-SystemInformationList.h"
#include "AICH-PowerOffset.h"
#include <constr_SEQUENCE.h>
#include "OpenLoopPowerControl-TDD.h"
#include <constr_CHOICE.h>
#include "SysInfoType5-v690ext-IEs.h"
#include "SysInfoType5-v7xyext-IEs.h"

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
struct CBS_DRX_Level1Information;
struct PUSCH_SysInfoList_SFN;
struct PDSCH_SysInfoList_SFN;
struct SysInfoType5_v4b0ext_IEs;
struct SysInfoType5_v590ext_IEs;
struct SysInfoType5_v650ext_IEs;
struct SysInfoType5_v680ext_IEs;

/* SysInfoType5 */
typedef struct SysInfoType5 {
	BOOLEAN_t	 sib6indicator;
	PICH_PowerOffset_t	 pich_PowerOffset;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union SysInfoType5__modeSpecificInfo_u {
			struct fdd {
				AICH_PowerOffset_t	 aich_PowerOffset;
				
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
	PRACH_SystemInformationList_t	 prach_SystemInformationList;
	SCCPCH_SystemInformationList_t	 sCCPCH_SystemInformationList;
	struct CBS_DRX_Level1Information	*cbs_DRX_Level1Information	/* OPTIONAL */;
	struct v4b0NonCriticalExtensions {
		struct SysInfoType5_v4b0ext_IEs	*sysInfoType5_v4b0ext	/* OPTIONAL */;
		struct v590NonCriticalExtensions {
			struct SysInfoType5_v590ext_IEs	*sysInfoType5_v590ext	/* OPTIONAL */;
			struct v650NonCriticalExtensions {
				struct SysInfoType5_v650ext_IEs	*sysInfoType5_v650ext	/* OPTIONAL */;
				struct v680NonCriticalExtensions {
					struct SysInfoType5_v680ext_IEs	*sysInfoType5_v680ext	/* OPTIONAL */;
					struct v690NonCriticalExtensions {
						SysInfoType5_v690ext_IEs_t	 sysInfoType5_v690ext;
						struct v7xyNonCriticalExtensions {
							SysInfoType5_v7xyext_IEs_t	 sysInfoType5_v7xyext;
							struct nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v7xyNonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v690NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v680NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v650NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrimaryCCPCH-Info.h"
#include "CBS-DRX-Level1Information.h"
#include "PUSCH-SysInfoList-SFN.h"
#include "PDSCH-SysInfoList-SFN.h"
#include "SysInfoType5-v4b0ext-IEs.h"
#include "SysInfoType5-v590ext-IEs.h"
#include "SysInfoType5-v650ext-IEs.h"
#include "SysInfoType5-v680ext-IEs.h"

#endif	/* _SysInfoType5_H_ */
#include <asn_internal.h>
