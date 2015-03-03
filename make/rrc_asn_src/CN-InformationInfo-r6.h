/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CN_InformationInfo_r6_H_
#define	_CN_InformationInfo_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NAS-SystemInformationGSM-MAP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;
struct CN_DomainInformationList;

/* CN-InformationInfo-r6 */
typedef struct CN_InformationInfo_r6 {
	struct PLMN_Identity	*plmn_Identity	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	*cn_CommonGSM_MAP_NAS_SysInfo	/* OPTIONAL */;
	struct CN_DomainInformationList	*cn_DomainInformationList	/* OPTIONAL */;
	struct PLMN_Identity	*primary_plmn_Identity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CN_InformationInfo_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CN_InformationInfo_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"
#include "CN-DomainInformationList.h"

#endif	/* _CN_InformationInfo_r6_H_ */
#include <asn_internal.h>
