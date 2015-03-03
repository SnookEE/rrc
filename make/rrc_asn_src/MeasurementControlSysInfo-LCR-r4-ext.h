/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MeasurementControlSysInfo_LCR_r4_ext_H_
#define	_MeasurementControlSysInfo_LCR_r4_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum use_of_HCS_PR {
	use_of_HCS_PR_NOTHING,	/* No components present */
	use_of_HCS_PR_hcs_not_used,
	use_of_HCS_PR_hcs_used
} use_of_HCS_PR;
typedef enum cellSelectQualityMeasure_PR {
	cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	cellSelectQualityMeasure_PR_cpich_RSCP,
	cellSelectQualityMeasure_PR_cpich_Ec_N0
} cellSelectQualityMeasure_PR;
typedef enum cellSelectQualityMeasure_PR {
	cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	cellSelectQualityMeasure_PR_cpich_RSCP,
	cellSelectQualityMeasure_PR_cpich_Ec_N0
} cellSelectQualityMeasure_PR;

/* Forward declarations */
struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4;
struct InterFreqMeasurementSysInfo_RSCP_LCR_r4;
struct IntraFreqMeasurementSysInfo_ECN0_LCR_r4;
struct InterFreqMeasurementSysInfo_ECN0_LCR_r4;
struct IntraFreqMeasurementSysInfo_HCS_RSCP_LCR_r4;
struct InterFreqMeasurementSysInfo_HCS_RSCP_LCR_r4;
struct IntraFreqMeasurementSysInfo_HCS_ECN0_LCR_r4;
struct InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4;

/* MeasurementControlSysInfo-LCR-r4-ext */
typedef struct MeasurementControlSysInfo_LCR_r4_ext {
	struct use_of_HCS {
		use_of_HCS_PR present;
		union MeasurementControlSysInfo_LCR_r4_ext__use_of_HCS_u {
			struct hcs_not_used {
				struct cellSelectQualityMeasure {
					cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfo_LCR_r4_ext__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_u {
						struct cpich_RSCP {
							struct IntraFreqMeasurementSysInfo_RSCP_LCR_r4	*intraFreqMeasurementSysInfo	/* OPTIONAL */;
							struct InterFreqMeasurementSysInfo_RSCP_LCR_r4	*interFreqMeasurementSysInfo	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct cpich_Ec_N0 {
							struct IntraFreqMeasurementSysInfo_ECN0_LCR_r4	*intraFreqMeasurementSysInfo	/* OPTIONAL */;
							struct InterFreqMeasurementSysInfo_ECN0_LCR_r4	*interFreqMeasurementSysInfo	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_not_used;
			struct hcs_used {
				struct cellSelectQualityMeasure {
					cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfo_LCR_r4_ext__use_of_HCS__hcs_used__cellSelectQualityMeasure_u {
						struct cpich_RSCP {
							struct IntraFreqMeasurementSysInfo_HCS_RSCP_LCR_r4	*intraFreqMeasurementSysInfo	/* OPTIONAL */;
							struct InterFreqMeasurementSysInfo_HCS_RSCP_LCR_r4	*interFreqMeasurementSysInfo	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct cpich_Ec_N0 {
							struct IntraFreqMeasurementSysInfo_HCS_ECN0_LCR_r4	*intraFreqMeasurementSysInfo	/* OPTIONAL */;
							struct InterFreqMeasurementSysInfo_HCS_ECN0_LCR_r4	*interFreqMeasurementSysInfo	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_used;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} use_of_HCS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControlSysInfo_LCR_r4_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControlSysInfo_LCR_r4_ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqMeasurementSysInfo-RSCP-LCR-r4.h"
#include "InterFreqMeasurementSysInfo-RSCP-LCR-r4.h"
#include "IntraFreqMeasurementSysInfo-ECN0-LCR-r4.h"
#include "InterFreqMeasurementSysInfo-ECN0-LCR-r4.h"
#include "IntraFreqMeasurementSysInfo-HCS-RSCP-LCR-r4.h"
#include "InterFreqMeasurementSysInfo-HCS-RSCP-LCR-r4.h"
#include "IntraFreqMeasurementSysInfo-HCS-ECN0-LCR-r4.h"
#include "InterFreqMeasurementSysInfo-HCS-ECN0-LCR-r4.h"

#endif	/* _MeasurementControlSysInfo_LCR_r4_ext_H_ */
#include <asn_internal.h>
