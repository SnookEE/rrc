/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_ControlledTrChList_H_
#define	_UL_ControlledTrChList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportChannelIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-ControlledTrChList */
typedef struct UL_ControlledTrChList {
	A_SEQUENCE_OF(TransportChannelIdentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ControlledTrChList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ControlledTrChList;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_ControlledTrChList_H_ */
#include <asn_internal.h>
