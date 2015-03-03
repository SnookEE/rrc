/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_LAI_H_
#define	_LAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LAI */
typedef struct LAI {
	PLMN_Identity_t	 plmn_Identity;
	BIT_STRING_t	 lac;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LAI;

#ifdef __cplusplus
}
#endif

#endif	/* _LAI_H_ */
#include <asn_internal.h>
