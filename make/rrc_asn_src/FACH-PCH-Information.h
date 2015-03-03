/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_FACH_PCH_Information_H_
#define	_FACH_PCH_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportFormatSet.h"
#include "TransportChannelIdentity.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FACH-PCH-Information */
typedef struct FACH_PCH_Information {
	TransportFormatSet_t	 transportFormatSet;
	TransportChannelIdentity_t	 transportChannelIdentity;
	BOOLEAN_t	 ctch_Indicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FACH_PCH_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FACH_PCH_Information;

#ifdef __cplusplus
}
#endif

#endif	/* _FACH_PCH_Information_H_ */
#include <asn_internal.h>
