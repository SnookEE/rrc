/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType13_v7xyext_IEs_H_
#define	_SysInfoType13_v7xyext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CapabilityUpdateRequirement_r7_ext;

/* SysInfoType13-v7xyext-IEs */
typedef struct SysInfoType13_v7xyext_IEs {
	struct CapabilityUpdateRequirement_r7_ext	*capabilityUpdateRequirement_r7Ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType13_v7xyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType13_v7xyext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CapabilityUpdateRequirement-r7-ext.h"

#endif	/* _SysInfoType13_v7xyext_IEs_H_ */
#include <asn_internal.h>
