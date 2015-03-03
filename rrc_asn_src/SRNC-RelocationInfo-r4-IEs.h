/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_SRNC_RelocationInfo_r4_IEs_H_
#define	_SRNC_RelocationInfo_r4_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include "StateOfRRC.h"
#include "StateOfRRC-Procedure.h"
#include "CipheringStatusList-r4.h"
#include "CN-DomainIdentity.h"
#include "IntegrityProtectionStatus.h"
#include "SRB-SpecificIntegrityProtInfoList.h"
#include "ImplementationSpecificParams.h"
#include "U-RNTI.h"
#include "C-RNTI.h"
#include "UE-RadioAccessCapability-r4.h"
#include "UESpecificBehaviourInformation1idle.h"
#include "UESpecificBehaviourInformation1interRAT.h"
#include "URA-Identity.h"
#include "NAS-SystemInformationGSM-MAP.h"
#include "PredefinedConfigStatusList.h"
#include "SRB-InformationSetupList.h"
#include <NULL.h>
#include "CPCH-SetID.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum dummy_PR {
	dummy_PR_NOTHING,	/* No components present */
	dummy_PR_fdd,
	dummy_PR_tdd
} dummy_PR;

/* Forward declarations */
struct CalculationTimeForCiphering;
struct COUNT_C_List;
struct CipheringInfoPerRB_List_r4;
struct UE_RadioAccessCapabBandFDDList;
struct UE_Positioning_LastKnownPos;
struct InterRAT_UE_RadioAccessCapabilityList;
struct CN_DomainInformationListFull;
struct OngoingMeasRepList_r4;
struct RAB_InformationSetupList_r4;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r4;
struct MeasurementReport;
struct FailureCauseWithProtErr;
struct DRAC_StaticInformationList;

/* SRNC-RelocationInfo-r4-IEs */
typedef struct SRNC_RelocationInfo_r4_IEs {
	RB_Identity_t	*rb_IdentityForHOMessage	/* OPTIONAL */;
	StateOfRRC_t	 stateOfRRC;
	StateOfRRC_Procedure_t	 stateOfRRC_Procedure;
	CipheringStatusList_r4_t	 cipheringStatusList;
	CN_DomainIdentity_t	 latestConfiguredCN_Domain;
	struct CalculationTimeForCiphering	*calculationTimeForCiphering	/* OPTIONAL */;
	struct COUNT_C_List	*count_C_List	/* OPTIONAL */;
	struct CipheringInfoPerRB_List_r4	*cipheringInfoPerRB_List	/* OPTIONAL */;
	IntegrityProtectionStatus_t	 integrityProtectionStatus;
	SRB_SpecificIntegrityProtInfoList_t	 srb_SpecificIntegrityProtInfo;
	ImplementationSpecificParams_t	*implementationSpecificParams	/* OPTIONAL */;
	U_RNTI_t	 u_RNTI;
	C_RNTI_t	*c_RNTI	/* OPTIONAL */;
	UE_RadioAccessCapability_r4_t	 ue_RadioAccessCapability;
	struct UE_RadioAccessCapabBandFDDList	*ue_RadioAccessCapability_ext	/* OPTIONAL */;
	struct UE_Positioning_LastKnownPos	*ue_Positioning_LastKnownPos	/* OPTIONAL */;
	UESpecificBehaviourInformation1idle_t	*uESpecificBehaviourInformation1idle	/* OPTIONAL */;
	UESpecificBehaviourInformation1interRAT_t	*uESpecificBehaviourInformation1interRAT	/* OPTIONAL */;
	struct InterRAT_UE_RadioAccessCapabilityList	*ue_RATSpecificCapability	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	 cn_CommonGSM_MAP_NAS_SysInfo;
	struct CN_DomainInformationListFull	*cn_DomainInformationList	/* OPTIONAL */;
	struct OngoingMeasRepList_r4	*ongoingMeasRepList	/* OPTIONAL */;
	PredefinedConfigStatusList_t	 predefinedConfigStatusList;
	SRB_InformationSetupList_t	 srb_InformationList;
	struct RAB_InformationSetupList_r4	*rab_InformationList	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_TransChInfoList	/* OPTIONAL */;
	struct dummy {
		dummy_PR present;
		union SRNC_RelocationInfo_r4_IEs__dummy_u {
			struct fdd {
				CPCH_SetID_t	*dummy1	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r4	*dl_TransChInfoList	/* OPTIONAL */;
	struct MeasurementReport	*measurementReport	/* OPTIONAL */;
	struct FailureCauseWithProtErr	*failureCause	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r4_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r4_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CalculationTimeForCiphering.h"
#include "COUNT-C-List.h"
#include "CipheringInfoPerRB-List-r4.h"
#include "UE-RadioAccessCapabBandFDDList.h"
#include "UE-Positioning-LastKnownPos.h"
#include "InterRAT-UE-RadioAccessCapabilityList.h"
#include "CN-DomainInformationListFull.h"
#include "OngoingMeasRepList-r4.h"
#include "RAB-InformationSetupList-r4.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-AddReconfTransChInfoList-r4.h"
#include "MeasurementReport.h"
#include "FailureCauseWithProtErr.h"
#include "DRAC-StaticInformationList.h"

#endif	/* _SRNC_RelocationInfo_r4_IEs_H_ */
#include <asn_internal.h>
