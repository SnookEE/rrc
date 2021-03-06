/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ProtocolErrorMoreInformation_H_
#define	_ProtocolErrorMoreInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "IdentificationOfReceivedMessage.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum diagnosticsType_PR {
	diagnosticsType_PR_NOTHING,	/* No components present */
	diagnosticsType_PR_type1,
	diagnosticsType_PR_spare
} diagnosticsType_PR;
typedef enum type1_PR {
	type1_PR_NOTHING,	/* No components present */
	type1_PR_asn1_ViolationOrEncodingError,
	type1_PR_messageTypeNonexistent,
	type1_PR_messageNotCompatibleWithReceiverState,
	type1_PR_ie_ValueNotComprehended,
	type1_PR_conditionalInformationElementError,
	type1_PR_messageExtensionNotComprehended,
	type1_PR_spare1,
	type1_PR_spare2
} type1_PR;

/* ProtocolErrorMoreInformation */
typedef struct ProtocolErrorMoreInformation {
	struct diagnosticsType {
		diagnosticsType_PR present;
		union ProtocolErrorMoreInformation__diagnosticsType_u {
			struct type1 {
				type1_PR present;
				union ProtocolErrorMoreInformation__diagnosticsType__type1_u {
					NULL_t	 asn1_ViolationOrEncodingError;
					NULL_t	 messageTypeNonexistent;
					IdentificationOfReceivedMessage_t	 messageNotCompatibleWithReceiverState;
					IdentificationOfReceivedMessage_t	 ie_ValueNotComprehended;
					IdentificationOfReceivedMessage_t	 conditionalInformationElementError;
					IdentificationOfReceivedMessage_t	 messageExtensionNotComprehended;
					NULL_t	 spare1;
					NULL_t	 spare2;
				} choice;
				
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
} ProtocolErrorMoreInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolErrorMoreInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolErrorMoreInformation_H_ */
#include <asn_internal.h>
