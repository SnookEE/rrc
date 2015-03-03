/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_FirstSegment_H_
#define	_FirstSegment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include "SegCount.h"
#include "SIB-Data-fixed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FirstSegment */
typedef struct FirstSegment {
	SIB_Type_t	 sib_Type;
	SegCount_t	 seg_Count;
	SIB_Data_fixed_t	 sib_Data_fixed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FirstSegment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FirstSegment;

#ifdef __cplusplus
}
#endif

#endif	/* _FirstSegment_H_ */
#include <asn_internal.h>
