/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RLC_Info_MCCH_r6_H_
#define	_RLC_Info_MCCH_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-UM-RLC-LI-size.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UM_RLC_OutOSeqDelivery_Info_r6;

/* RLC-Info-MCCH-r6 */
typedef struct RLC_Info_MCCH_r6 {
	DL_UM_RLC_LI_size_t	 dl_UM_RLC_LI_size;
	struct UM_RLC_OutOSeqDelivery_Info_r6	*dl_UM_RLC_OutOSeqDelivery_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Info_MCCH_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Info_MCCH_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UM-RLC-OutOSeqDelivery-Info-r6.h"

#endif	/* _RLC_Info_MCCH_r6_H_ */
#include <asn_internal.h>
