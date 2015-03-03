/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ProtocolErrorInformation_H_
#define	_ProtocolErrorInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "ProtocolErrorCause.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum diagnosticsType_PR {
	diagnosticsType_PR_NOTHING,	/* No components present */
	diagnosticsType_PR_type1,
	diagnosticsType_PR_spare
} diagnosticsType_PR;

/* ProtocolErrorInformation */
typedef struct ProtocolErrorInformation {
	struct diagnosticsType {
		diagnosticsType_PR present;
		union ProtocolErrorInformation__diagnosticsType_u {
			struct type1 {
				ProtocolErrorCause_t	 protocolErrorCause;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type1;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} diagnosticsType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolErrorInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolErrorInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolErrorInformation_H_ */
#include <asn_internal.h>
