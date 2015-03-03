/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Mapping_H_
#define	_Mapping_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAT.h"
#include "MappingFunctionParameterList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Mapping */
typedef struct Mapping {
	RAT_t	 rat;
	MappingFunctionParameterList_t	 mappingFunctionParameterList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Mapping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Mapping;

#ifdef __cplusplus
}
#endif

#endif	/* _Mapping_H_ */
#include <asn_internal.h>
