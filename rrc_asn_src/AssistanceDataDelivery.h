/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_AssistanceDataDelivery_H_
#define	_AssistanceDataDelivery_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AssistanceDataDelivery-r3-IEs.h"
#include "AssistanceDataDelivery-v3a0ext.h"
#include <BIT_STRING.h>
#include "AssistanceDataDelivery-v4b0ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AssistanceDataDelivery_PR {
	AssistanceDataDelivery_PR_NOTHING,	/* No components present */
	AssistanceDataDelivery_PR_r3,
	AssistanceDataDelivery_PR_later_than_r3
} AssistanceDataDelivery_PR;

/* AssistanceDataDelivery */
typedef struct AssistanceDataDelivery {
	AssistanceDataDelivery_PR present;
	union AssistanceDataDelivery_u {
		struct r3 {
			AssistanceDataDelivery_r3_IEs_t	 assistanceDataDelivery_r3;
			struct v3a0NonCriticalExtensions {
				AssistanceDataDelivery_v3a0ext_t	 assistanceDataDelivery_v3a0ext;
				struct laterNonCriticalExtensions {
					BIT_STRING_t	*assistanceDataDelivery_r3_add_ext	/* OPTIONAL */;
					struct v4b0NonCriticalExtensions {
						AssistanceDataDelivery_v4b0ext_IEs_t	 assistanceDataDelivery_v4b0ext;
						struct nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v4b0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *laterNonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v3a0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AssistanceDataDelivery_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AssistanceDataDelivery;

#ifdef __cplusplus
}
#endif

#endif	/* _AssistanceDataDelivery_H_ */
#include <asn_internal.h>
