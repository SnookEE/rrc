/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_HSPDSCH_Information_r7_H_
#define	_DL_HSPDSCH_Information_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_tdd,
	modeSpecificInfo_PR_fdd
} modeSpecificInfo_PR;
typedef enum tdd_PR {
	tdd_PR_NOTHING,	/* No components present */
	tdd_PR_tdd384,
	tdd_PR_tdd768,
	tdd_PR_tdd128
} tdd_PR;

/* Forward declarations */
struct HS_SCCH_Info_r7;
struct Measurement_Feedback_Info;
struct DL_HSPDSCH_TS_Configuration;
struct DL_HSPDSCH_TS_Configuration_VHCR;
struct HS_PDSCH_Midamble_Configuration_TDD128;

/* DL-HSPDSCH-Information-r7 */
typedef struct DL_HSPDSCH_Information_r7 {
	struct HS_SCCH_Info_r7	*hs_scch_Info	/* OPTIONAL */;
	struct Measurement_Feedback_Info	*measurement_feedback_Info	/* OPTIONAL */;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union DL_HSPDSCH_Information_r7__modeSpecificInfo_u {
			struct tdd {
				tdd_PR present;
				union DL_HSPDSCH_Information_r7__modeSpecificInfo__tdd_u {
					struct tdd384 {
						struct DL_HSPDSCH_TS_Configuration	*dl_HSPDSCH_TS_Configuration	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd384;
					struct tdd768 {
						struct DL_HSPDSCH_TS_Configuration_VHCR	*dl_HSPDSCH_TS_Configuration	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd768;
					struct tdd128 {
						struct HS_PDSCH_Midamble_Configuration_TDD128	*hs_PDSCH_Midamble_Configuration_tdd128	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd128;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
			NULL_t	 fdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_HSPDSCH_Information_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_Information_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HS-SCCH-Info-r7.h"
#include "Measurement-Feedback-Info.h"
#include "DL-HSPDSCH-TS-Configuration.h"
#include "DL-HSPDSCH-TS-Configuration-VHCR.h"
#include "HS-PDSCH-Midamble-Configuration-TDD128.h"

#endif	/* _DL_HSPDSCH_Information_r7_H_ */
#include <asn_internal.h>
