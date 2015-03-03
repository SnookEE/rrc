/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellsForInterFreqMeasList_H_
#define	_CellsForInterFreqMeasList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsForInterFreqMeasList */
typedef struct CellsForInterFreqMeasList {
	A_SEQUENCE_OF(InterFreqCellID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsForInterFreqMeasList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsForInterFreqMeasList;

#ifdef __cplusplus
}
#endif

#endif	/* _CellsForInterFreqMeasList_H_ */
#include <asn_internal.h>
