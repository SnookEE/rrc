/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_ReportingQuantity_v7xyext_H_
#define	_UE_Positioning_ReportingQuantity_v7xyext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum velocityRequested {
	velocityRequested_true	= 0
} e_velocityRequested;

/* UE-Positioning-ReportingQuantity-v7xyext */
typedef struct UE_Positioning_ReportingQuantity_v7xyext {
	long	*velocityRequested	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_ReportingQuantity_v7xyext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_velocityRequested_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_ReportingQuantity_v7xyext;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_ReportingQuantity_v7xyext_H_ */
#include <asn_internal.h>
