/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_SRNC_RelocationInfo_r3_H_
#define	_SRNC_RelocationInfo_r3_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRNC-RelocationInfo-r3-IEs.h"
#include "SRNC-RelocationInfo-v380ext-IEs.h"
#include "SRNC-RelocationInfo-v390ext-IEs.h"
#include "SRNC-RelocationInfo-v3a0ext-IEs.h"
#include "SRNC-RelocationInfo-v3b0ext-IEs.h"
#include "SRNC-RelocationInfo-v3c0ext-IEs.h"
#include "SRNC-RelocationInfo-v3d0ext-IEs.h"
#include <BIT_STRING.h>
#include "SRNC-RelocationInfo-v3g0ext-IEs.h"
#include "SRNC-RelocationInfo-v4b0ext-IEs.h"
#include "SRNC-RelocationInfo-v590ext-IEs.h"
#include "SRNC-RelocationInfo-v5a0ext-IEs.h"
#include "SRNC-RelocationInfo-v5b0ext-IEs.h"
#include "SRNC-RelocationInfo-v5c0ext-IEs.h"
#include "SRNC-RelocationInfo-v690ext-IEs.h"
#include "SRNC-RelocationInfo-v7xyext-IEs.h"
#include <constr_SEQUENCE.h>
#include "SRNC-RelocationInfo-r4-IEs.h"
#include "SRNC-RelocationInfo-v4d0ext-IEs.h"
#include "SRNC-RelocationInfo-r5-IEs.h"
#include "SRNC-RelocationInfo-r6-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRNC_RelocationInfo_r3_PR {
	SRNC_RelocationInfo_r3_PR_NOTHING,	/* No components present */
	SRNC_RelocationInfo_r3_PR_r3,
	SRNC_RelocationInfo_r3_PR_later_than_r3
} SRNC_RelocationInfo_r3_PR;
typedef enum later_than_r3_PR {
	later_than_r3_PR_NOTHING,	/* No components present */
	later_than_r3_PR_r4,
	later_than_r3_PR_criticalExtensions
} later_than_r3_PR;
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

