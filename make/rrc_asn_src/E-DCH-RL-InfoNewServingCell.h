/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_E_DCH_RL_InfoNewServingCell_H_
#define	_E_DCH_RL_InfoNewServingCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "E-AGCH-Information.h"
#include "E-DPCCH-DPCCH-PowerOffset.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include "E-RGCH-Information.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum primary_Secondary_GrantSelector {
	primary_Secondary_GrantSelector_primary	= 0,
	primary_Secondary_GrantSelector_secondary	= 1
} e_primary_Secondary_GrantSelector;
typedef enum e_RGCH_Info_PR {
	e_RGCH_Info_PR_NOTHING,	/* No components present */
	e_RGCH_Info_PR_e_RGCH_Information,
	e_RGCH_Info_PR_releaseIndicator
} e_RGCH_Info_PR;

/* Forward declarations */
struct E_DPDCH_Reference_E_TFCIList;
struct E_HICH_Information;

/* E-DCH-RL-InfoNewServingCell */
typedef struct E_DCH_RL_InfoNewServingCell {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	E_AGCH_Information_t	 e_AGCH_Information;
	struct servingGrant {
		long	*value	/* OPTIONAL */;
		long	 primary_Secondary_GrantSelector;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *servingGrant;
	E_DPCCH_DPCCH_PowerOffset_t	*e_DPCCH_DPCCH_PowerOffset	/* OPTIONAL */;
	struct E_DPDCH_Reference_E_TFCIList	*reference_E_TFCIs	/* OPTIONAL */;
	long	*powerOffsetForSchedInfo	/* OPTIONAL */;
	long	*threeIndexStepThreshold	/* OPTIONAL */;
	long	*twoIndexStepThreshold	/* OPTIONAL */;
	struct E_HICH_Information	*e_HICH_Information	/* OPTIONAL */;
	struct e_RGCH_Info {
		e_RGCH_Info_PR present;
		union E_DCH_RL_InfoNewServingCell__e_RGCH_Info_u {
			E_RGCH_Information_t	 e_RGCH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_RGCH_Info;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DCH_RL_InfoNewServingCell_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_primary_Secondary_GrantSelector_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E_DCH_RL_InfoNewServingCell;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-DPDCH-Reference-E-TFCIList.h"
#include "E-HICH-Information.h"

#endif	/* _E_DCH_RL_InfoNewServingCell_H_ */
#include <asn_internal.h>
