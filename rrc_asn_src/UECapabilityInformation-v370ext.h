/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UECapabilityInformation_v370ext_H_
#define	_UECapabilityInformation_v370ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability_v370ext;

/* UECapabilityInformation-v370ext */
typedef struct UECapabilityInformation_v370ext {
	struct UE_RadioAccessCapability_v370ext	*ue_RadioAccessCapability_v370ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_v370ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_v370ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-RadioAccessCapability-v370ext.h"

#endif	/* _UECapabilityInformation_v370ext_H_ */
#include <asn_internal.h>
