/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RB_InformationAffectedList_r6_H_
#define	_RB_InformationAffectedList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_InformationAffected_r6;

/* RB-InformationAffectedList-r6 */
typedef struct RB_InformationAffectedList_r6 {
	A_SEQUENCE_OF(struct RB_InformationAffected_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationAffectedList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationAffectedList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-InformationAffected-r6.h"

#endif	/* _RB_InformationAffectedList_r6_H_ */
#include <asn_internal.h>
