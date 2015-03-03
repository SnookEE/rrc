/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MeasurementControl_v590ext_IEs_H_
#define	_MeasurementControl_v590ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "Intra-FreqEventCriteriaList-v590ext.h"
#include "Inter-FreqEventCriteriaList-v590ext.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum measurementCommand_v590ext_PR {
	measurementCommand_v590ext_PR_NOTHING,	/* No components present */
	measurementCommand_v590ext_PR_intra_frequency,
	measurementCommand_v590ext_PR_inter_frequency
} measurementCommand_v590ext_PR;

/* Forward declarations */
struct IntraFreqReportingCriteria_1b_r5;
struct IntraFreqEvent_1d_r5;

/* MeasurementControl-v590ext-IEs */
typedef struct MeasurementControl_v590ext_IEs {
	struct measurementCommand_v590ext {
		measurementCommand_v590ext_PR present;
		union MeasurementControl_v590ext_IEs__measurementCommand_v590ext_u {
			Intra_FreqEventCriteriaList_v590ext_t	 intra_frequency;
			Inter_FreqEventCriteriaList_v590ext_t	 inter_frequency;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measurementCommand_v590ext;
	struct IntraFreqReportingCriteria_1b_r5	*intraFreqReportingCriteria_1b_r5	/* OPTIONAL */;
	struct IntraFreqEvent_1d_r5	*intraFreqEvent_1d_r5	/* OPTIONAL */;
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier_MSP_v590ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_v590ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl_v590ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqReportingCriteria-1b-r5.h"
#include "IntraFreqEvent-1d-r5.h"

#endif	/* _MeasurementControl_v590ext_IEs_H_ */
#include <asn_internal.h>
