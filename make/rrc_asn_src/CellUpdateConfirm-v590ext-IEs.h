/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellUpdateConfirm_v590ext_IEs_H_
#define	_CellUpdateConfirm_v590ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_TPC_PowerOffsetPerRL_List;

/* CellUpdateConfirm-v590ext-IEs */
typedef struct CellUpdateConfirm_v590ext_IEs {
	struct DL_TPC_PowerOffsetPerRL_List	*dl_TPC_PowerOffsetPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdateConfirm_v590ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdateConfirm_v590ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-TPC-PowerOffsetPerRL-List.h"

#endif	/* _CellUpdateConfirm_v590ext_IEs_H_ */
#include <asn_internal.h>
