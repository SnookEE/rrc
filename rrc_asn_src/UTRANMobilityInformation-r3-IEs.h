/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UTRANMobilityInformation_r3_IEs_H_
#define	_UTRANMobilityInformation_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "C-RNTI.h"
#include "URA-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct UE_ConnTimersAndConstants;
struct CN_InformationInfoFull;
struct DL_CounterSynchronisationInfo;

/* UTRANMobilityInformation-r3-IEs */
typedef struct UTRANMobilityInformation_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	struct UE_ConnTimersAndConstants	*ue_ConnTimersAndConstants	/* OPTIONAL */;
	struct CN_InformationInfoFull	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct nonCriticalExtensions {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRANMobilityInformation_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRANMobilityInformation_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "UE-ConnTimersAndConstants.h"
#include "CN-InformationInfoFull.h"
#include "DL-CounterSynchronisationInfo.h"

#endif	/* _UTRANMobilityInformation_r3_IEs_H_ */
#include <asn_internal.h>
