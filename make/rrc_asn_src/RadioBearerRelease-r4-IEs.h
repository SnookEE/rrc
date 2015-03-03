/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerRelease_r4_IEs_H_
#define	_RadioBearerRelease_r4_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "C-RNTI.h"
#include "DSCH-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "CN-DomainIdentity.h"
#include "URA-Identity.h"
#include "RB-InformationReleaseList.h"
#include "MaxAllowedUL-TX-Power.h"
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
typedef enum modeSpecificPhysChInfo_PR {
	modeSpecificPhysChInfo_PR_NOTHING,	/* No components present */
	modeSpecificPhysChInfo_PR_fdd,
	modeSpecificPhysChInfo_PR_tdd
} modeSpecificPhysChInfo_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo;
struct RAB_InformationReconfigList;
struct RB_InformationAffectedList;
struct DL_CounterSynchronisationInfo;
struct UL_CommonTransChInfo_r4;
struct UL_DeletedTransChInfoList;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo_r4;
struct DL_DeletedTransChInfoList;
struct DL_AddReconfTransChInfoList_r4;
struct FrequencyInfo;
struct UL_ChannelRequirement_r4;
struct DL_CommonInformation_r4;
struct DL_InformationPerRL_List_r4;
struct DRAC_StaticInformationList;
struct DL_PDSCH_Information;

/* RadioBearerRelease-r4-IEs */
typedef struct RadioBearerRelease_r4_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo	*cn_InformationInfo	/* OPTIONAL */;
	CN_DomainIdentity_t	*signallingConnectionRelIndication	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct RAB_InformationReconfigList	*rab_InformationReconfigList	/* OPTIONAL */;
	RB_InformationReleaseList_t	 rb_InformationReleaseList;
	struct RB_InformationAffectedList	*rb_InformationAffectedList	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_DeletedTransChInfoList	*ul_deletedTransChInfoList	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct dummy {
		dummy_PR present;
		union RadioBearerRelease_r4_IEs__dummy_u {
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
	struct DL_DeletedTransChInfoList	*dl_DeletedTransChInfoList	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r4	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement_r4	*ul_ChannelRequirement	/* OPTIONAL */;
	struct modeSpecificPhysChInfo {
		modeSpecificPhysChInfo_PR present;
		union RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo_u {
			struct fdd {
				struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificPhysChInfo;
	struct DL_CommonInformation_r4	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r4	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_r4_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_r4_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo.h"
#include "RAB-InformationReconfigList.h"
#include "RB-InformationAffectedList.h"
#include "DL-CounterSynchronisationInfo.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-DeletedTransChInfoList.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-DeletedTransChInfoList.h"
#include "DL-AddReconfTransChInfoList-r4.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirement-r4.h"
#include "DL-CommonInformation-r4.h"
#include "DL-InformationPerRL-List-r4.h"
#include "DRAC-StaticInformationList.h"
#include "DL-PDSCH-Information.h"

#endif	/* _RadioBearerRelease_r4_IEs_H_ */
#include <asn_internal.h>
