/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DownlinkAdditionalTimeslots_VHCR_H_
#define	_DownlinkAdditionalTimeslots_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber.h"
#include <constr_SEQUENCE.h>
#include "IndividualTimeslotInfo-VHCR.h"
#include "DL-TS-ChannelisationCodesShort-VHCR.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum parameters_PR {
	parameters_PR_NOTHING,	/* No components present */
	parameters_PR_sameAsLast,
	parameters_PR_newParameters
} parameters_PR;

/* DownlinkAdditionalTimeslots-VHCR */
typedef struct DownlinkAdditionalTimeslots_VHCR {
	struct parameters {
		parameters_PR present;
		union DownlinkAdditionalTimeslots_VHCR__parameters_u {
			struct sameAsLast {
				TimeslotNumber_t	 timeslotNumber;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} sameAsLast;
			struct newParameters {
				IndividualTimeslotInfo_VHCR_t	 individualTimeslotInfo;
				DL_TS_ChannelisationCodesShort_VHCR_t	 dl_TS_ChannelisationCodesShort;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} newParameters;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} parameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownlinkAdditionalTimeslots_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkAdditionalTimeslots_VHCR;

#ifdef __cplusplus
}
#endif

#endif	/* _DownlinkAdditionalTimeslots_VHCR_H_ */
#include <asn_internal.h>
