/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PDSCH_SysInfoList_HCR_r5_H_
#define	_PDSCH_SysInfoList_HCR_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDSCH_SysInfo_HCR_r5;

/* PDSCH-SysInfoList-HCR-r5 */
typedef struct PDSCH_SysInfoList_HCR_r5 {
	A_SEQUENCE_OF(struct PDSCH_SysInfo_HCR_r5) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_SysInfoList_HCR_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_SysInfoList_HCR_r5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDSCH-SysInfo-HCR-r5.h"

#endif	/* _PDSCH_SysInfoList_HCR_r5_H_ */
#include <asn_internal.h>
