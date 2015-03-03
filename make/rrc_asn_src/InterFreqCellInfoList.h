/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFreqCellInfoList_H_
#define	_InterFreqCellInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedInterFreqCellList;
struct NewInterFreqCellList;
struct CellsForInterFreqMeasList;

/* InterFreqCellInfoList */
typedef struct InterFreqCellInfoList {
	struct RemovedInterFreqCellList	*removedInterFreqCellList	/* OPTIONAL */;
	struct NewInterFreqCellList	*newInterFreqCellList	/* OPTIONAL */;
	struct CellsForInterFreqMeasList	*cellsForInterFreqMeasList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCellInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCellInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemovedInterFreqCellList.h"
#include "NewInterFreqCellList.h"
#include "CellsForInterFreqMeasList.h"

#endif	/* _InterFreqCellInfoList_H_ */
#include <asn_internal.h>
