/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRCConnectionReject_v690ext_IEs_H_
#define	_RRCConnectionReject_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_TargetCellInfoList;

/* RRCConnectionReject-v690ext-IEs */
typedef struct RRCConnectionReject_v690ext_IEs {
	struct GSM_TargetCellInfoList	*redirectionInfo_v690ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v690ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v690ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSM-TargetCellInfoList.h"

#endif	/* _RRCConnectionReject_v690ext_IEs_H_ */
#include <asn_internal.h>
