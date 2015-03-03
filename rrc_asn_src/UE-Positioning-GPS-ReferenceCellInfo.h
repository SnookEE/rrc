/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_GPS_ReferenceCellInfo_H_
#define	_UE_Positioning_GPS_ReferenceCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include <constr_SEQUENCE.h>
#include "CellParametersID.h"
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

/* UE-Positioning-GPS-ReferenceCellInfo */
typedef struct UE_Positioning_GPS_ReferenceCellInfo {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union UE_Positioning_GPS_ReferenceCellInfo__modeSpecificInfo_u {
			struct fdd {
				PrimaryCPICH_Info_t	 referenceIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				CellParametersID_t	 referenceIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_ReferenceCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_ReferenceCellInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GPS_ReferenceCellInfo_H_ */
#include <asn_internal.h>
