/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntegrityProtectionStatus_H_
#define	_IntegrityProtectionStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntegrityProtectionStatus {
	IntegrityProtectionStatus_started	= 0,
	IntegrityProtectionStatus_notStarted	= 1
} e_IntegrityProtectionStatus;

/* IntegrityProtectionStatus */
typedef long	 IntegrityProtectionStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntegrityProtectionStatus;
asn_struct_free_f IntegrityProtectionStatus_free;
asn_struct_print_f IntegrityProtectionStatus_print;
asn_constr_check_f IntegrityProtectionStatus_constraint;
ber_type_decoder_f IntegrityProtectionStatus_decode_ber;
der_type_encoder_f IntegrityProtectionStatus_encode_der;
xer_type_decoder_f IntegrityProtectionStatus_decode_xer;
xer_type_encoder_f IntegrityProtectionStatus_encode_xer;
per_type_decoder_f IntegrityProtectionStatus_decode_uper;
per_type_encoder_f IntegrityProtectionStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityProtectionStatus_H_ */
#include <asn_internal.h>
