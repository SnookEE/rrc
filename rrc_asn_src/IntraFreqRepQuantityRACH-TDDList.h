/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqRepQuantityRACH_TDDList_H_
#define	_IntraFreqRepQuantityRACH_TDDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqRepQuantityRACH-TDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqRepQuantityRACH-TDDList */
typedef struct IntraFreqRepQuantityRACH_TDDList {
	A_SEQUENCE_OF(IntraFreqRepQuantityRACH_TDD_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqRepQuantityRACH_TDDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqRepQuantityRACH_TDDList;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqRepQuantityRACH_TDDList_H_ */
#include <asn_internal.h>
