/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellUpdateConfirm_v5d0ext_IEs_H_
#define	_CellUpdateConfirm_v5d0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-ROHC-TargetMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellUpdateConfirm-v5d0ext-IEs */
typedef struct CellUpdateConfirm_v5d0ext_IEs {
	PDCP_ROHC_TargetMode_t	*pdcp_ROHC_TargetMode	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdateConfirm_v5d0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdateConfirm_v5d0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _CellUpdateConfirm_v5d0ext_IEs_H_ */
#include <asn_internal.h>
