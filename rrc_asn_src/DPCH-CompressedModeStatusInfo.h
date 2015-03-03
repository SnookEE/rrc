/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DPCH_CompressedModeStatusInfo_H_
#define	_DPCH_CompressedModeStatusInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TGPS-Reconfiguration-CFN.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TGP_SequenceShort;

/* DPCH-CompressedModeStatusInfo */
typedef struct DPCH_CompressedModeStatusInfo {
	TGPS_Reconfiguration_CFN_t	 tgps_Reconfiguration_CFN;
	struct tgp_SequenceShortList {
		A_SEQUENCE_OF(struct TGP_SequenceShort) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tgp_SequenceShortList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DPCH_CompressedModeStatusInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DPCH_CompressedModeStatusInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TGP-SequenceShort.h"

#endif	/* _DPCH_CompressedModeStatusInfo_H_ */
#include <asn_internal.h>
