/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFreqReportCriteria_H_
#define	_InterFreqReportCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria.h"
#include "InterFreqReportingCriteria.h"
#include "PeriodicalWithReportingCellStatus.h"
#include "ReportingCellStatusOpt.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqReportCriteria_PR {
	InterFreqReportCriteria_PR_NOTHING,	/* No components present */
	InterFreqReportCriteria_PR_intraFreqReportingCriteria,
	InterFreqReportCriteria_PR_interFreqReportingCriteria,
	InterFreqReportCriteria_PR_periodicalReportingCriteria,
	InterFreqReportCriteria_PR_noReporting
} InterFreqReportCriteria_PR;

/* InterFreqReportCriteria */
typedef struct InterFreqReportCriteria {
	InterFreqReportCriteria_PR present;
	union InterFreqReportCriteria_u {
		IntraFreqReportingCriteria_t	 intraFreqReportingCriteria;
		InterFreqReportingCriteria_t	 interFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportCriteria;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqReportCriteria_H_ */
#include <asn_internal.h>
