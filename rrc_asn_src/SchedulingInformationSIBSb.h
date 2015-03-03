/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SchedulingInformationSIBSb_H_
#define	_SchedulingInformationSIBSb_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIBSb-TypeAndTag.h"
#include "SchedulingInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SchedulingInformationSIBSb */
typedef struct SchedulingInformationSIBSb {
	SIBSb_TypeAndTag_t	 sibSb_Type;
	SchedulingInformation_t	 scheduling;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInformationSIBSb_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInformationSIBSb;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInformationSIBSb_H_ */
#include <asn_internal.h>
