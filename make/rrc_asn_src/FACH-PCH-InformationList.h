/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_FACH_PCH_InformationList_H_
#define	_FACH_PCH_InformationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FACH_PCH_Information;

/* FACH-PCH-InformationList */
typedef struct FACH_PCH_InformationList {
	A_SEQUENCE_OF(struct FACH_PCH_Information) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FACH_PCH_InformationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FACH_PCH_InformationList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FACH-PCH-Information.h"

#endif	/* _FACH_PCH_InformationList_H_ */
#include <asn_internal.h>
