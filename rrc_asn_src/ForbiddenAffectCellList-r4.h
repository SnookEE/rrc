/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ForbiddenAffectCellList_r4_H_
#define	_ForbiddenAffectCellList_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenAffectCell_r4;

/* ForbiddenAffectCellList-r4 */
typedef struct ForbiddenAffectCellList_r4 {
	A_SEQUENCE_OF(struct ForbiddenAffectCell_r4) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ForbiddenAffectCellList_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForbiddenAffectCellList_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ForbiddenAffectCell-r4.h"

#endif	/* _ForbiddenAffectCellList_r4_H_ */
#include <asn_internal.h>
