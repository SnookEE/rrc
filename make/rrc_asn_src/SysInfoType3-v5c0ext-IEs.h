/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType3_v5c0ext_IEs_H_
#define	_SysInfoType3_v5c0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectReselectInfoTreselectionScaling_v5c0ext;

/* SysInfoType3-v5c0ext-IEs */
typedef struct SysInfoType3_v5c0ext_IEs {
	struct CellSelectReselectInfoTreselectionScaling_v5c0ext	*cellSelectReselectInfoTreselectionScaling_v5c0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType3_v5c0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType3_v5c0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectReselectInfoTreselectionScaling-v5c0ext.h"

#endif	/* _SysInfoType3_v5c0ext_IEs_H_ */
#include <asn_internal.h>
