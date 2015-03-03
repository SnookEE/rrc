/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PRACH_Partitioning_H_
#define	_PRACH_Partitioning_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_Partitioning_PR {
	PRACH_Partitioning_PR_NOTHING,	/* No components present */
	PRACH_Partitioning_PR_fdd,
	PRACH_Partitioning_PR_tdd
} PRACH_Partitioning_PR;

/* Forward declarations */
struct ASCSetting_FDD;
struct ASCSetting_TDD;

/* PRACH-Partitioning */
typedef struct PRACH_Partitioning {
	PRACH_Partitioning_PR present;
	union PRACH_Partitioning_u {
		struct fdd {
			A_SEQUENCE_OF(struct ASCSetting_FDD) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct tdd {
			A_SEQUENCE_OF(struct ASCSetting_TDD) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Partitioning_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Partitioning;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ASCSetting-FDD.h"
#include "ASCSetting-TDD.h"

#endif	/* _PRACH_Partitioning_H_ */
#include <asn_internal.h>
