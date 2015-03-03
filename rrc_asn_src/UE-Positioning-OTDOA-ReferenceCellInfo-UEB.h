/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_
#define	_UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
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

/* Forward declarations */
struct FrequencyInfo;
struct ReferenceCellPosition;
struct UE_Positioning_IPDL_Parameters;

/* UE-Positioning-OTDOA-ReferenceCellInfo-UEB */
typedef struct UE_Positioning_OTDOA_ReferenceCellInfo_UEB {
	long	*sfn	/* OPTIONAL */;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union UE_Positioning_OTDOA_ReferenceCellInfo_UEB__modeSpecificInfo_u {
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
	struct ReferenceCellPosition	*cellPosition	/* OPTIONAL */;
	long	*roundTripTime	/* OPTIONAL */;
	struct UE_Positioning_IPDL_Parameters	*ue_positioning_IPDL_Paremeters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_ReferenceCellInfo_UEB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_UEB;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"
#include "ReferenceCellPosition.h"
#include "UE-Positioning-IPDL-Parameters.h"

#endif	/* _UE_Positioning_OTDOA_ReferenceCellInfo_UEB_H_ */
#include <asn_internal.h>
