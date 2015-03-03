/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ReportingCellStatus_H_
#define	_ReportingCellStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MaxNumberOfReportingCellsType1.h"
#include "MaxNumberOfReportingCellsType3.h"
#include "MaxNumberOfReportingCellsType2.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportingCellStatus_PR {
	ReportingCellStatus_PR_NOTHING,	/* No components present */
	ReportingCellStatus_PR_withinActiveSet,
	ReportingCellStatus_PR_withinMonitoredSetUsedFreq,
	ReportingCellStatus_PR_withinActiveAndOrMonitoredUsedFreq,
	ReportingCellStatus_PR_withinDetectedSetUsedFreq,
	ReportingCellStatus_PR_withinMonitoredAndOrDetectedUsedFreq,
	ReportingCellStatus_PR_allActiveplusMonitoredSet,
	ReportingCellStatus_PR_allActivePlusDetectedSet,
	ReportingCellStatus_PR_allActivePlusMonitoredAndOrDetectedSet,
	ReportingCellStatus_PR_withinVirtualActSet,
	ReportingCellStatus_PR_withinMonitoredSetNonUsedFreq,
	ReportingCellStatus_PR_withinMonitoredAndOrVirtualActiveSetNonUsedFreq,
	ReportingCellStatus_PR_allVirtualActSetplusMonitoredSetNonUsedFreq,
	ReportingCellStatus_PR_withinActSetOrVirtualActSet_InterRATcells,
	ReportingCellStatus_PR_withinActSetAndOrMonitoredUsedFreqOrVirtualActSetAndOrMonitoredNonUsedFreq
} ReportingCellStatus_PR;

/* ReportingCellStatus */
typedef struct ReportingCellStatus {
	ReportingCellStatus_PR present;
	union ReportingCellStatus_u {
		MaxNumberOfReportingCellsType1_t	 withinActiveSet;
		MaxNumberOfReportingCellsType1_t	 withinMonitoredSetUsedFreq;
		MaxNumberOfReportingCellsType1_t	 withinActiveAndOrMonitoredUsedFreq;
		MaxNumberOfReportingCellsType1_t	 withinDetectedSetUsedFreq;
		MaxNumberOfReportingCellsType1_t	 withinMonitoredAndOrDetectedUsedFreq;
		MaxNumberOfReportingCellsType3_t	 allActiveplusMonitoredSet;
		MaxNumberOfReportingCellsType3_t	 allActivePlusDetectedSet;
		MaxNumberOfReportingCellsType3_t	 allActivePlusMonitoredAndOrDetectedSet;
		MaxNumberOfReportingCellsType1_t	 withinVirtualActSet;
		MaxNumberOfReportingCellsType1_t	 withinMonitoredSetNonUsedFreq;
		MaxNumberOfReportingCellsType1_t	 withinMonitoredAndOrVirtualActiveSetNonUsedFreq;
		MaxNumberOfReportingCellsType3_t	 allVirtualActSetplusMonitoredSetNonUsedFreq;
		MaxNumberOfReportingCellsType2_t	 withinActSetOrVirtualActSet_InterRATcells;
		MaxNumberOfReportingCellsType2_t	 withinActSetAndOrMonitoredUsedFreqOrVirtualActSetAndOrMonitoredNonUsedFreq;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportingCellStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingCellStatus;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingCellStatus_H_ */
#include <asn_internal.h>
