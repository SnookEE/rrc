/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MBMS_ServiceTransmInfo_H_
#define	_MBMS_ServiceTransmInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-ServiceTransmInfo */
typedef struct MBMS_ServiceTransmInfo {
	long	 start;
	long	 duration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_ServiceTransmInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_ServiceTransmInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_ServiceTransmInfo_H_ */
#include <asn_internal.h>