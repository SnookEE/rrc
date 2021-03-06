/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATReportCriteria_H_
#define	_InterRATReportCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterRATReportingCriteria.h"
#include "PeriodicalWithReportingCellStatus.h"
#include "ReportingCellStatusOpt.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterRATReportCriteria_PR {
	InterRATReportCriteria_PR_NOTHING,	/* No components present */
	InterRATReportCriteria_PR_interRATReportingCriteria,
	InterRATReportCriteria_PR_periodicalReportingCriteria,
	InterRATReportCriteria_PR_noReporting
} InterRATReportCriteria_PR;

/* InterRATReportCriteria */
typedef struct InterRATReportCriteria {
	InterRATReportCriteria_PR present;
	union InterRATReportCriteria_u {
		InterRATReportingCriteria_t	 interRATReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATReportCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATReportCriteria;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRATReportCriteria_H_ */
#include <asn_internal.h>
