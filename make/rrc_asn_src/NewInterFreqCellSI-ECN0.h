/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_NewInterFreqCellSI_ECN0_H_
#define	_NewInterFreqCellSI_ECN0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellID.h"
#include "CellInfoSI-ECN0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfo;

/* NewInterFreqCellSI-ECN0 */
typedef struct NewInterFreqCellSI_ECN0 {
	InterFreqCellID_t	*interFreqCellID	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	CellInfoSI_ECN0_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterFreqCellSI_ECN0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterFreqCellSI_ECN0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"

#endif	/* _NewInterFreqCellSI_ECN0_H_ */
#include <asn_internal.h>
