/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_NonUsedFreqWList_r6_H_
#define	_NonUsedFreqWList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "W.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NonUsedFreqWList-r6 */
typedef struct NonUsedFreqWList_r6 {
	A_SEQUENCE_OF(W_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonUsedFreqWList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NonUsedFreqWList_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _NonUsedFreqWList_r6_H_ */
#include <asn_internal.h>
