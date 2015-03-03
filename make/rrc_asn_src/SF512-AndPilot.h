/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SF512_AndPilot_H_
#define	_SF512_AndPilot_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "PilotBits128.h"
#include "PilotBits256.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SF512_AndPilot_PR {
	SF512_AndPilot_PR_NOTHING,	/* No components present */
	SF512_AndPilot_PR_sfd4,
	SF512_AndPilot_PR_sfd8,
	SF512_AndPilot_PR_sfd16,
	SF512_AndPilot_PR_sfd32,
	SF512_AndPilot_PR_sfd64,
	SF512_AndPilot_PR_sfd128,
	SF512_AndPilot_PR_sfd256,
	SF512_AndPilot_PR_sfd512
} SF512_AndPilot_PR;

/* SF512-AndPilot */
typedef struct SF512_AndPilot {
	SF512_AndPilot_PR present;
	union SF512_AndPilot_u {
		NULL_t	 sfd4;
		NULL_t	 sfd8;
		NULL_t	 sfd16;
		NULL_t	 sfd32;
		NULL_t	 sfd64;
		PilotBits128_t	 sfd128;
		PilotBits256_t	 sfd256;
		NULL_t	 sfd512;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SF512_AndPilot_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SF512_AndPilot;

#ifdef __cplusplus
}
#endif

#endif	/* _SF512_AndPilot_H_ */
#include <asn_internal.h>
