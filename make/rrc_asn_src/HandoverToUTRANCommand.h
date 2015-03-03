/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_HandoverToUTRANCommand_H_
#define	_HandoverToUTRANCommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HandoverToUTRANCommand-r3-IEs.h"
#include <constr_SEQUENCE.h>
#include "HandoverToUTRANCommand-r4-IEs.h"
#include "HandoverToUTRANCommand-r5-IEs.h"
#include "HandoverToUTRANCommand-r6-IEs.h"
#include "HandoverToUTRANCommand-r7-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverToUTRANCommand_PR {
	HandoverToUTRANCommand_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_PR_r3,
	HandoverToUTRANCommand_PR_criticalExtensions
} HandoverToUTRANCommand_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r4,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r5,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r6,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r7,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;

/* HandoverToUTRANCommand */
typedef struct HandoverToUTRANCommand {
	HandoverToUTRANCommand_PR present;
	union HandoverToUTRANCommand_u {
		struct r3 {
			HandoverToUTRANCommand_r3_IEs_t	 handoverToUTRANCommand_r3;
			struct nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct criticalExtensions {
			criticalExtensions_PR present;
			union HandoverToUTRANCommand__criticalExtensions_u {
				struct r4 {
					HandoverToUTRANCommand_r4_IEs_t	 handoverToUTRANCommand_r4;
					struct nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} r4;
				struct criticalExtensions {
					criticalExtensions_PR present;
					union HandoverToUTRANCommand__criticalExtensions__criticalExtensions_u {
						struct r5 {
							HandoverToUTRANCommand_r5_IEs_t	 handoverToUTRANCommand_r5;
							struct nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} r5;
						struct criticalExtensions {
							criticalExtensions_PR present;
							union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions_u {
								struct r6 {
									HandoverToUTRANCommand_r6_IEs_t	 handoverToUTRANCommand_r6;
									struct nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} r6;
								struct criticalExtensions {
									criticalExtensions_PR present;
									union HandoverToUTRANCommand__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
										struct r7 {
											HandoverToUTRANCommand_r7_IEs_t	 handoverToUTRANCommand_r7;
											struct nonCriticalExtensions {
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *nonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} r7;
										struct criticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} criticalExtensions;
									} choice;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} criticalExtensions;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} criticalExtensions;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} criticalExtensions;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} criticalExtensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverToUTRANCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverToUTRANCommand_H_ */
#include <asn_internal.h>
