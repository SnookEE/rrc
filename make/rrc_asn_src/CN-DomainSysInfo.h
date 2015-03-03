/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CN_DomainSysInfo_H_
#define	_CN_DomainSysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CN-DomainIdentity.h"
#include "CN-DRX-CycleLengthCoefficient.h"
#include "NAS-SystemInformationGSM-MAP.h"
#include "NAS-SystemInformationANSI-41.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cn_Type_PR {
	cn_Type_PR_NOTHING,	/* No components present */
	cn_Type_PR_gsm_MAP,
	cn_Type_PR_ansi_41
} cn_Type_PR;

/* CN-DomainSysInfo */
typedef struct CN_DomainSysInfo {
	CN_DomainIdentity_t	 cn_DomainIdentity;
	struct cn_Type {
		cn_Type_PR present;
		union CN_DomainSysInfo__cn_Type_u {
			NAS_SystemInformationGSM_MAP_t	 gsm_MAP;
			NAS_SystemInformationANSI_41_t	 ansi_41;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cn_Type;
	CN_DRX_CycleLengthCoefficient_t	 cn_DRX_CycleLengthCoeff;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CN_DomainSysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CN_DomainSysInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _CN_DomainSysInfo_H_ */
#include <asn_internal.h>
