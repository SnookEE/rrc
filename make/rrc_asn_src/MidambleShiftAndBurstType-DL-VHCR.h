/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MidambleShiftAndBurstType_DL_VHCR_H_
#define	_MidambleShiftAndBurstType_DL_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MidambleConfigurationBurstType1and3.h"
#include <NULL.h>
#include "MidambleShiftLong.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "MidambleConfigurationBurstType2-VHCR.h"
#include "MidambleShiftShort-VHCR.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum burstType_PR {
	burstType_PR_NOTHING,	/* No components present */
	burstType_PR_type1,
	burstType_PR_type2
} burstType_PR;
typedef enum midambleAllocationMode_PR {
	midambleAllocationMode_PR_NOTHING,	/* No components present */
	midambleAllocationMode_PR_defaultMidamble,
	midambleAllocationMode_PR_commonMidamble,
	midambleAllocationMode_PR_ueSpecificMidamble
} midambleAllocationMode_PR;
typedef enum midambleAllocationMode_PR {
	midambleAllocationMode_PR_NOTHING,	/* No components present */
	midambleAllocationMode_PR_defaultMidamble,
	midambleAllocationMode_PR_commonMidamble,
	midambleAllocationMode_PR_ueSpecificMidamble
} midambleAllocationMode_PR;

/* MidambleShiftAndBurstType-DL-VHCR */
typedef struct MidambleShiftAndBurstType_DL_VHCR {
	struct burstType {
		burstType_PR present;
		union MidambleShiftAndBurstType_DL_VHCR__burstType_u {
			struct type1 {
				MidambleConfigurationBurstType1and3_t	 midambleConfigurationBurstType1and3;
				struct midambleAllocationMode {
					midambleAllocationMode_PR present;
					union MidambleShiftAndBurstType_DL_VHCR__burstType__type1__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						NULL_t	 commonMidamble;
						struct ueSpecificMidamble {
							MidambleShiftLong_t	 midambleShift;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type1;
			struct type2 {
				MidambleConfigurationBurstType2_VHCR_t	 midambleConfigurationBurstType2;
				struct midambleAllocationMode {
					midambleAllocationMode_PR present;
					union MidambleShiftAndBurstType_DL_VHCR__burstType__type2__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						NULL_t	 commonMidamble;
						struct ueSpecificMidamble {
							MidambleShiftShort_VHCR_t	 midambleShift;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} burstType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MidambleShiftAndBurstType_DL_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MidambleShiftAndBurstType_DL_VHCR;

#ifdef __cplusplus
}
#endif

#endif	/* _MidambleShiftAndBurstType_DL_VHCR_H_ */
#include <asn_internal.h>
