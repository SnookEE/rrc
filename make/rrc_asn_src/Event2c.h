/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Event2c_H_
#define	_Event2c_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HysteresisInterFreq.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;
struct NonUsedFreqParameterList;

/* Event2c */
typedef struct Event2c {
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	struct NonUsedFreqParameterList	*nonUsedFreqParameterList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2c_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2c;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"
#include "NonUsedFreqParameterList.h"

#endif	/* _Event2c_H_ */
#include <asn_internal.h>
