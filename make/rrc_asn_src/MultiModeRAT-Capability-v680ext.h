/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MultiModeRAT_Capability_v680ext_H_
#define	_MultiModeRAT_Capability_v680ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum supportOfHandoverToGAN {
	supportOfHandoverToGAN_doesSupportHandoverToGAN	= 0
} e_supportOfHandoverToGAN;

/* MultiModeRAT-Capability-v680ext */
typedef struct MultiModeRAT_Capability_v680ext {
	long	*supportOfHandoverToGAN	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiModeRAT_Capability_v680ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfHandoverToGAN_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MultiModeRAT_Capability_v680ext;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiModeRAT_Capability_v680ext_H_ */
#include <asn_internal.h>
