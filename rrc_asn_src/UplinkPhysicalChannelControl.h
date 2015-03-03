/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UplinkPhysicalChannelControl_H_
#define	_UplinkPhysicalChannelControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UplinkPhysicalChannelControl-r3-IEs.h"
#include <BIT_STRING.h>
#include "UplinkPhysicalChannelControl-v4b0ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "UplinkPhysicalChannelControl-r4-IEs.h"
#include "UplinkPhysicalChannelControl-v690ext-IEs.h"
#include "UplinkPhysicalChannelControl-r5-IEs.h"
#include "UplinkPhysicalChannelControl-v6a0ext-IEs.h"
#include "UplinkPhysicalChannelControl-r7-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkPhysicalChannelControl_PR {
	UplinkPhysicalChannelControl_PR_NOTHING,	/* No components present */
	UplinkPhysicalChannelControl_PR_r3,
	UplinkPhysicalChannelControl_PR_later_than_r3
} UplinkPhysicalChannelControl_PR;
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
	criticalExtensions_PR_r7,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;

/* UplinkPhysicalChannelControl */
typedef struct UplinkPhysicalChannelControl {
	UplinkPhysicalChannelControl_PR present;
	union UplinkPhysicalChannelControl_u {
		struct r3 {
			UplinkPhysicalChannelControl_r3_IEs_t	 uplinkPhysicalChannelControl_r3;
			struct laterNonCriticalExtensions {
				BIT_STRING_t	*uplinkPhysicalChannelControl_r3_add_ext	/* OPTIONAL */;
				struct v4b0NonCriticalExtensions {
					UplinkPhysicalChannelControl_v4b0ext_IEs_t	 uplinkPysicalChannelControl_v4b0ext;
					struct noncriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *noncriticalExtensions;
					
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
				union UplinkPhysicalChannelControl__later_than_r3__criticalExtensions_u {
					struct r4 {
						UplinkPhysicalChannelControl_r4_IEs_t	 uplinkPhysicalChannelControl_r4;
						struct v4d0NonCriticalExtensions {
							BIT_STRING_t	*uplinkPhysicalChannelControl_r4_add_ext	/* OPTIONAL */;
							struct v690NonCriticalExtensions {
								UplinkPhysicalChannelControl_v690ext_IEs_t	 uplinkPhysicalChannelControl_v690ext;
								struct nonCriticalExtensions {
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *nonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v690NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct criticalExtensions {
						criticalExtensions_PR present;
						union UplinkPhysicalChannelControl__later_than_r3__criticalExtensions__criticalExtensions_u {
							struct r5 {
								UplinkPhysicalChannelControl_r5_IEs_t	 uplinkPhysicalChannelControl_r5;
								BIT_STRING_t	*uplinkPhysicalChannelControl_r5_add_ext	/* OPTIONAL */;
								struct v690NonCriticalExtensions {
									UplinkPhysicalChannelControl_v690ext_IEs_t	 uplinkPhysicalChannelControl_v690ext;
									struct v6a0NonCriticalExtensions {
										UplinkPhysicalChannelControl_v6a0ext_IEs_t	 uplinkPhysicalChannelControl_v6a0ext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v6a0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v690NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} r5;
							struct criticalExtensions {
								criticalExtensions_PR present;
								union UplinkPhysicalChannelControl__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_u {
									struct r7 {
										UplinkPhysicalChannelControl_r7_IEs_t	 uplinkPhysicalChannelControl_r7;
										BIT_STRING_t	*uplinkPhysicalChannelControl_r7_add_ext	/* OPTIONAL */;
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
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPhysicalChannelControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPhysicalChannelControl;

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPhysicalChannelControl_H_ */
#include <asn_internal.h>