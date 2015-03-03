/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AdditionalMeasurementID_List_H_
#define	_AdditionalMeasurementID_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdditionalMeasurementID-List */
typedef struct AdditionalMeasurementID_List {
	A_SEQUENCE_OF(MeasurementIdentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalMeasurementID_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalMeasurementID_List;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalMeasurementID_List_H_ */
#include <asn_internal.h>