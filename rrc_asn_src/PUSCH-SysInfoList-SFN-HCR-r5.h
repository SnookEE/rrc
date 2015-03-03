/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PUSCH_SysInfoList_SFN_HCR_r5_H_
#define	_PUSCH_SysInfoList_SFN_HCR_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "PUSCH-SysInfo-HCR-r5.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SFN_TimeInfo;

/* PUSCH-SysInfoList-SFN-HCR-r5 */
typedef struct PUSCH_SysInfoList_SFN_HCR_r5 {
	A_SEQUENCE_OF(struct Member {
		PUSCH_SysInfo_HCR_r5_t	 pusch_SysInfo;
		struct SFN_TimeInfo	*sfn_TimeInfo	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_HCR_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_SFN_HCR_r5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SFN-TimeInfo.h"

#endif	/* _PUSCH_SysInfoList_SFN_HCR_r5_H_ */
#include <asn_internal.h>
