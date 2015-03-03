/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Event2f_H_
#define	_Event2f_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Threshold.h"
#include "W.h"
#include "HysteresisInterFreq.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* Event2f */
typedef struct Event2f {
	Threshold_t	 usedFreqThreshold;
	W_t	 usedFreqW;
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2f_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2f;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _Event2f_H_ */
#include <asn_internal.h>
