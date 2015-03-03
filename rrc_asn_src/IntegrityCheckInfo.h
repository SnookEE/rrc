/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntegrityCheckInfo_H_
#define	_IntegrityCheckInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MessageAuthenticationCode.h"
#include "RRC-MessageSequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntegrityCheckInfo */
typedef struct IntegrityCheckInfo {
	MessageAuthenticationCode_t	 messageAuthenticationCode;
	RRC_MessageSequenceNumber_t	 rrc_MessageSequenceNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntegrityCheckInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntegrityCheckInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityCheckInfo_H_ */
#include <asn_internal.h>