/* SRNC-RelocationInfo-r3 */
typedef struct SRNC_RelocationInfo_r3 {
	SRNC_RelocationInfo_r3_PR present;
	union SRNC_RelocationInfo_r3_u {
		struct r3 {
			SRNC_RelocationInfo_r3_IEs_t	 sRNC_RelocationInfo_r3;
			struct v380NonCriticalExtensions {
				SRNC_RelocationInfo_v380ext_IEs_t	 sRNC_RelocationInfo_v380ext;
				struct v390NonCriticalExtensions {
					SRNC_RelocationInfo_v390ext_IEs_t	 sRNC_RelocationInfo_v390ext;
					struct v3a0NonCriticalExtensions {
						SRNC_RelocationInfo_v3a0ext_IEs_t	 sRNC_RelocationInfo_v3a0ext;
						struct v3b0NonCriticalExtensions {
							SRNC_RelocationInfo_v3b0ext_IEs_t	 sRNC_RelocationInfo_v3b0ext;
							struct v3c0NonCriticalExtensions {
								SRNC_RelocationInfo_v3c0ext_IEs_t	 sRNC_RelocationInfo_v3c0ext;
								struct laterNonCriticalExtensions {
									SRNC_RelocationInfo_v3d0ext_IEs_t	 sRNC_RelocationInfo_v3d0ext;
									BIT_STRING_t	*sRNC_RelocationInfo_r3_add_ext	/* OPTIONAL */;
									struct v3g0NonCriticalExtensions {
										SRNC_RelocationInfo_v3g0ext_IEs_t	 sRNC_RelocationInfo_v3g0ext;
										struct v4b0NonCriticalExtensions {
											SRNC_RelocationInfo_v4b0ext_IEs_t	 sRNC_RelocationInfo_v4b0ext;
											struct v590NonCriticalExtensions {
												SRNC_RelocationInfo_v590ext_IEs_t	 sRNC_RelocationInfo_v590ext;
												struct v5a0NonCriticalExtensions {
													SRNC_RelocationInfo_v5a0ext_IEs_t	 sRNC_RelocationInfo_v5a0ext;
													struct v5b0NonCriticalExtensions {
														SRNC_RelocationInfo_v5b0ext_IEs_t	 sRNC_RelocationInfo_v5b0ext;
														struct v5c0NonCriticalExtensions {
															SRNC_RelocationInfo_v5c0ext_IEs_t	 sRNC_RelocationInfo_v5c0ext;
															struct v690NonCriticalExtensions {
																SRNC_RelocationInfo_v690ext_IEs_t	 sRNC_RelocationInfo_v690ext;
																struct v7xyNonCriticalExtensions {
																	SRNC_RelocationInfo_v7xyext_IEs_t	 sRNC_RelocationInfo_v7xyext;
																	struct nonCriticalExtensions {
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *nonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v7xyNonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v690NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v5c0NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v5b0NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *v5a0NonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v590NonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v4b0NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v3g0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *laterNonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v3c0NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v3b0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v3a0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v390NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v380NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			later_than_r3_PR present;
			union SRNC_RelocationInfo_r3__later_than_r3_u {
				struct r4 {
					SRNC_RelocationInfo_r4_IEs_t	 sRNC_RelocationInfo_r4;
					struct v4d0NonCriticalExtensions {
						SRNC_RelocationInfo_v4d0ext_IEs_t	 sRNC_RelocationInfo_v4d0ext;
						BIT_STRING_t	*sRNC_RelocationInfo_r4_add_ext	/* OPTIONAL */;
						struct v590NonCriticalExtensions {
							SRNC_RelocationInfo_v590ext_IEs_t	 sRNC_RelocationInfo_v590ext;
							struct v5a0NonCriticalExtensions {
								SRNC_RelocationInfo_v5a0ext_IEs_t	 sRNC_RelocationInfo_v5a0ext;
								struct v5b0NonCriticalExtensions {
									SRNC_RelocationInfo_v5b0ext_IEs_t	 sRNC_RelocationInfo_v5b0ext;
									struct v5c0NonCriticalExtensions {
										SRNC_RelocationInfo_v5c0ext_IEs_t	 sRNC_RelocationInfo_v5c0ext;
										struct v690NonCriticalExtensions {
											SRNC_RelocationInfo_v690ext_IEs_t	 sRNC_RelocationInfo_v690ext;
											struct v7xyNonCriticalExtensions {
												SRNC_RelocationInfo_v7xyext_IEs_t	 sRNC_RelocationInfo_v7xyext;
												struct nonCriticalExtensions {
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *nonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v7xyNonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v690NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v5c0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v5a0NonCriticalExtensions;
							
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
					union SRNC_RelocationInfo_r3__later_than_r3__criticalExtensions_u {
						struct r5 {
							SRNC_RelocationInfo_r5_IEs_t	 sRNC_RelocationInfo_r5;
							BIT_STRING_t	*sRNC_RelocationInfo_r5_add_ext	/* OPTIONAL */;
							struct v5a0NonCriticalExtensions {
								SRNC_RelocationInfo_v5a0ext_IEs_t	 sRNC_RelocationInfo_v5a0ext;
								struct v5b0NonCriticalExtensions {
									SRNC_RelocationInfo_v5b0ext_IEs_t	 sRNC_RelocationInfo_v5b0ext;
									struct v5c0NonCriticalExtensions {
										SRNC_RelocationInfo_v5c0ext_IEs_t	 sRNC_RelocationInfo_v5c0ext;
										struct v690NonCriticalExtensions {
											SRNC_RelocationInfo_v690ext_IEs_t	 sRNC_RelocationInfo_v690ext;
											struct v7xyNonCriticalExtensions {
												SRNC_RelocationInfo_v7xyext_IEs_t	 sRNC_RelocationInfo_v7xyext;
												struct nonCriticalExtensions {
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *nonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v7xyNonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v690NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v5c0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v5a0NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} r5;
						struct criticalExtensions {
							criticalExtensions_PR present;
							union SRNC_RelocationInfo_r3__later_than_r3__criticalExtensions__criticalExtensions_u {
								struct r6 {
									SRNC_RelocationInfo_r6_IEs_t	 sRNC_RelocationInfo_r6;
									BIT_STRING_t	*sRNC_RelocationInfo_r6_add_ext	/* OPTIONAL */;
									struct v7xyNonCriticalExtensions {
										SRNC_RelocationInfo_v7xyext_IEs_t	 sRNC_RelocationInfo_v7xyext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v7xyNonCriticalExtensions;
									
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
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} criticalExtensions;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r3;

#ifdef __cplusplus
}
#endif

#endif	/* _SRNC_RelocationInfo_r3_H_ */
#include <asn_internal.h>
