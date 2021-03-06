/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_DPCH_PowerControlInfoPostTDD_H_
#define	_UL_DPCH_PowerControlInfoPostTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-TargetSIR.h"
#include "TDD-UL-Interference.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-DPCH-PowerControlInfoPostTDD */
typedef struct UL_DPCH_PowerControlInfoPostTDD {
	UL_TargetSIR_t	 ul_TargetSIR;
	TDD_UL_Interference_t	 ul_TimeslotInterference;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_PowerControlInfoPostTDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfoPostTDD;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DPCH_PowerControlInfoPostTDD_H_ */
#include <asn_internal.h>
