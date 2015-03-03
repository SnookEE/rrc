/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PUSCH_CapacityAllocationInfo_r4_H_
#define	_PUSCH_CapacityAllocationInfo_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "AllocationPeriodInfo.h"
#include "TFCS-IdentityPlain.h"
#include "PUSCH-Identity.h"
#include <constr_SEQUENCE.h>
#include "PUSCH-Info-r4.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum pusch_Allocation_PR {
	pusch_Allocation_PR_NOTHING,	/* No components present */
	pusch_Allocation_PR_pusch_AllocationPending,
	pusch_Allocation_PR_pusch_AllocationAssignment
} pusch_Allocation_PR;
typedef enum configuration_PR {
	configuration_PR_NOTHING,	/* No components present */
	configuration_PR_old_Configuration,
	configuration_PR_new_Configuration
} configuration_PR;

/* Forward declarations */
struct PUSCH_PowerControlInfo_r4;

/* PUSCH-CapacityAllocationInfo-r4 */
typedef struct PUSCH_CapacityAllocationInfo_r4 {
	struct pusch_Allocation {
		pusch_Allocation_PR present;
		union PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_u {
			NULL_t	 pusch_AllocationPending;
			struct pusch_AllocationAssignment {
				AllocationPeriodInfo_t	 pusch_AllocationPeriodInfo;
				struct PUSCH_PowerControlInfo_r4	*pusch_PowerControlInfo	/* OPTIONAL */;
				struct configuration {
					configuration_PR present;
					union PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_u {
						struct old_Configuration {
							TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
							PUSCH_Identity_t	 pusch_Identity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} old_Configuration;
						struct new_Configuration {
							PUSCH_Info_r4_t	 pusch_Info;
							PUSCH_Identity_t	*pusch_Identity	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} new_Configuration;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} configuration;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pusch_AllocationAssignment;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pusch_Allocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_CapacityAllocationInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_CapacityAllocationInfo_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-PowerControlInfo-r4.h"

#endif	/* _PUSCH_CapacityAllocationInfo_r4_H_ */
#include <asn_internal.h>
