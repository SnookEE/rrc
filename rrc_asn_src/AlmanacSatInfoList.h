/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AlmanacSatInfoList_H_
#define	_AlmanacSatInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlmanacSatInfo;

/* AlmanacSatInfoList */
typedef struct AlmanacSatInfoList {
	A_SEQUENCE_OF(struct AlmanacSatInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlmanacSatInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlmanacSatInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlmanacSatInfo.h"

#endif	/* _AlmanacSatInfoList_H_ */
#include <asn_internal.h>
