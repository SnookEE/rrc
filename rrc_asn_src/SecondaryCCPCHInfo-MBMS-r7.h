/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SecondaryCCPCHInfo_MBMS_r7_H_
#define	_SecondaryCCPCHInfo_MBMS_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DownlinkTimeslotsCodes.h"
#include "DownlinkTimeslotsCodes-VHCR.h"
#include "DownlinkTimeslotsCodes-LCR-r4.h"
#include "SecondaryScramblingCode.h"
#include <BOOLEAN.h>
#include "SF256-AndCodeNumber.h"
#include "TimingOffset.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd384,
	modeSpecificInfo_PR_tdd768,
	modeSpecificInfo_PR_tdd128
} modeSpecificInfo_PR;

/* SecondaryCCPCHInfo-MBMS-r7 */
typedef struct SecondaryCCPCHInfo_MBMS_r7 {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union SecondaryCCPCHInfo_MBMS_r7__modeSpecificInfo_u {
			struct fdd {
				SecondaryScramblingCode_t	*secondaryScramblingCode	/* OPTIONAL */;
				BOOLEAN_t	 sttd_Indicator;
				SF256_AndCodeNumber_t	 sf_AndCodeNumber;
				TimingOffset_t	 timingOffset	/* DEFAULT 0 */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			DownlinkTimeslotsCodes_t	 tdd384;
			DownlinkTimeslotsCodes_VHCR_t	 tdd768;
			DownlinkTimeslotsCodes_LCR_r4_t	 tdd128;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryCCPCHInfo_MBMS_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryCCPCHInfo_MBMS_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryCCPCHInfo_MBMS_r7_H_ */
#include <asn_internal.h>
