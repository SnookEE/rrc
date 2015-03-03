/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MeasurementCapabilityExt_H_
#define	_MeasurementCapabilityExt_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CompressedModeMeasCapabFDDList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompressedModeMeasCapabTDDList;
struct CompressedModeMeasCapabGSMList;
struct CompressedModeMeasCapabMC;

/* MeasurementCapabilityExt */
typedef struct MeasurementCapabilityExt {
	CompressedModeMeasCapabFDDList_t	 compressedModeMeasCapabFDDList;
	struct CompressedModeMeasCapabTDDList	*compressedModeMeasCapabTDDList	/* OPTIONAL */;
	struct CompressedModeMeasCapabGSMList	*compressedModeMeasCapabGSMList	/* OPTIONAL */;
	struct CompressedModeMeasCapabMC	*compressedModeMeasCapabMC	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCapabilityExt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCapabilityExt;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CompressedModeMeasCapabTDDList.h"
#include "CompressedModeMeasCapabGSMList.h"
#include "CompressedModeMeasCapabMC.h"

#endif	/* _MeasurementCapabilityExt_H_ */
#include <asn_internal.h>
