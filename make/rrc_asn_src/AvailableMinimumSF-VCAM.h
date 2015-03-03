/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AvailableMinimumSF_VCAM_H_
#define	_AvailableMinimumSF_VCAM_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinimumSpreadingFactor.h"
#include "NF-Max.h"
#include "MaxAvailablePCPCH-Number.h"
#include "AvailableAP-Signature-VCAMList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AvailableMinimumSF-VCAM */
typedef struct AvailableMinimumSF_VCAM {
	MinimumSpreadingFactor_t	 minimumSpreadingFactor;
	NF_Max_t	 nf_Max;
	MaxAvailablePCPCH_Number_t	 maxAvailablePCPCH_Number;
	AvailableAP_Signature_VCAMList_t	 availableAP_Signature_VCAMList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvailableMinimumSF_VCAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvailableMinimumSF_VCAM;

#ifdef __cplusplus
}
#endif

#endif	/* _AvailableMinimumSF_VCAM_H_ */
#include <asn_internal.h>
