/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RAT_FDD_InfoList_H_
#define	_RAT_FDD_InfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAT_FDD_Info;

/* RAT-FDD-InfoList */
typedef struct RAT_FDD_InfoList {
	A_SEQUENCE_OF(struct RAT_FDD_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAT_FDD_InfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAT_FDD_InfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAT-FDD-Info.h"

#endif	/* _RAT_FDD_InfoList_H_ */
#include <asn_internal.h>
