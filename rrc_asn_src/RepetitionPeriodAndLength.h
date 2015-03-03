/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RepetitionPeriodAndLength_H_
#define	_RepetitionPeriodAndLength_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RepetitionPeriodAndLength_PR {
	RepetitionPeriodAndLength_PR_NOTHING,	/* No components present */
	RepetitionPeriodAndLength_PR_repetitionPeriod1,
	RepetitionPeriodAndLength_PR_repetitionPeriod2,
	RepetitionPeriodAndLength_PR_repetitionPeriod4,
	RepetitionPeriodAndLength_PR_repetitionPeriod8,
	RepetitionPeriodAndLength_PR_repetitionPeriod16,
	RepetitionPeriodAndLength_PR_repetitionPeriod32,
	RepetitionPeriodAndLength_PR_repetitionPeriod64
} RepetitionPeriodAndLength_PR;

/* RepetitionPeriodAndLength */
typedef struct RepetitionPeriodAndLength {
	RepetitionPeriodAndLength_PR present;
	union RepetitionPeriodAndLength_u {
		NULL_t	 repetitionPeriod1;
		long	 repetitionPeriod2;
		long	 repetitionPeriod4;
		long	 repetitionPeriod8;
		long	 repetitionPeriod16;
		long	 repetitionPeriod32;
		long	 repetitionPeriod64;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RepetitionPeriodAndLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RepetitionPeriodAndLength;

#ifdef __cplusplus
}
#endif

#endif	/* _RepetitionPeriodAndLength_H_ */
#include <asn_internal.h>
