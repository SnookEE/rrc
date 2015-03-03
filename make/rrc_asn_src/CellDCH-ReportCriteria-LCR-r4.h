/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellDCH_ReportCriteria_LCR_r4_H_
#define	_CellDCH_ReportCriteria_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria-LCR-r4.h"
#include "PeriodicalReportingCriteria.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellDCH_ReportCriteria_LCR_r4_PR {
	CellDCH_ReportCriteria_LCR_r4_PR_NOTHING,	/* No components present */
	CellDCH_ReportCriteria_LCR_r4_PR_intraFreqReportingCriteria,
	CellDCH_ReportCriteria_LCR_r4_PR_periodicalReportingCriteria
} CellDCH_ReportCriteria_LCR_r4_PR;

/* CellDCH-ReportCriteria-LCR-r4 */
typedef struct CellDCH_ReportCriteria_LCR_r4 {
	CellDCH_ReportCriteria_LCR_r4_PR present;
	union CellDCH_ReportCriteria_LCR_r4_u {
		IntraFreqReportingCriteria_LCR_r4_t	 intraFreqReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellDCH_ReportCriteria_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellDCH_ReportCriteria_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _CellDCH_ReportCriteria_LCR_r4_H_ */
#include <asn_internal.h>
