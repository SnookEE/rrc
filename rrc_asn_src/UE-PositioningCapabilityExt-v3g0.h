/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_PositioningCapabilityExt_v3g0_H_
#define	_UE_PositioningCapabilityExt_v3g0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum sfn_sfnType2Capability {
	sfn_sfnType2Capability_true	= 0
} e_sfn_sfnType2Capability;

/* UE-PositioningCapabilityExt-v3g0 */
typedef struct UE_PositioningCapabilityExt_v3g0 {
	long	 sfn_sfnType2Capability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_PositioningCapabilityExt_v3g0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sfn_sfnType2Capability_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_PositioningCapabilityExt_v3g0;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_PositioningCapabilityExt_v3g0_H_ */
#include <asn_internal.h>
