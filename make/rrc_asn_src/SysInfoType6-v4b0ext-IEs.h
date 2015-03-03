/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType6_v4b0ext_IEs_H_
#define	_SysInfoType6_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OpenLoopPowerControl_IPDL_TDD_r4;
struct PRACH_SystemInformationList_LCR_r4;
struct PUSCH_SysInfoList_SFN_LCR_r4;
struct PDSCH_SysInfoList_SFN_LCR_r4;
struct PrimaryCCPCH_Info_LCR_r4_ext;
struct SCCPCH_SystemInformationList_LCR_r4_ext;

/* SysInfoType6-v4b0ext-IEs */
typedef struct SysInfoType6_v4b0ext_IEs {
	struct OpenLoopPowerControl_IPDL_TDD_r4	*openLoopPowerControl_IPDL_TDD	/* OPTIONAL */;
	struct PRACH_SystemInformationList_LCR_r4	*prach_SystemInformationList_LCR_r4	/* OPTIONAL */;
	struct tdd128SpecificInfo {
		struct PUSCH_SysInfoList_SFN_LCR_r4	*pusch_SysInfoList_SFN	/* OPTIONAL */;
		struct PDSCH_SysInfoList_SFN_LCR_r4	*pdsch_SysInfoList_SFN	/* OPTIONAL */;
		struct PrimaryCCPCH_Info_LCR_r4_ext	*pCCPCH_LCR_Extensions	/* OPTIONAL */;
		struct SCCPCH_SystemInformationList_LCR_r4_ext	*sCCPCH_LCR_ExtensionsList	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd128SpecificInfo;
	RadioFrequencyBandFDD_t	*frequencyBandIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType6_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType6_v4b0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OpenLoopPowerControl-IPDL-TDD-r4.h"
#include "PRACH-SystemInformationList-LCR-r4.h"
#include "PUSCH-SysInfoList-SFN-LCR-r4.h"
#include "PDSCH-SysInfoList-SFN-LCR-r4.h"
#include "PrimaryCCPCH-Info-LCR-r4-ext.h"
#include "SCCPCH-SystemInformationList-LCR-r4-ext.h"

#endif	/* _SysInfoType6_v4b0ext_IEs_H_ */
#include <asn_internal.h>
