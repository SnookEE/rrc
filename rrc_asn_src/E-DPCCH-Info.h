/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_E_DPCCH_Info_H_
#define	_E_DPCCH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-DPCCH-DPCCH-PowerOffset.h"
#include "HappyBit-DelayCondition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-DPCCH-Info */
typedef struct E_DPCCH_Info {
	E_DPCCH_DPCCH_PowerOffset_t	 e_DPCCH_DPCCH_PowerOffset;
	HappyBit_DelayCondition_t	 happyBit_DelayCondition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DPCCH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DPCCH_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DPCCH_Info_H_ */
#include <asn_internal.h>
