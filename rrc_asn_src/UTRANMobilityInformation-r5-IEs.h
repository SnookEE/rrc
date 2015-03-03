/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UTRANMobilityInformation_r5_IEs_H_
#define	_UTRANMobilityInformation_r5_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
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
struct UE_ConnTimersAndConstants_r5;
struct CN_InformationInfoFull;
struct DL_CounterSynchronisationInfo_r5;

/* UTRANMobilityInformation-r5-IEs */
typedef struct UTRANMobilityInformation_r5_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	struct UE_ConnTimersAndConstants_r5	*ue_ConnTimersAndConstants	/* OPTIONAL */;
	struct CN_InformationInfoFull	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRANMobilityInformation_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRANMobilityInformation_r5_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "UE-ConnTimersAndConstants-r5.h"
#include "CN-InformationInfoFull.h"
#include "DL-CounterSynchronisationInfo-r5.h"

#endif	/* _UTRANMobilityInformation_r5_IEs_H_ */
#include <asn_internal.h>
