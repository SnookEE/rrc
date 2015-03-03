/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DSCH_Mapping_H_
#define	_DSCH_Mapping_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MaxTFCI-Field2Value.h"
#include "SF-PDSCH.h"
#include "CodeNumberDSCH.h"
#include "MultiCodeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DSCH-Mapping */
typedef struct DSCH_Mapping {
	MaxTFCI_Field2Value_t	 maxTFCI_Field2Value;
	SF_PDSCH_t	 spreadingFactor;
	CodeNumberDSCH_t	 codeNumber;
	MultiCodeInfo_t	 multiCodeInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DSCH_Mapping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DSCH_Mapping;

#ifdef __cplusplus
}
#endif

#endif	/* _DSCH_Mapping_H_ */
#include <asn_internal.h>
