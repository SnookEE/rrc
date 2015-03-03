/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UCSM_Info_H_
#define	_UCSM_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinimumSpreadingFactor.h"
#include "NF-Max.h"
#include "ChannelReqParamsForUCSM.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UCSM-Info */
typedef struct UCSM_Info {
	MinimumSpreadingFactor_t	 minimumSpreadingFactor;
	NF_Max_t	 nf_Max;
	ChannelReqParamsForUCSM_t	 channelReqParamsForUCSM;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UCSM_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UCSM_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _UCSM_Info_H_ */
#include <asn_internal.h>
