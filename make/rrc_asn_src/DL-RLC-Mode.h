/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_RLC_Mode_H_
#define	_DL_RLC_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-AM-RLC-Mode.h"
#include <NULL.h>
#include "DL-TM-RLC-Mode.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_RLC_Mode_PR {
	DL_RLC_Mode_PR_NOTHING,	/* No components present */
	DL_RLC_Mode_PR_dl_AM_RLC_Mode,
	DL_RLC_Mode_PR_dl_UM_RLC_Mode,
	DL_RLC_Mode_PR_dl_TM_RLC_Mode
} DL_RLC_Mode_PR;

/* DL-RLC-Mode */
typedef struct DL_RLC_Mode {
	DL_RLC_Mode_PR present;
	union DL_RLC_Mode_u {
		DL_AM_RLC_Mode_t	 dl_AM_RLC_Mode;
		NULL_t	 dl_UM_RLC_Mode;
		DL_TM_RLC_Mode_t	 dl_TM_RLC_Mode;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_RLC_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_RLC_Mode;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_RLC_Mode_H_ */
#include <asn_internal.h>
