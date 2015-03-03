/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_TimingAdvanceControl_r4_H_
#define	_UL_TimingAdvanceControl_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "UL-TimingAdvance.h"
#include "ActivationTime.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TimingAdvanceControl_r4_PR {
	UL_TimingAdvanceControl_r4_PR_NOTHING,	/* No components present */
	UL_TimingAdvanceControl_r4_PR_disabled,
	UL_TimingAdvanceControl_r4_PR_enabled
} UL_TimingAdvanceControl_r4_PR;
typedef enum tddOption_PR {
	tddOption_PR_NOTHING,	/* No components present */
	tddOption_PR_tdd384,
	tddOption_PR_tdd128
} tddOption_PR;

/* Forward declarations */
struct UL_SynchronisationParameters_r4;
struct SynchronisationParameters_r4;

/* UL-TimingAdvanceControl-r4 */
typedef struct UL_TimingAdvanceControl_r4 {
	UL_TimingAdvanceControl_r4_PR present;
	union UL_TimingAdvanceControl_r4_u {
		NULL_t	 disabled;
		struct enabled {
			struct tddOption {
				tddOption_PR present;
				union UL_TimingAdvanceControl_r4__enabled__tddOption_u {
					struct tdd384 {
						UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
						ActivationTime_t	*activationTime	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd384;
					struct tdd128 {
						struct UL_SynchronisationParameters_r4	*ul_SynchronisationParameters	/* OPTIONAL */;
						struct SynchronisationParameters_r4	*synchronisationParameters	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd128;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tddOption;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} enabled;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_TimingAdvanceControl_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TimingAdvanceControl_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-SynchronisationParameters-r4.h"
#include "SynchronisationParameters-r4.h"

#endif	/* _UL_TimingAdvanceControl_r4_H_ */
#include <asn_internal.h>
