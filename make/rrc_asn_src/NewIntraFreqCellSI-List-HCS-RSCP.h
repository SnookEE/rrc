/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_NewIntraFreqCellSI_List_HCS_RSCP_H_
#define	_NewIntraFreqCellSI_List_HCS_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewIntraFreqCellSI_HCS_RSCP;

/* NewIntraFreqCellSI-List-HCS-RSCP */
typedef struct NewIntraFreqCellSI_List_HCS_RSCP {
	A_SEQUENCE_OF(struct NewIntraFreqCellSI_HCS_RSCP) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellSI_List_HCS_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellSI_List_HCS_RSCP;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewIntraFreqCellSI-HCS-RSCP.h"

#endif	/* _NewIntraFreqCellSI_List_HCS_RSCP_H_ */
#include <asn_internal.h>
