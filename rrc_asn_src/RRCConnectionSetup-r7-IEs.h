/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRCConnectionSetup_r7_IEs_H_
#define	_RRCConnectionSetup_r7_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "U-RNTI.h"
#include "C-RNTI.h"
#include "H-RNTI.h"
#include "E-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "MaxAllowedUL-TX-Power.h"
#include "SRB-InformationSetupList2-r6.h"
#include <constr_SEQUENCE.h>
#include "PredefinedConfigIdentity.h"
#include "DefaultConfigMode.h"
#include "DefaultConfigIdentity-r6.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum specificationMode_PR {
	specificationMode_PR_NOTHING,	/* No components present */
	specificationMode_PR_complete,
	specificationMode_PR_preconfiguration
} specificationMode_PR;
typedef enum preConfigMode_PR {
	preConfigMode_PR_NOTHING,	/* No components present */
	preConfigMode_PR_predefinedConfigIdentity,
	preConfigMode_PR_defaultConfig
} preConfigMode_PR;

/* Forward declarations */
struct CapabilityUpdateRequirement_r5;
struct FrequencyInfo;
struct UL_DPCH_Info_r7;
struct UL_EDCH_Information_r6;
struct DL_HSPDSCH_Information_r7;
struct DL_CommonInformation_r7;
struct DL_InformationPerRL_List_r7;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r6;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r5;

/* RRCConnectionSetup-r7-IEs */
typedef struct RRCConnectionSetup_r7_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	U_RNTI_t	 new_U_RNTI;
	C_RNTI_t	*new_c_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	 utran_DRX_CycleLengthCoeff;
	struct CapabilityUpdateRequirement_r5	*capabilityUpdateRequirement	/* OPTIONAL */;
	struct specificationMode {
		specificationMode_PR present;
		union RRCConnectionSetup_r7_IEs__specificationMode_u {
			struct complete {
				SRB_InformationSetupList2_r6_t	 srb_InformationSetupList;
				struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
				struct UL_AddReconfTransChInfoList_r6	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
				struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
				struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} complete;
			struct preconfiguration {
				struct preConfigMode {
					preConfigMode_PR present;
					union RRCConnectionSetup_r7_IEs__specificationMode__preconfiguration__preConfigMode_u {
						PredefinedConfigIdentity_t	 predefinedConfigIdentity;
						struct defaultConfig {
							DefaultConfigMode_t	 defaultConfigMode;
							DefaultConfigIdentity_r6_t	 defaultConfigIdentity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} defaultConfig;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} preConfigMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} preconfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} specificationMode;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r7	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r6	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r7	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r7	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r7	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r7_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r7_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CapabilityUpdateRequirement-r5.h"
#include "FrequencyInfo.h"
#include "UL-DPCH-Info-r7.h"
#include "UL-EDCH-Information-r6.h"
#include "DL-HSPDSCH-Information-r7.h"
#include "DL-CommonInformation-r7.h"
#include "DL-InformationPerRL-List-r7.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-AddReconfTransChInfoList-r6.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-AddReconfTransChInfoList-r5.h"

#endif	/* _RRCConnectionSetup_r7_IEs_H_ */
#include <asn_internal.h>
