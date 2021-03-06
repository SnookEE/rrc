/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_GSM_TargetCellInfo_H_
#define	_GSM_TargetCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCH-ARFCN.h"
#include "Frequency-Band.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BSIC;

/* GSM-TargetCellInfo */
typedef struct GSM_TargetCellInfo {
	BCCH_ARFCN_t	 bcch_ARFCN;
	Frequency_Band_t	 frequency_band;
	struct BSIC	*bsic	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_TargetCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_TargetCellInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BSIC.h"

#endif	/* _GSM_TargetCellInfo_H_ */
#include <asn_internal.h>
