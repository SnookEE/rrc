/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RAB_InformationSetupList_r5_H_
#define	_RAB_InformationSetupList_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAB_InformationSetup_r5;

/* RAB-InformationSetupList-r5 */
typedef struct RAB_InformationSetupList_r5 {
	A_SEQUENCE_OF(struct RAB_InformationSetup_r5) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationSetupList_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationSetupList_r5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAB-InformationSetup-r5.h"

#endif	/* _RAB_InformationSetupList_r5_H_ */
#include <asn_internal.h>
