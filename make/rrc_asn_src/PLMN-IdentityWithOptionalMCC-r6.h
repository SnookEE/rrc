/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PLMN_IdentityWithOptionalMCC_r6_H_
#define	_PLMN_IdentityWithOptionalMCC_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MNC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MCC;

/* PLMN-IdentityWithOptionalMCC-r6 */
typedef struct PLMN_IdentityWithOptionalMCC_r6 {
	struct MCC	*mcc	/* OPTIONAL */;
	MNC_t	 mnc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityWithOptionalMCC_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityWithOptionalMCC_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MCC.h"

#endif	/* _PLMN_IdentityWithOptionalMCC_r6_H_ */
#include <asn_internal.h>
