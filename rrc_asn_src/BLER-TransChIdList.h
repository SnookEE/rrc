/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_BLER_TransChIdList_H_
#define	_BLER_TransChIdList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportChannelIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BLER-TransChIdList */
typedef struct BLER_TransChIdList {
	A_SEQUENCE_OF(TransportChannelIdentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BLER_TransChIdList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BLER_TransChIdList;

#ifdef __cplusplus
}
#endif

#endif	/* _BLER_TransChIdList_H_ */
#include <asn_internal.h>
