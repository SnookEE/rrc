/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_NAS_SystemInformationGSM_MAP_H_
#define	_NAS_SystemInformationGSM_MAP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NAS-SystemInformationGSM-MAP */
typedef OCTET_STRING_t	 NAS_SystemInformationGSM_MAP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NAS_SystemInformationGSM_MAP;
asn_struct_free_f NAS_SystemInformationGSM_MAP_free;
asn_struct_print_f NAS_SystemInformationGSM_MAP_print;
asn_constr_check_f NAS_SystemInformationGSM_MAP_constraint;
ber_type_decoder_f NAS_SystemInformationGSM_MAP_decode_ber;
der_type_encoder_f NAS_SystemInformationGSM_MAP_encode_der;
xer_type_decoder_f NAS_SystemInformationGSM_MAP_decode_xer;
xer_type_encoder_f NAS_SystemInformationGSM_MAP_encode_xer;
per_type_decoder_f NAS_SystemInformationGSM_MAP_decode_uper;
per_type_encoder_f NAS_SystemInformationGSM_MAP_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NAS_SystemInformationGSM_MAP_H_ */
#include <asn_internal.h>
