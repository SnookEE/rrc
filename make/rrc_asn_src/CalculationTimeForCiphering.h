/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CalculationTimeForCiphering_H_
#define	_CalculationTimeForCiphering_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CalculationTimeForCiphering */
typedef struct CalculationTimeForCiphering {
	CellIdentity_t	 cell_Id;
	long	 sfn;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CalculationTimeForCiphering_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CalculationTimeForCiphering;

#ifdef __cplusplus
}
#endif

#endif	/* _CalculationTimeForCiphering_H_ */
#include <asn_internal.h>
