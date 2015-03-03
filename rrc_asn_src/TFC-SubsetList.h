/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TFC_SubsetList_H_
#define	_TFC_SubsetList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "TFC-Subset.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* Forward declarations */
struct TFCS_Identity;

/* TFC-SubsetList */
typedef struct TFC_SubsetList {
	A_SEQUENCE_OF(struct Member {
		struct modeSpecificInfo {
			modeSpecificInfo_PR present;
			union modeSpecificInfo_u {
				NULL_t	 fdd;
				struct tdd {
					struct TFCS_Identity	*tfcs_ID	/* OPTIONAL */;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tdd;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} modeSpecificInfo;
		TFC_Subset_t	 tfc_Subset;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TFC_SubsetList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TFC_SubsetList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TFCS-Identity.h"

#endif	/* _TFC_SubsetList_H_ */
#include <asn_internal.h>
