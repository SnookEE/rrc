/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_CCTrChTPCList_H_
#define	_UL_CCTrChTPCList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TFCS_Identity;

/* UL-CCTrChTPCList */
typedef struct UL_CCTrChTPCList {
	A_SEQUENCE_OF(struct TFCS_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCTrChTPCList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCTrChTPCList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TFCS-Identity.h"

#endif	/* _UL_CCTrChTPCList_H_ */
#include <asn_internal.h>
