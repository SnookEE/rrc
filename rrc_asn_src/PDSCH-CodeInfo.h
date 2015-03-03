/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PDSCH_CodeInfo_H_
#define	_PDSCH_CodeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SF-PDSCH.h"
#include "CodeNumberDSCH.h"
#include "MultiCodeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDSCH-CodeInfo */
typedef struct PDSCH_CodeInfo {
	SF_PDSCH_t	 spreadingFactor;
	CodeNumberDSCH_t	 codeNumber;
	MultiCodeInfo_t	 multiCodeInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_CodeInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_CodeInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_CodeInfo_H_ */
#include <asn_internal.h>
