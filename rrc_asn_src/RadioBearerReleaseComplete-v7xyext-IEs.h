/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerReleaseComplete_v7xyext_IEs_H_
#define	_RadioBearerReleaseComplete_v7xyext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EXT_UL_TimingAdvance;

/* RadioBearerReleaseComplete-v7xyext-IEs */
typedef struct RadioBearerReleaseComplete_v7xyext_IEs {
	struct EXT_UL_TimingAdvance	*ext_ul_TimingAdvance	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReleaseComplete_v7xyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReleaseComplete_v7xyext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EXT-UL-TimingAdvance.h"

#endif	/* _RadioBearerReleaseComplete_v7xyext_IEs_H_ */
#include <asn_internal.h>