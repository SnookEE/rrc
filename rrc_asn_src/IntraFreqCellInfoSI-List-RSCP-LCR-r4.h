/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqCellInfoSI_List_RSCP_LCR_r4_H_
#define	_IntraFreqCellInfoSI_List_RSCP_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NewIntraFreqCellSI-List-RSCP-LCR-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedIntraFreqCellList;

/* IntraFreqCellInfoSI-List-RSCP-LCR-r4 */
typedef struct IntraFreqCellInfoSI_List_RSCP_LCR_r4 {
	struct RemovedIntraFreqCellList	*removedIntraFreqCellList	/* OPTIONAL */;
	NewIntraFreqCellSI_List_RSCP_LCR_r4_t	 newIntraFreqCellList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqCellInfoSI_List_RSCP_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqCellInfoSI_List_RSCP_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemovedIntraFreqCellList.h"

#endif	/* _IntraFreqCellInfoSI_List_RSCP_LCR_r4_H_ */
#include <asn_internal.h>
