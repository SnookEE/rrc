/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SIB_ReferenceList_H_
#define	_SIB_ReferenceList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingInformationSIB;

/* SIB-ReferenceList */
typedef struct SIB_ReferenceList {
	A_SEQUENCE_OF(struct SchedulingInformationSIB) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_ReferenceList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_ReferenceList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SchedulingInformationSIB.h"

#endif	/* _SIB_ReferenceList_H_ */
#include <asn_internal.h>
