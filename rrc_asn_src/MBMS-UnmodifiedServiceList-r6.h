/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_UnmodifiedServiceList_r6_H_
#define	_MBMS_UnmodifiedServiceList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_UnmodifiedService_r6;

/* MBMS-UnmodifiedServiceList-r6 */
typedef struct MBMS_UnmodifiedServiceList_r6 {
	A_SEQUENCE_OF(struct MBMS_UnmodifiedService_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_UnmodifiedServiceList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_UnmodifiedServiceList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-UnmodifiedService-r6.h"

#endif	/* _MBMS_UnmodifiedServiceList_r6_H_ */
#include <asn_internal.h>
