/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_HS_SICH_Power_Control_Info_TDD768_H_
#define	_HS_SICH_Power_Control_Info_TDD768_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ConstantValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HS-SICH-Power-Control-Info-TDD768 */
typedef struct HS_SICH_Power_Control_Info_TDD768 {
	long	 ul_target_SIR;
	ConstantValue_t	 hs_sich_ConstantValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SICH_Power_Control_Info_TDD768_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SICH_Power_Control_Info_TDD768;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SICH_Power_Control_Info_TDD768_H_ */
#include <asn_internal.h>
