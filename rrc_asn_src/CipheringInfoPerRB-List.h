/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CipheringInfoPerRB_List_H_
#define	_CipheringInfoPerRB_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CipheringInfoPerRB;

/* CipheringInfoPerRB-List */
typedef struct CipheringInfoPerRB_List {
	A_SEQUENCE_OF(struct CipheringInfoPerRB) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CipheringInfoPerRB_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CipheringInfoPerRB_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CipheringInfoPerRB.h"

#endif	/* _CipheringInfoPerRB_List_H_ */
#include <asn_internal.h>
