/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_ActiveSetUpdate_H_
#define	_ActiveSetUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActiveSetUpdate-r3-IEs.h"
#include <BIT_STRING.h>
#include "ActiveSetUpdate-v4b0ext-IEs.h"
#include "ActiveSetUpdate-v590ext-IEs.h"
#include "ActiveSetUpdate-v690ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "ActiveSetUpdate-r6-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ActiveSetUpdate_PR {
	ActiveSetUpdate_PR_NOTHING,	/* No components present */
	ActiveSetUpdate_PR_r3,
	ActiveSetUpdate_PR_later_than_r3
} ActiveSetUpdate_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r6,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;

/* ActiveSetUpdate */
typedef struct ActiveSetUpdate {
	ActiveSetUpdate_PR present;
	union ActiveSetUpdate_u {
		struct r3 {
			ActiveSetUpdate_r3_IEs_t	 activeSetUpdate_r3;
			struct laterNonCriticalExtensions {
				BIT_STRING_t	*activeSetUpdate_r3_add_ext	/* OPTIONAL */;
				struct v4b0NonCriticalExtensions {
					ActiveSetUpdate_v4b0ext_IEs_t	 activeSetUpdate_v4b0ext;
					struct v590NonCriticalExtensions {
						ActiveSetUpdate_v590ext_IEs_t	 activeSetUpdate_v590ext;
						struct v690NonCriticalExtensions {
							ActiveSetUpdate_v690ext_IEs_t	 activeSetUpdate_v690ext;
							struct nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v690NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v590NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v4b0NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				criticalExtensions_PR present;
				union ActiveSetUpdate__later_than_r3__criticalExtensions_u {
					struct r6 {
						ActiveSetUpdate_r6_IEs_t	 activeSetUpdate_r6;
						BIT_STRING_t	*activeSetUpdate_r6_add_ext	/* OPTIONAL */;
						struct nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r6;
					struct criticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensions;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActiveSetUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate;

#ifdef __cplusplus
}
#endif

#endif	/* _ActiveSetUpdate_H_ */
#include <asn_internal.h>
