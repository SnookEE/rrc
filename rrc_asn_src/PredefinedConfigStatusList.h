/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PredefinedConfigStatusList_H_
#define	_PredefinedConfigStatusList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PredefinedConfigStatusInfo;

/* PredefinedConfigStatusList */
typedef struct PredefinedConfigStatusList {
	A_SEQUENCE_OF(struct PredefinedConfigStatusInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PredefinedConfigStatusList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PredefinedConfigStatusList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PredefinedConfigStatusInfo.h"

#endif	/* _PredefinedConfigStatusList_H_ */
#include <asn_internal.h>
