/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_CounterSynchronisationInfo_H_
#define	_DL_CounterSynchronisationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_WithPDCP_InfoList;

/* DL-CounterSynchronisationInfo */
typedef struct DL_CounterSynchronisationInfo {
	struct RB_WithPDCP_InfoList	*rB_WithPDCP_InfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CounterSynchronisationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CounterSynchronisationInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-WithPDCP-InfoList.h"

#endif	/* _DL_CounterSynchronisationInfo_H_ */
#include <asn_internal.h>
