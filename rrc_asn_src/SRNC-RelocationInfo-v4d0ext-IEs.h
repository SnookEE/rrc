/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_SRNC_RelocationInfo_v4d0ext_IEs_H_
#define	_SRNC_RelocationInfo_v4d0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TPC_CombinationInfoList;

/* SRNC-RelocationInfo-v4d0ext-IEs */
typedef struct SRNC_RelocationInfo_v4d0ext_IEs {
	struct TPC_CombinationInfoList	*tpc_CombinationInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_v4d0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_v4d0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TPC-CombinationInfoList.h"

#endif	/* _SRNC_RelocationInfo_v4d0ext_IEs_H_ */
#include <asn_internal.h>
