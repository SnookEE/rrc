/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_MultiModeRAT_Capability_H_
#define	_UE_MultiModeRAT_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MultiRAT-Capability.h"
#include "MultiModeCapability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-MultiModeRAT-Capability */
typedef struct UE_MultiModeRAT_Capability {
	MultiRAT_Capability_t	 multiRAT_CapabilityList;
	MultiModeCapability_t	 multiModeCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MultiModeRAT_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MultiModeRAT_Capability;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_MultiModeRAT_Capability_H_ */
#include <asn_internal.h>
