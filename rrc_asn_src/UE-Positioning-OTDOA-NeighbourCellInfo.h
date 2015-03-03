/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_OTDOA_NeighbourCellInfo_H_
#define	_UE_Positioning_OTDOA_NeighbourCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SFN-SFN-RelTimeDifference1.h"
#include "SFN-SFN-Drift.h"
#include "OTDOA-SearchWindowSize.h"
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include "CellAndChannelIdentity.h"
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
typedef enum positioningMode_PR {
	positioningMode_PR_NOTHING,	/* No components present */
	positioningMode_PR_ueBased,
	positioningMode_PR_ueAssisted
} positioningMode_PR;

/* Forward declarations */
struct FrequencyInfo;
struct UE_Positioning_IPDL_Parameters;

/* UE-Positioning-OTDOA-NeighbourCellInfo */
typedef struct UE_Positioning_OTDOA_NeighbourCellInfo {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union UE_Positioning_OTDOA_NeighbourCellInfo__modeSpecificInfo_u {
			struct fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				CellAndChannelIdentity_t	 cellAndChannelIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct UE_Positioning_IPDL_Parameters	*ue_positioning_IPDL_Paremeters	/* OPTIONAL */;
	SFN_SFN_RelTimeDifference1_t	 sfn_SFN_RelTimeDifference;
	SFN_SFN_Drift_t	*sfn_SFN_Drift	/* OPTIONAL */;
	OTDOA_SearchWindowSize_t	 searchWindowSize;
	struct positioningMode {
		positioningMode_PR present;
		union UE_Positioning_OTDOA_NeighbourCellInfo__positioningMode_u {
			struct ueBased {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueBased;
			struct ueAssisted {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueAssisted;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} positioningMode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_NeighbourCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_NeighbourCellInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"
#include "UE-Positioning-IPDL-Parameters.h"

#endif	/* _UE_Positioning_OTDOA_NeighbourCellInfo_H_ */
#include <asn_internal.h>