/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RLC_InfoChoice_r6_H_
#define	_RLC_InfoChoice_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RLC-Info-r6.h"
#include "RB-Identity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_InfoChoice_r6_PR {
	RLC_InfoChoice_r6_PR_NOTHING,	/* No components present */
	RLC_InfoChoice_r6_PR_rlc_Info,
	RLC_InfoChoice_r6_PR_same_as_RB
} RLC_InfoChoice_r6_PR;

/* RLC-InfoChoice-r6 */
typedef struct RLC_InfoChoice_r6 {
	RLC_InfoChoice_r6_PR present;
	union RLC_InfoChoice_r6_u {
		RLC_Info_r6_t	 rlc_Info;
		RB_Identity_t	 same_as_RB;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_InfoChoice_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_InfoChoice_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_InfoChoice_r6_H_ */
#include <asn_internal.h>
