/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PagingRecordTypeID_H_
#define	_PagingRecordTypeID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingRecordTypeID {
	PagingRecordTypeID_imsi_GSM_MAP	= 0,
	PagingRecordTypeID_tmsi_GSM_MAP_P_TMSI	= 1,
	PagingRecordTypeID_imsi_DS_41	= 2,
	PagingRecordTypeID_tmsi_DS_41	= 3
} e_PagingRecordTypeID;

/* PagingRecordTypeID */
typedef long	 PagingRecordTypeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingRecordTypeID;
asn_struct_free_f PagingRecordTypeID_free;
asn_struct_print_f PagingRecordTypeID_print;
asn_constr_check_f PagingRecordTypeID_constraint;
ber_type_decoder_f PagingRecordTypeID_decode_ber;
der_type_encoder_f PagingRecordTypeID_encode_der;
xer_type_decoder_f PagingRecordTypeID_decode_xer;
xer_type_encoder_f PagingRecordTypeID_encode_xer;
per_type_decoder_f PagingRecordTypeID_decode_uper;
per_type_encoder_f PagingRecordTypeID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingRecordTypeID_H_ */
#include <asn_internal.h>