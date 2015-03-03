/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellUpdate_v690ext_IEs_H_
#define	_CellUpdate_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellUpdateCause-ext.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum trafficVolumeIndicator {
	trafficVolumeIndicator_true	= 0
} e_trafficVolumeIndicator;
typedef enum reconfigurationStatusIndicator {
	reconfigurationStatusIndicator_true	= 0
} e_reconfigurationStatusIndicator;

/* Forward declarations */
struct MeasuredResultsOnRACHinterFreq;

/* CellUpdate-v690ext-IEs */
typedef struct CellUpdate_v690ext_IEs {
	CellUpdateCause_ext_t	*cellUpdateCause_ext	/* OPTIONAL */;
	long	*trafficVolumeIndicator	/* OPTIONAL */;
	struct MeasuredResultsOnRACHinterFreq	*measuredResultsOnRACHinterFreq	/* OPTIONAL */;
	long	*reconfigurationStatusIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdate_v690ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_trafficVolumeIndicator_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reconfigurationStatusIndicator_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdate_v690ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACHinterFreq.h"

#endif	/* _CellUpdate_v690ext_IEs_H_ */
#include <asn_internal.h>
