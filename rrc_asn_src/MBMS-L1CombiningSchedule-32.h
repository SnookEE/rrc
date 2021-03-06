/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_L1CombiningSchedule_32_H_
#define	_MBMS_L1CombiningSchedule_32_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-L1CombiningSchedule-32 */
typedef struct MBMS_L1CombiningSchedule_32 {
	long	*cycleOffset	/* OPTIONAL */;
	struct mtch_L1CombiningPeriodList {
		A_SEQUENCE_OF(struct Member {
			long	 periodStart;
			long	 periodDuration;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mtch_L1CombiningPeriodList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_L1CombiningSchedule_32_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_L1CombiningSchedule_32;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_L1CombiningSchedule_32_H_ */
#include <asn_internal.h>
