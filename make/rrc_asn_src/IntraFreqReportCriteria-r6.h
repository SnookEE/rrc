/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqReportCriteria_r6_H_
#define	_IntraFreqReportCriteria_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria-r6.h"
#include "PeriodicalWithReportingCellStatus.h"
#include "ReportingCellStatusOpt.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqReportCriteria_r6_PR {
	IntraFreqReportCriteria_r6_PR_NOTHING,	/* No components present */
	IntraFreqReportCriteria_r6_PR_intraFreqReportingCriteria,
	IntraFreqReportCriteria_r6_PR_periodicalReportingCriteria,
	IntraFreqReportCriteria_r6_PR_noReporting
} IntraFreqReportCriteria_r6_PR;

/* IntraFreqReportCriteria-r6 */
typedef struct IntraFreqReportCriteria_r6 {
	IntraFreqReportCriteria_r6_PR present;
	union IntraFreqReportCriteria_r6_u {
		IntraFreqReportingCriteria_r6_t	 intraFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportCriteria_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportCriteria_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqReportCriteria_r6_H_ */
#include <asn_internal.h>
