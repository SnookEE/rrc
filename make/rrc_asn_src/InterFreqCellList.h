/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFreqCellList_H_
#define	_InterFreqCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCell;

/* InterFreqCellList */
typedef struct InterFreqCellList {
	A_SEQUENCE_OF(struct InterFreqCell) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCellList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCell.h"

#endif	/* _InterFreqCellList_H_ */
#include <asn_internal.h>
