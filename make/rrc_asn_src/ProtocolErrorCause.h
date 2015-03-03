/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ProtocolErrorCause_H_
#define	_ProtocolErrorCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProtocolErrorCause {
	ProtocolErrorCause_asn1_ViolationOrEncodingError	= 0,
	ProtocolErrorCause_messageTypeNonexistent	= 1,
	ProtocolErrorCause_messageNotCompatibleWithReceiverState	= 2,
	ProtocolErrorCause_ie_ValueNotComprehended	= 3,
	ProtocolErrorCause_informationElementMissing	= 4,
	ProtocolErrorCause_messageExtensionNotComprehended	= 5,
	ProtocolErrorCause_spare2	= 6,
	ProtocolErrorCause_spare1	= 7
} e_ProtocolErrorCause;

/* ProtocolErrorCause */
typedef long	 ProtocolErrorCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolErrorCause;
asn_struct_free_f ProtocolErrorCause_free;
asn_struct_print_f ProtocolErrorCause_print;
asn_constr_check_f ProtocolErrorCause_constraint;
ber_type_decoder_f ProtocolErrorCause_decode_ber;
der_type_encoder_f ProtocolErrorCause_encode_der;
xer_type_decoder_f ProtocolErrorCause_decode_xer;
xer_type_encoder_f ProtocolErrorCause_encode_xer;
per_type_decoder_f ProtocolErrorCause_decode_uper;
per_type_encoder_f ProtocolErrorCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolErrorCause_H_ */
#include <asn_internal.h>