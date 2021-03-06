/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_InformationPerRL_r6_H_
#define	_DL_InformationPerRL_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "PrimaryCCPCH-Info-r4.h"
#include "PrimaryCPICH-Info.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "DL-DPCH-InfoPerRL-r6.h"
#include "DL-FDPCH-InfoPerRL-r6.h"
#include "E-HICH-Information.h"
#include <NULL.h>
#include "E-RGCH-Information.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;
typedef enum dl_dpchInfo_PR {
	dl_dpchInfo_PR_NOTHING,	/* No components present */
	dl_dpchInfo_PR_dl_DPCH_InfoPerRL,
	dl_dpchInfo_PR_dl_FDPCH_InfoPerRL
} dl_dpchInfo_PR;
typedef enum e_HICH_Info_PR {
	e_HICH_Info_PR_NOTHING,	/* No components present */
	e_HICH_Info_PR_e_HICH_Information,
	e_HICH_Info_PR_releaseIndicator
} e_HICH_Info_PR;
typedef enum e_RGCH_Info_PR {
	e_RGCH_Info_PR_NOTHING,	/* No components present */
	e_RGCH_Info_PR_e_RGCH_Information,
	e_RGCH_Info_PR_releaseIndicator
} e_RGCH_Info_PR;

/* Forward declarations */
struct E_AGCH_Information;

/* DL-InformationPerRL-r6 */
typedef struct DL_InformationPerRL_r6 {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union DL_InformationPerRL_r6__modeSpecificInfo_u {
			struct fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				BOOLEAN_t	 servingHSDSCH_RL_indicator;
				BOOLEAN_t	 servingEDCH_RL_indicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			PrimaryCCPCH_Info_r4_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct dl_dpchInfo {
		dl_dpchInfo_PR present;
		union DL_InformationPerRL_r6__dl_dpchInfo_u {
			DL_DPCH_InfoPerRL_r6_t	 dl_DPCH_InfoPerRL;
			DL_FDPCH_InfoPerRL_r6_t	 dl_FDPCH_InfoPerRL;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_dpchInfo;
	struct E_AGCH_Information	*e_AGCH_Information	/* OPTIONAL */;
	struct e_HICH_Info {
		e_HICH_Info_PR present;
		union DL_InformationPerRL_r6__e_HICH_Info_u {
			E_HICH_Information_t	 e_HICH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_HICH_Info;
	struct e_RGCH_Info {
		e_RGCH_Info_PR present;
		union DL_InformationPerRL_r6__e_RGCH_Info_u {
			E_RGCH_Information_t	 e_RGCH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_RGCH_Info;
	CellIdentity_t	*cell_id	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerRL_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-AGCH-Information.h"

#endif	/* _DL_InformationPerRL_r6_H_ */
#include <asn_internal.h>
