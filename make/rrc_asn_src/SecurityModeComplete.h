/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_SecurityModeComplete_H_
#define	_SecurityModeComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtActivationInfo;
struct RB_ActivationTimeInfoList;

/* SecurityModeComplete */
typedef struct SecurityModeComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtActivationInfo	*ul_IntegProtActivationInfo	/* OPTIONAL */;
	struct RB_ActivationTimeInfoList	*rb_UL_CiphActivationTimeInfo	/* OPTIONAL */;
	struct laterNonCriticalExtensions {
		BIT_STRING_t	*securityModeComplete_r3_add_ext	/* OPTIONAL */;
		struct nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeComplete;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtActivationInfo.h"
#include "RB-ActivationTimeInfoList.h"

#endif	/* _SecurityModeComplete_H_ */
#include <asn_internal.h>
