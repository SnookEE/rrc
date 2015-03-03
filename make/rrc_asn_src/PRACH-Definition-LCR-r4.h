/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PRACH_Definition_LCR_r4_H_
#define	_PRACH_Definition_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber-PRACH-LCR-r4.h"
#include "PRACH-ChanCodes-LCR-r4.h"
#include "MidambleShiftAndBurstType-LCR-r4.h"
#include "FPACH-Info-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-Definition-LCR-r4 */
typedef struct PRACH_Definition_LCR_r4 {
	TimeslotNumber_PRACH_LCR_r4_t	 timeslot;
	PRACH_ChanCodes_LCR_r4_t	 prach_ChanCodes_LCR;
	MidambleShiftAndBurstType_LCR_r4_t	 midambleShiftAndBurstType;
	FPACH_Info_r4_t	 fpach_Info;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Definition_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Definition_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Definition_LCR_r4_H_ */
#include <asn_internal.h>
