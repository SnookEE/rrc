/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellChangeOrderFromUTRANFailure_r3_IEs_H_
#define	_CellChangeOrderFromUTRANFailure_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "InterRAT-ChangeFailureCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtectionModeInfo;

/* CellChangeOrderFromUTRANFailure-r3-IEs */
typedef struct CellChangeOrderFromUTRANFailure_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtectionModeInfo	*dummy	/* OPTIONAL */;
	InterRAT_ChangeFailureCause_t	 interRAT_ChangeFailureCause;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellChangeOrderFromUTRANFailure_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellChangeOrderFromUTRANFailure_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"

#endif	/* _CellChangeOrderFromUTRANFailure_r3_IEs_H_ */
#include <asn_internal.h>
