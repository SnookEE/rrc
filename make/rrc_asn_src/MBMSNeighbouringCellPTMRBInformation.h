/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMSNeighbouringCellPTMRBInformation_H_
#define	_MBMSNeighbouringCellPTMRBInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqCellID.h"
#include "MBMS-NeighbouringCellSCCPCHList-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMSNeighbouringCellPTMRBInformation */
typedef struct MBMSNeighbouringCellPTMRBInformation {
	IntraFreqCellID_t	 neighbouringCellIdentity;
	MBMS_NeighbouringCellSCCPCHList_r6_t	 neighbouringCellSCCPCHList;
	struct nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSNeighbouringCellPTMRBInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSNeighbouringCellPTMRBInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMSNeighbouringCellPTMRBInformation_H_ */
#include <asn_internal.h>
