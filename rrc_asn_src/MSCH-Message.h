/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MSCH_Message_H_
#define	_MSCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MSCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MSCH-Message */
typedef struct MSCH_Message {
	MSCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MSCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MSCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _MSCH_Message_H_ */
#include <asn_internal.h>
