/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AICH_Info_H_
#define	_AICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChannelisationCode256.h"
#include <BOOLEAN.h>
#include "AICH-TransmissionTiming.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AICH-Info */
typedef struct AICH_Info {
	ChannelisationCode256_t	 channelisationCode256;
	BOOLEAN_t	 sttd_Indicator;
	AICH_TransmissionTiming_t	 aich_TransmissionTiming;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AICH_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _AICH_Info_H_ */
#include <asn_internal.h>
