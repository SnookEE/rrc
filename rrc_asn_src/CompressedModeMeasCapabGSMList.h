/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompressedModeMeasCapabGSMList_H_
#define	_CompressedModeMeasCapabGSMList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompressedModeMeasCapabGSM;

/* CompressedModeMeasCapabGSMList */
typedef struct CompressedModeMeasCapabGSMList {
	A_SEQUENCE_OF(struct CompressedModeMeasCapabGSM) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabGSMList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabGSMList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CompressedModeMeasCapabGSM.h"

#endif	/* _CompressedModeMeasCapabGSMList_H_ */
#include <asn_internal.h>
