/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RL_AdditionInfoList_H_
#define	_RL_AdditionInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrimaryCPICH_Info;

/* RL-AdditionInfoList */
typedef struct RL_AdditionInfoList {
	A_SEQUENCE_OF(struct PrimaryCPICH_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RL_AdditionInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RL_AdditionInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrimaryCPICH-Info.h"

#endif	/* _RL_AdditionInfoList_H_ */
#include <asn_internal.h>
