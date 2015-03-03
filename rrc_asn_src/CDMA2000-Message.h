/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CDMA2000_Message_H_
#define	_CDMA2000_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CDMA2000-Message */
typedef struct CDMA2000_Message {
	BIT_STRING_t	 msg_Type;
	BIT_STRING_t	 payload;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CDMA2000_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CDMA2000_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _CDMA2000_Message_H_ */
#include <asn_internal.h>
