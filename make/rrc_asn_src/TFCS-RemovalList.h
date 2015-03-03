/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TFCS_RemovalList_H_
#define	_TFCS_RemovalList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TFCS_Removal;

/* TFCS-RemovalList */
typedef struct TFCS_RemovalList {
	A_SEQUENCE_OF(struct TFCS_Removal) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TFCS_RemovalList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TFCS_RemovalList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TFCS-Removal.h"

#endif	/* _TFCS_RemovalList_H_ */
#include <asn_internal.h>
