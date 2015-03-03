/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellInfoSI_HCS_RSCP_H_
#define	_CellInfoSI_HCS_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIndividualOffset.h"
#include "PrimaryCPICH-TX-Power.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "PrimaryCCPCH-Info.h"
#include "PrimaryCCPCH-TX-Power.h"
#include <constr_CHOICE.h>

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
struct ReferenceTimeDifferenceToCell;
struct CellSelectReselectInfoSIB_11_12_HCS_RSCP;
struct PrimaryCPICH_Info;
struct TimeslotInfoList;

/* CellInfoSI-HCS-RSCP */
typedef struct CellInfoSI_HCS_RSCP {
	CellIndividualOffset_t	 cellIndividualOffset	/* DEFAULT 0 */;
	struct ReferenceTimeDifferenceToCell	*referenceTimeDifferenceToCell	/* OPTIONAL */;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union CellInfoSI_HCS_RSCP__modeSpecificInfo_u {
			struct fdd {
				struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
				PrimaryCPICH_TX_Power_t	*primaryCPICH_TX_Power	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				BOOLEAN_t	 tx_DiversityIndicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				PrimaryCCPCH_Info_t	 primaryCCPCH_Info;
				PrimaryCCPCH_TX_Power_t	*primaryCCPCH_TX_Power	/* OPTIONAL */;
				struct TimeslotInfoList	*timeslotInfoList	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct CellSelectReselectInfoSIB_11_12_HCS_RSCP	*cellSelectionReselectionInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoSI_HCS_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoSI_HCS_RSCP;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferenceTimeDifferenceToCell.h"
#include "CellSelectReselectInfoSIB-11-12-HCS-RSCP.h"
#include "PrimaryCPICH-Info.h"
#include "TimeslotInfoList.h"

#endif	/* _CellInfoSI_HCS_RSCP_H_ */
#include <asn_internal.h>
