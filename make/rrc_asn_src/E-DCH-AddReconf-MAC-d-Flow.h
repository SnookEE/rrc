/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_E_DCH_AddReconf_MAC_d_Flow_H_
#define	_E_DCH_AddReconf_MAC_d_Flow_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-DCH-MAC-d-FlowIdentity.h"
#include "E-DCH-MAC-d-FlowPowerOffset.h"
#include "E-DCH-MAC-d-FlowMaxRetrans.h"
#include "E-DCH-MAC-d-FlowMultiplexingList.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum transmissionGrantType_PR {
	transmissionGrantType_PR_NOTHING,	/* No components present */
	transmissionGrantType_PR_non_ScheduledTransGrantInfo,
	transmissionGrantType_PR_scheduledTransmissionGrantInfo
} transmissionGrantType_PR;

/* E-DCH-AddReconf-MAC-d-Flow */
typedef struct E_DCH_AddReconf_MAC_d_Flow {
	E_DCH_MAC_d_FlowIdentity_t	 mac_d_FlowIdentity;
	E_DCH_MAC_d_FlowPowerOffset_t	*mac_d_FlowPowerOffset	/* OPTIONAL */;
	E_DCH_MAC_d_FlowMaxRetrans_t	*mac_d_FlowMaxRetrans	/* OPTIONAL */;
	E_DCH_MAC_d_FlowMultiplexingList_t	*mac_d_FlowMultiplexingList	/* OPTIONAL */;
	struct transmissionGrantType {
		transmissionGrantType_PR present;
		union E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_u {
			struct non_ScheduledTransGrantInfo {
				long	 maxMAC_e_PDUContents;
				BIT_STRING_t	*ms2_NonSchedTransmGrantHARQAlloc	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} non_ScheduledTransGrantInfo;
			NULL_t	 scheduledTransmissionGrantInfo;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transmissionGrantType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DCH_AddReconf_MAC_d_Flow_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DCH_AddReconf_MAC_d_Flow;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DCH_AddReconf_MAC_d_Flow_H_ */
#include <asn_internal.h>
