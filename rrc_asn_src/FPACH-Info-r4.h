/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_FPACH_Info_r4_H_
#define	_FPACH_Info_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber-LCR-r4.h"
#include "TDD-FPACH-CCode16-r4.h"
#include "MidambleShiftAndBurstType-LCR-r4.h"
#include "Wi-LCR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FPACH-Info-r4 */
typedef struct FPACH_Info_r4 {
	TimeslotNumber_LCR_r4_t	 timeslot;
	TDD_FPACH_CCode16_r4_t	 channelisationCode;
	MidambleShiftAndBurstType_LCR_r4_t	 midambleShiftAndBurstType;
	Wi_LCR_t	 wi;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FPACH_Info_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FPACH_Info_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _FPACH_Info_r4_H_ */
#include <asn_internal.h>