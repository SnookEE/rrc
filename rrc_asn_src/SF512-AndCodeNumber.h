/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SF512_AndCodeNumber_H_
#define	_SF512_AndCodeNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SF512_AndCodeNumber_PR {
	SF512_AndCodeNumber_PR_NOTHING,	/* No components present */
	SF512_AndCodeNumber_PR_sf4,
	SF512_AndCodeNumber_PR_sf8,
	SF512_AndCodeNumber_PR_sf16,
	SF512_AndCodeNumber_PR_sf32,
	SF512_AndCodeNumber_PR_sf64,
	SF512_AndCodeNumber_PR_sf128,
	SF512_AndCodeNumber_PR_sf256,
	SF512_AndCodeNumber_PR_sf512
} SF512_AndCodeNumber_PR;

/* SF512-AndCodeNumber */
typedef struct SF512_AndCodeNumber {
	SF512_AndCodeNumber_PR present;
	union SF512_AndCodeNumber_u {
		long	 sf4;
		long	 sf8;
		long	 sf16;
		long	 sf32;
		long	 sf64;
		long	 sf128;
		long	 sf256;
		long	 sf512;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SF512_AndCodeNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SF512_AndCodeNumber;

#ifdef __cplusplus
}
#endif

#endif	/* _SF512_AndCodeNumber_H_ */
#include <asn_internal.h>
