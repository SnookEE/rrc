/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRAT_UE_RadioAccessCapability_v690ext_H_
#define	_InterRAT_UE_RadioAccessCapability_v690ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "GSM-MS-RadioAccessCapability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum supportOfInter_RAT_PS_Handover {
	supportOfInter_RAT_PS_Handover_doesSupporInter_RAT_PS_Handover	= 0
} e_supportOfInter_RAT_PS_Handover;

/* InterRAT-UE-RadioAccessCapability-v690ext */
typedef struct InterRAT_UE_RadioAccessCapability_v690ext {
	long	*supportOfInter_RAT_PS_Handover	/* OPTIONAL */;
	GSM_MS_RadioAccessCapability_t	 gsm_MS_RadioAccessCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_UE_RadioAccessCapability_v690ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfInter_RAT_PS_Handover_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_UE_RadioAccessCapability_v690ext;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRAT_UE_RadioAccessCapability_v690ext_H_ */
#include <asn_internal.h>
