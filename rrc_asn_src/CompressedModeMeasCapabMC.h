/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompressedModeMeasCapabMC_H_
#define	_CompressedModeMeasCapabMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompressedModeMeasCapabMC */
typedef struct CompressedModeMeasCapabMC {
	BOOLEAN_t	 dl_MeasurementsMC;
	BOOLEAN_t	 ul_MeasurementsMC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabMC;

#ifdef __cplusplus
}
#endif

#endif	/* _CompressedModeMeasCapabMC_H_ */
#include <asn_internal.h>
