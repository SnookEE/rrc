/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_GSM_BA_Range_List_H_
#define	_GSM_BA_Range_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_BA_Range;

/* GSM-BA-Range-List */
typedef struct GSM_BA_Range_List {
	A_SEQUENCE_OF(struct GSM_BA_Range) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_BA_Range_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_BA_Range_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSM-BA-Range.h"

#endif	/* _GSM_BA_Range_List_H_ */
#include <asn_internal.h>
