/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_DPCH_PowerControlInfo_r4_H_
#define	_UL_DPCH_PowerControlInfo_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DPCCH-PowerOffset.h"
#include "PC-Preamble.h"
#include "SRB-delay.h"
#include "PowerControlAlgorithm.h"
#include <constr_SEQUENCE.h>
#include "UL-TargetSIR.h"
#include <NULL.h>
#include "PrimaryCCPCH-TX-Power.h"
#include "IndividualTS-InterferenceList.h"
#include "ConstantValue.h"
#include "TPC-StepSizeTDD.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DPCH_PowerControlInfo_r4_PR {
	UL_DPCH_PowerControlInfo_r4_PR_NOTHING,	/* No components present */
	UL_DPCH_PowerControlInfo_r4_PR_fdd,
	UL_DPCH_PowerControlInfo_r4_PR_tdd
} UL_DPCH_PowerControlInfo_r4_PR;
typedef enum ul_OL_PC_Signalling_PR {
	ul_OL_PC_Signalling_PR_NOTHING,	/* No components present */
	ul_OL_PC_Signalling_PR_broadcast_UL_OL_PC_info,
	ul_OL_PC_Signalling_PR_individuallySignalled
} ul_OL_PC_Signalling_PR;
typedef enum tddOption_PR {
	tddOption_PR_NOTHING,	/* No components present */
	tddOption_PR_tdd384,
	tddOption_PR_tdd128
} tddOption_PR;

/* UL-DPCH-PowerControlInfo-r4 */
typedef struct UL_DPCH_PowerControlInfo_r4 {
	UL_DPCH_PowerControlInfo_r4_PR present;
	union UL_DPCH_PowerControlInfo_r4_u {
		struct fdd {
			DPCCH_PowerOffset_t	 dpcch_PowerOffset;
			PC_Preamble_t	 pc_Preamble;
			SRB_delay_t	 sRB_delay;
			PowerControlAlgorithm_t	 powerControlAlgorithm;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct tdd {
			UL_TargetSIR_t	*ul_TargetSIR	/* OPTIONAL */;
			struct ul_OL_PC_Signalling {
				ul_OL_PC_Signalling_PR present;
				union UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_u {
					NULL_t	 broadcast_UL_OL_PC_info;
					struct individuallySignalled {
						struct tddOption {
							tddOption_PR present;
							union UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_u {
								struct tdd384 {
									IndividualTS_InterferenceList_t	 individualTS_InterferenceList;
									ConstantValue_t	 dpch_ConstantValue;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd384;
								struct tdd128 {
									TPC_StepSizeTDD_t	 tpc_StepSize;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd128;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tddOption;
						PrimaryCCPCH_TX_Power_t	 primaryCCPCH_TX_Power;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} individuallySignalled;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ul_OL_PC_Signalling;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_PowerControlInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfo_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DPCH_PowerControlInfo_r4_H_ */
#include <asn_internal.h>
