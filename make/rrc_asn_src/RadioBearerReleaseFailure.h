/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerReleaseFailure_H_
#define	_RadioBearerReleaseFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "FailureCauseWithProtErr.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_IdentityList;

/* RadioBearerReleaseFailure */
typedef struct RadioBearerReleaseFailure {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	FailureCauseWithProtErr_t	 failureCause;
	struct RB_IdentityList	*potentiallySuccesfulBearerList	/* OPTIONAL */;
	struct laterNonCriticalExtensions {
		BIT_STRING_t	*radioBearerReleaseFailure_r3_add_ext	/* OPTIONAL */;
		struct nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReleaseFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReleaseFailure;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-IdentityList.h"

#endif	/* _RadioBearerReleaseFailure_H_ */
#include <asn_internal.h>
