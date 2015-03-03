/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompressedModeMeasCapabFDD_ext_H_
#define	_CompressedModeMeasCapabFDD_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD2.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompressedModeMeasCapabFDD-ext */
typedef struct CompressedModeMeasCapabFDD_ext {
	RadioFrequencyBandFDD2_t	 radioFrequencyBandFDD2;
	BOOLEAN_t	 dl_MeasurementsFDD;
	BOOLEAN_t	 ul_MeasurementsFDD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabFDD_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabFDD_ext;

#ifdef __cplusplus
}
#endif

#endif	/* _CompressedModeMeasCapabFDD_ext_H_ */
#include <asn_internal.h>