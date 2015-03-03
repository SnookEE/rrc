/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PrimaryCCPCH_Info_LCR_r4_H_
#define	_PrimaryCCPCH_Info_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "CellParametersID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrimaryCCPCH-Info-LCR-r4 */
typedef struct PrimaryCCPCH_Info_LCR_r4 {
	BOOLEAN_t	 tstd_Indicator;
	CellParametersID_t	*cellParametersID	/* OPTIONAL */;
	BOOLEAN_t	 sctd_Indicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrimaryCCPCH_Info_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrimaryCCPCH_Info_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _PrimaryCCPCH_Info_LCR_r4_H_ */
#include <asn_internal.h>
