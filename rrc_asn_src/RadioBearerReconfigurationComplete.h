/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerReconfigurationComplete_H_
#define	_RadioBearerReconfigurationComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UL-TimingAdvance.h"
#include "ActivationTime.h"
#include <BIT_STRING.h>
#include "RadioBearerReconfigurationComplete-v7xyext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtActivationInfo;
struct RB_ActivationTimeInfoList;
struct UL_CounterSynchronisationInfo;

/* RadioBearerReconfigurationComplete */
typedef struct RadioBearerReconfigurationComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtActivationInfo	*ul_IntegProtActivationInfo	/* OPTIONAL */;
	UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
	ActivationTime_t	*count_C_ActivationTime	/* OPTIONAL */;
	struct RB_ActivationTimeInfoList	*dummy	/* OPTIONAL */;
	struct UL_CounterSynchronisationInfo	*ul_CounterSynchronisationInfo	/* OPTIONAL */;
	struct laterNonCriticalExtensions {
		BIT_STRING_t	*radioBearerReconfigurationComplete_r3_add_ext	/* OPTIONAL */;
		struct v7xyNonCriticalExtensions {
			RadioBearerReconfigurationComplete_v7xyext_IEs_t	 radioBearerReconfigurationComplete_v7xyext;
			struct nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v7xyNonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfigurationComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfigurationComplete;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtActivationInfo.h"
#include "RB-ActivationTimeInfoList.h"
#include "UL-CounterSynchronisationInfo.h"

#endif	/* _RadioBearerReconfigurationComplete_H_ */
#include <asn_internal.h>
