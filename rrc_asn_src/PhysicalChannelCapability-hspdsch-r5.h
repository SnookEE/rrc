/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PhysicalChannelCapability_hspdsch_r5_H_
#define	_PhysicalChannelCapability_hspdsch_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "HSDSCH-physical-layer-category.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum fdd_hspdsch_PR {
	fdd_hspdsch_PR_NOTHING,	/* No components present */
	fdd_hspdsch_PR_supported,
	fdd_hspdsch_PR_unsupported
} fdd_hspdsch_PR;
typedef enum tdd384_hspdsch_PR {
	tdd384_hspdsch_PR_NOTHING,	/* No components present */
	tdd384_hspdsch_PR_supported,
	tdd384_hspdsch_PR_unsupported
} tdd384_hspdsch_PR;
typedef enum tdd128_hspdsch_PR {
	tdd128_hspdsch_PR_NOTHING,	/* No components present */
	tdd128_hspdsch_PR_supported,
	tdd128_hspdsch_PR_unsupported
} tdd128_hspdsch_PR;

/* PhysicalChannelCapability-hspdsch-r5 */
typedef struct PhysicalChannelCapability_hspdsch_r5 {
	struct fdd_hspdsch {
		fdd_hspdsch_PR present;
		union PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch_u {
			struct supported {
				HSDSCH_physical_layer_category_t	 hsdsch_physical_layer_category;
				BOOLEAN_t	 dummy;
				BOOLEAN_t	 dummy2;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supported;
			NULL_t	 unsupported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fdd_hspdsch;
	struct tdd384_hspdsch {
		tdd384_hspdsch_PR present;
		union PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch_u {
			HSDSCH_physical_layer_category_t	 supported;
			NULL_t	 unsupported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd384_hspdsch;
	struct tdd128_hspdsch {
		tdd128_hspdsch_PR present;
		union PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch_u {
			HSDSCH_physical_layer_category_t	 supported;
			NULL_t	 unsupported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd128_hspdsch;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_hspdsch_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_hspdsch_r5;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_hspdsch_r5_H_ */
#include <asn_internal.h>
