/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_TM_RLC_Mode_H_
#define	_DL_TM_RLC_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-TM-RLC-Mode */
typedef struct DL_TM_RLC_Mode {
	BOOLEAN_t	 segmentationIndication;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TM_RLC_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TM_RLC_Mode;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TM_RLC_Mode_H_ */
#include <asn_internal.h>
