/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRC_ConnectionReleaseInformation_H_
#define	_RRC_ConnectionReleaseInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "ReleaseCause.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ConnectionReleaseInformation_PR {
	RRC_ConnectionReleaseInformation_PR_NOTHING,	/* No components present */
	RRC_ConnectionReleaseInformation_PR_noRelease,
	RRC_ConnectionReleaseInformation_PR_release
} RRC_ConnectionReleaseInformation_PR;

/* RRC-ConnectionReleaseInformation */
typedef struct RRC_ConnectionReleaseInformation {
	RRC_ConnectionReleaseInformation_PR present;
	union RRC_ConnectionReleaseInformation_u {
		NULL_t	 noRelease;
		struct release {
			ReleaseCause_t	 releaseCause;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} release;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ConnectionReleaseInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ConnectionReleaseInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ConnectionReleaseInformation_H_ */
#include <asn_internal.h>