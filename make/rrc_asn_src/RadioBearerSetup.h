/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerSetup_H_
#define	_RadioBearerSetup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioBearerSetup-r3-IEs.h"
#include "RadioBearerSetup-v3a0ext.h"
#include <BIT_STRING.h>
#include "RadioBearerSetup-v4b0ext-IEs.h"
#include "RadioBearerSetup-v590ext-IEs.h"
#include "RadioBearerSetup-v5d0ext-IEs.h"
#include "RadioBearerSetup-v690ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "RadioBearerSetup-r4-IEs.h"
#include "RadioBearerSetup-r5-IEs.h"
#include "RadioBearerSetup-r6-IEs.h"
#include "RadioBearerSetup-r7-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerSetup_PR {
	RadioBearerSetup_PR_NOTHING,	/* No components present */
	RadioBearerSetup_PR_r3,
	RadioBearerSetup_PR_later_than_r3
} RadioBearerSetup_PR;
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

/* RadioBearerSetup */
typedef struct RadioBearerSetup {
	RadioBearerSetup_PR present;
	union RadioBearerSetup_u {
		struct r3 {
			RadioBearerSetup_r3_IEs_t	 radioBearerSetup_r3;
			struct v3a0NonCriticalExtensions {
				RadioBearerSetup_v3a0ext_t	 radioBearerSetup_v3a0ext;
				struct laterNonCriticalExtensions {
					BIT_STRING_t	*radioBearerSetup_r3_add_ext	/* OPTIONAL */;
					struct v4b0NonCriticalExtensions {
						RadioBearerSetup_v4b0ext_IEs_t	 radioBearerSetup_v4b0ext;
						struct v590NonCriticalExtensions {
							RadioBearerSetup_v590ext_IEs_t	 radioBearerSetup_v590ext;
							struct v5d0NonCriticalExtenstions {
								RadioBearerSetup_v5d0ext_IEs_t	 radioBearerSetup_v5d0ext;
								struct v690NonCriticalExtensions {
									RadioBearerSetup_v690ext_IEs_t	 radioBearerSetup_v690ext;
									struct nonCriticalExtensions {
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *nonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v690NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v5d0NonCriticalExtenstions;
							
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
			} *v3a0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				criticalExtensions_PR present;
				union RadioBearerSetup__later_than_r3__criticalExtensions_u {
					struct r4 {
						RadioBearerSetup_r4_IEs_t	 radioBearerSetup_r4;
						struct v4d0NonCriticalExtensions {
							BIT_STRING_t	*radioBearerSetup_r4_add_ext	/* OPTIONAL */;
							struct v590NonCriticalExtensions {
								RadioBearerSetup_v590ext_IEs_t	 radioBearerSetup_v590ext;
								struct v5d0NonCriticalExtenstions {
									RadioBearerSetup_v5d0ext_IEs_t	 radioBearerSetup_v5d0ext;
									struct v690NonCriticalExtensions {
										RadioBearerSetup_v690ext_IEs_t	 radioBearerSetup_v690ext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v690NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5d0NonCriticalExtenstions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v590NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct criticalExtensions {
						criticalExtensions_PR present;
						union RadioBearerSetup__later_than_r3__criticalExtensions__criticalExtensions_u {
							struct r5 {
								RadioBearerSetup_r5_IEs_t	 radioBearerSetup_r5;
								BIT_STRING_t	*radioBearerSetup_r5_add_ext	/* OPTIONAL */;
								struct v5d0NonCriticalExtenstions {
									RadioBearerSetup_v5d0ext_IEs_t	 radioBearerSetup_v5d0ext;
									struct v690NonCriticalExtensions {
										RadioBearerSetup_v690ext_IEs_t	 radioBearerSetup_v690ext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v690NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5d0NonCriticalExtenstions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} r5;
							struct criticalExtensions {
								criticalExtensions_PR present;
								union RadioBearerSetup__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_u {
									struct r6 {
										RadioBearerSetup_r6_IEs_t	 radioBearerSetup_r6;
										BIT_STRING_t	*radioBearerSetup_r6_add_ext	/* OPTIONAL */;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} r6;
									struct criticalExtensions {
										criticalExtensions_PR present;
										union RadioBearerSetup__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
											struct r7 {
												RadioBearerSetup_r7_IEs_t	 radioBearerSetup_r7;
												BIT_STRING_t	*radioBearerSetup_r7_add_ext	/* OPTIONAL */;
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
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioBearerSetup_H_ */
#include <asn_internal.h>
