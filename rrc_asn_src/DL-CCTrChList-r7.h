/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_CCTrChList_r7_H_
#define	_DL_CCTrChList_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_CCTrCh_r7;

/* DL-CCTrChList-r7 */
typedef struct DL_CCTrChList_r7 {
	A_SEQUENCE_OF(struct DL_CCTrCh_r7) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCTrChList_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCTrChList_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-CCTrCh-r7.h"

#endif	/* _DL_CCTrChList_r7_H_ */
#include <asn_internal.h>
