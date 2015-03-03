/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MultiplePLMN_List_r6_H_
#define	_MultiplePLMN_List_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityWithOptionalMCC_r6;

/* MultiplePLMN-List-r6 */
typedef struct MultiplePLMN_List_r6 {
	BOOLEAN_t	 mibPLMN_Identity;
	struct multiplePLMNs {
		A_SEQUENCE_OF(struct PLMN_IdentityWithOptionalMCC_r6) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} multiplePLMNs;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiplePLMN_List_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiplePLMN_List_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityWithOptionalMCC-r6.h"

#endif	/* _MultiplePLMN_List_r6_H_ */
#include <asn_internal.h>