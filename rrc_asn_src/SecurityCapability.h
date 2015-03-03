/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SecurityCapability_H_
#define	_SecurityCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cipheringAlgorithmCap {
	cipheringAlgorithmCap_spare15	= 0,
	cipheringAlgorithmCap_spare14	= 1,
	cipheringAlgorithmCap_spare13	= 2,
	cipheringAlgorithmCap_spare12	= 3,
	cipheringAlgorithmCap_spare11	= 4,
	cipheringAlgorithmCap_spare10	= 5,
	cipheringAlgorithmCap_spare9	= 6,
	cipheringAlgorithmCap_spare8	= 7,
	cipheringAlgorithmCap_spare7	= 8,
	cipheringAlgorithmCap_spare6	= 9,
	cipheringAlgorithmCap_spare5	= 10,
	cipheringAlgorithmCap_spare4	= 11,
	cipheringAlgorithmCap_spare3	= 12,
	cipheringAlgorithmCap_spare2	= 13,
	cipheringAlgorithmCap_uea1	= 14,
	cipheringAlgorithmCap_uea0	= 15
} e_cipheringAlgorithmCap;
typedef enum integrityProtectionAlgorithmCap {
	integrityProtectionAlgorithmCap_spare15	= 0,
	integrityProtectionAlgorithmCap_spare14	= 1,
	integrityProtectionAlgorithmCap_spare13	= 2,
	integrityProtectionAlgorithmCap_spare12	= 3,
	integrityProtectionAlgorithmCap_spare11	= 4,
	integrityProtectionAlgorithmCap_spare10	= 5,
	integrityProtectionAlgorithmCap_spare9	= 6,
	integrityProtectionAlgorithmCap_spare8	= 7,
	integrityProtectionAlgorithmCap_spare7	= 8,
	integrityProtectionAlgorithmCap_spare6	= 9,
	integrityProtectionAlgorithmCap_spare5	= 10,
	integrityProtectionAlgorithmCap_spare4	= 11,
	integrityProtectionAlgorithmCap_spare3	= 12,
	integrityProtectionAlgorithmCap_spare2	= 13,
	integrityProtectionAlgorithmCap_uia1	= 14,
	integrityProtectionAlgorithmCap_spare0	= 15
} e_integrityProtectionAlgorithmCap;

/* SecurityCapability */
typedef struct SecurityCapability {
	BIT_STRING_t	 cipheringAlgorithmCap;
	BIT_STRING_t	 integrityProtectionAlgorithmCap;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityCapability;

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityCapability_H_ */
#include <asn_internal.h>
