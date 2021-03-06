/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_HSPDSCH_TS_Configuration_VHCR_H_
#define	_DL_HSPDSCH_TS_Configuration_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "TimeslotNumber.h"
#include "MidambleShiftAndBurstType-DL-VHCR.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-HSPDSCH-TS-Configuration-VHCR */
typedef struct DL_HSPDSCH_TS_Configuration_VHCR {
	A_SEQUENCE_OF(struct Member {
		TimeslotNumber_t	 timeslot;
		MidambleShiftAndBurstType_DL_VHCR_t	 midambleShiftAndBurstType;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_HSPDSCH_TS_Configuration_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_TS_Configuration_VHCR;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_HSPDSCH_TS_Configuration_VHCR_H_ */
#include <asn_internal.h>
