/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RLC_Info_r6_H_
#define	_RLC_Info_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum altE_bitInterpretation {
	altE_bitInterpretation_true	= 0
} e_altE_bitInterpretation;

/* Forward declarations */
struct UL_RLC_Mode;
struct DL_RLC_Mode_r6;

/* RLC-Info-r6 */
typedef struct RLC_Info_r6 {
	struct UL_RLC_Mode	*ul_RLC_Mode	/* OPTIONAL */;
	struct DL_RLC_Mode_r6	*dl_RLC_Mode	/* OPTIONAL */;
	BOOLEAN_t	 rlc_OneSidedReEst;
	long	*altE_bitInterpretation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Info_r6_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_altE_bitInterpretation_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Info_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-RLC-Mode.h"
#include "DL-RLC-Mode-r6.h"

#endif	/* _RLC_Info_r6_H_ */
#include <asn_internal.h>
