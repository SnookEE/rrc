/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRCConnectionSetup_v7xyext_IEs_H_
#define	_RRCConnectionSetup_v7xyext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CapabilityUpdateRequirement_r7_ext;

/* RRCConnectionSetup-v7xyext-IEs */
typedef struct RRCConnectionSetup_v7xyext_IEs {
	struct CapabilityUpdateRequirement_r7_ext	*capabilityUpdateRequirement_r7_ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_v7xyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_v7xyext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CapabilityUpdateRequirement-r7-ext.h"

#endif	/* _RRCConnectionSetup_v7xyext_IEs_H_ */
#include <asn_internal.h>