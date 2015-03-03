/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IndividualTimeslotInfo_LCR_r4_ext_H_
#define	_IndividualTimeslotInfo_LCR_r4_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MidambleShiftAndBurstType-LCR-r4.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modulation {
	modulation_mod_QPSK	= 0,
	modulation_mod_8PSK	= 1
} e_modulation;
typedef enum ss_TPC_Symbols {
	ss_TPC_Symbols_zero	= 0,
	ss_TPC_Symbols_one	= 1,
	ss_TPC_Symbols_sixteenOverSF	= 2
} e_ss_TPC_Symbols;

/* IndividualTimeslotInfo-LCR-r4-ext */
typedef struct IndividualTimeslotInfo_LCR_r4_ext {
	MidambleShiftAndBurstType_LCR_r4_t	 midambleShiftAndBurstType;
	long	 modulation;
	long	 ss_TPC_Symbols;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IndividualTimeslotInfo_LCR_r4_ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_modulation_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ss_TPC_Symbols_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IndividualTimeslotInfo_LCR_r4_ext;

#ifdef __cplusplus
}
#endif

#endif	/* _IndividualTimeslotInfo_LCR_r4_ext_H_ */
#include <asn_internal.h>
