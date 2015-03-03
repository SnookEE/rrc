/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_CCCH_MessageType_H_
#define	_DL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellUpdateConfirm-CCCH.h"
#include "RRCConnectionReject.h"
#include "RRCConnectionRelease-CCCH.h"
#include "RRCConnectionSetup.h"
#include "URAUpdateConfirm-CCCH.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_CCCH_MessageType_PR {
	DL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	DL_CCCH_MessageType_PR_cellUpdateConfirm,
	DL_CCCH_MessageType_PR_rrcConnectionReject,
	DL_CCCH_MessageType_PR_rrcConnectionRelease,
	DL_CCCH_MessageType_PR_rrcConnectionSetup,
	DL_CCCH_MessageType_PR_uraUpdateConfirm,
	DL_CCCH_MessageType_PR_spare3,
	DL_CCCH_MessageType_PR_spare2,
	DL_CCCH_MessageType_PR_spare1
} DL_CCCH_MessageType_PR;

/* DL-CCCH-MessageType */
typedef struct DL_CCCH_MessageType {
	DL_CCCH_MessageType_PR present;
	union DL_CCCH_MessageType_u {
		CellUpdateConfirm_CCCH_t	 cellUpdateConfirm;
		RRCConnectionReject_t	 rrcConnectionReject;
		RRCConnectionRelease_CCCH_t	 rrcConnectionRelease;
		RRCConnectionSetup_t	 rrcConnectionSetup;
		URAUpdateConfirm_CCCH_t	 uraUpdateConfirm;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CCCH_MessageType_H_ */
#include <asn_internal.h>
