/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CommonTransChTFS_LCR_H_
#define	_CommonTransChTFS_LCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SemistaticTF-Information.h"
#include "CommonDynamicTF-InfoList.h"
#include "CommonDynamicTF-InfoList-DynamicTTI.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum tti_PR {
	tti_PR_NOTHING,	/* No components present */
	tti_PR_tti5,
	tti_PR_tti10,
	tti_PR_tti20,
	tti_PR_tti40,
	tti_PR_tti80,
	tti_PR_dynamic
} tti_PR;

/* CommonTransChTFS-LCR */
typedef struct CommonTransChTFS_LCR {
	struct tti {
		tti_PR present;
		union CommonTransChTFS_LCR__tti_u {
			CommonDynamicTF_InfoList_t	 tti5;
			CommonDynamicTF_InfoList_t	 tti10;
			CommonDynamicTF_InfoList_t	 tti20;
			CommonDynamicTF_InfoList_t	 tti40;
			CommonDynamicTF_InfoList_t	 tti80;
			CommonDynamicTF_InfoList_DynamicTTI_t	 dynamic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tti;
	SemistaticTF_Information_t	 semistaticTF_Information;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonTransChTFS_LCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonTransChTFS_LCR;

#ifdef __cplusplus
}
#endif

#endif	/* _CommonTransChTFS_LCR_H_ */
#include <asn_internal.h>
