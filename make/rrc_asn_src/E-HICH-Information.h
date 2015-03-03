/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_E_HICH_Information_H_
#define	_E_HICH_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-HICH-ChannelisationCode.h"
#include "E-HICH-RGCH-SignatureSequence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-HICH-Information */
typedef struct E_HICH_Information {
	E_HICH_ChannelisationCode_t	 channelisationCode;
	E_HICH_RGCH_SignatureSequence_t	 signatureSequence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_HICH_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_HICH_Information;

#ifdef __cplusplus
}
#endif

#endif	/* _E_HICH_Information_H_ */
#include <asn_internal.h>