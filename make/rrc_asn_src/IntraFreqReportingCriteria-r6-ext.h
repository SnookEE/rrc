/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqReportingCriteria_r6_ext_H_
#define	_IntraFreqReportingCriteria_r6_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Event1j-r6.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* IntraFreqReportingCriteria-r6-ext */
typedef struct IntraFreqReportingCriteria_r6_ext {
	Event1j_r6_t	 event;
	Hysteresis_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_r6_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_r6_ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus.h"

#endif	/* _IntraFreqReportingCriteria_r6_ext_H_ */
#include <asn_internal.h>