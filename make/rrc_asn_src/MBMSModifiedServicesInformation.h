/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMSModifiedServicesInformation_H_
#define	_MBMSModifiedServicesInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "DynamicPersistenceLevel.h"
#include <NativeInteger.h>
#include "MBMS-NumberOfNeighbourCells-r6.h"
#include "MBMS-PTMActivationTime-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mbms_ReacquireMCCH {
	mbms_ReacquireMCCH_true	= 0
} e_mbms_ReacquireMCCH;
typedef enum mbms_AllUnmodifiedPTMServices {
	mbms_AllUnmodifiedPTMServices_true	= 0
} e_mbms_AllUnmodifiedPTMServices;

/* Forward declarations */
struct MBMS_ModifedServiceList_r6;

/* MBMSModifiedServicesInformation */
typedef struct MBMSModifiedServicesInformation {
	struct MBMS_ModifedServiceList_r6	*modifedServiceList	/* OPTIONAL */;
	long	*mbms_ReacquireMCCH	/* OPTIONAL */;
	DynamicPersistenceLevel_t	*mbms_DynamicPersistenceLevel	/* OPTIONAL */;
	long	*endOfModifiedMCCHInformation	/* OPTIONAL */;
	MBMS_NumberOfNeighbourCells_r6_t	 mbmsNumberOfNeighbourCells;
	long	*mbms_AllUnmodifiedPTMServices	/* OPTIONAL */;
	MBMS_PTMActivationTime_r6_t	*mbms_PTMActivationTime	/* OPTIONAL */;
	struct nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSModifiedServicesInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_ReacquireMCCH_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_AllUnmodifiedPTMServices_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMSModifiedServicesInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-ModifedServiceList-r6.h"

#endif	/* _MBMSModifiedServicesInformation_H_ */
#include <asn_internal.h>
