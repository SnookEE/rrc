/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RAB_Info_r6_ext_H_
#define	_RAB_Info_r6_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-SessionIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAB-Info-r6-ext */
typedef struct RAB_Info_r6_ext {
	MBMS_SessionIdentity_t	*mbms_SessionIdentity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_Info_r6_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_Info_r6_ext;

#ifdef __cplusplus
}
#endif

#endif	/* _RAB_Info_r6_ext_H_ */
#include <asn_internal.h>