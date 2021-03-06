/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RB_InformationChanged_r6_H_
#define	_RB_InformationChanged_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum rb_Change_PR {
	rb_Change_PR_NOTHING,	/* No components present */
	rb_Change_PR_release,
	rb_Change_PR_re_mapToDefaultRb
} rb_Change_PR;

/* RB-InformationChanged-r6 */
typedef struct RB_InformationChanged_r6 {
	RB_Identity_t	 rb_Identity;
	struct rb_Change {
		rb_Change_PR present;
		union RB_InformationChanged_r6__rb_Change_u {
			NULL_t	 release;
			RB_Identity_t	 re_mapToDefaultRb;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rb_Change;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationChanged_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationChanged_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _RB_InformationChanged_r6_H_ */
#include <asn_internal.h>
