/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PhysicalChannelCapability_LCR_r4_H_
#define	_PhysicalChannelCapability_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-PhysChCapabilityTDD-LCR-r4.h"
#include "UL-PhysChCapabilityTDD-LCR-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapability-LCR-r4 */
typedef struct PhysicalChannelCapability_LCR_r4 {
	struct tdd128_PhysChCapability {
		DL_PhysChCapabilityTDD_LCR_r4_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_LCR_r4_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd128_PhysChCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_LCR_r4_H_ */
#include <asn_internal.h>
