/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFreqCellInfoSI_List_ECN0_LCR_H_
#define	_InterFreqCellInfoSI_List_ECN0_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedInterFreqCellList;
struct NewInterFreqCellSI_List_ECN0_LCR_r4;

/* InterFreqCellInfoSI-List-ECN0-LCR */
typedef struct InterFreqCellInfoSI_List_ECN0_LCR {
	struct RemovedInterFreqCellList	*removedInterFreqCellList	/* OPTIONAL */;
	struct NewInterFreqCellSI_List_ECN0_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCellInfoSI_List_ECN0_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCellInfoSI_List_ECN0_LCR;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemovedInterFreqCellList.h"
#include "NewInterFreqCellSI-List-ECN0-LCR-r4.h"

#endif	/* _InterFreqCellInfoSI_List_ECN0_LCR_H_ */
#include <asn_internal.h>
