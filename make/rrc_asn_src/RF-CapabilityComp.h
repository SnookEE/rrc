/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RF_CapabilityComp_H_
#define	_RF_CapabilityComp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "RF-CapabBandListFDDComp.h"
#include <constr_CHOICE.h>
#include "RadioFrequencyBandTDDList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum fdd_PR {
	fdd_PR_NOTHING,	/* No components present */
	fdd_PR_notSupported,
	fdd_PR_supported
} fdd_PR;
typedef enum tdd384_RF_Capability_PR {
	tdd384_RF_Capability_PR_NOTHING,	/* No components present */
	tdd384_RF_Capability_PR_notSupported,
	tdd384_RF_Capability_PR_supported
} tdd384_RF_Capability_PR;
typedef enum tdd128_RF_Capability_PR {
	tdd128_RF_Capability_PR_NOTHING,	/* No components present */
	tdd128_RF_Capability_PR_notSupported,
	tdd128_RF_Capability_PR_supported
} tdd128_RF_Capability_PR;

/* RF-CapabilityComp */
typedef struct RF_CapabilityComp {
	struct fdd {
		fdd_PR present;
		union RF_CapabilityComp__fdd_u {
			NULL_t	 notSupported;
			RF_CapabBandListFDDComp_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fdd;
	struct tdd384_RF_Capability {
		tdd384_RF_Capability_PR present;
		union RF_CapabilityComp__tdd384_RF_Capability_u {
			NULL_t	 notSupported;
			RadioFrequencyBandTDDList_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd384_RF_Capability;
	struct tdd128_RF_Capability {
		tdd128_RF_Capability_PR present;
		union RF_CapabilityComp__tdd128_RF_Capability_u {
			NULL_t	 notSupported;
			RadioFrequencyBandTDDList_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd128_RF_Capability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_CapabilityComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_CapabilityComp;

#ifdef __cplusplus
}
#endif

#endif	/* _RF_CapabilityComp_H_ */
#include <asn_internal.h>
