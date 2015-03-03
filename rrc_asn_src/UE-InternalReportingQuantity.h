/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_InternalReportingQuantity_H_
#define	_UE_InternalReportingQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* UE-InternalReportingQuantity */
typedef struct UE_InternalReportingQuantity {
	BOOLEAN_t	 ue_TransmittedPower;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union UE_InternalReportingQuantity__modeSpecificInfo_u {
			struct fdd {
				BOOLEAN_t	 ue_RX_TX_TimeDifference;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				BOOLEAN_t	 appliedTA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalReportingQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalReportingQuantity;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_InternalReportingQuantity_H_ */
#include <asn_internal.h>
