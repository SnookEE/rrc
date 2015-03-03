/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_HS_SCCH_Info_H_
#define	_HS_SCCH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondaryScramblingCode.h"
#include "HS-SCCH-Codes.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include "HS-SICH-Power-Control-Info-TDD384.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;
typedef enum tdd_PR {
	tdd_PR_NOTHING,	/* No components present */
	tdd_PR_tdd384,
	tdd_PR_tdd128
} tdd_PR;

/* Forward declarations */
struct HS_SCCH_TDD384;
struct HS_SCCH_TDD128;

/* HS-SCCH-Info */
typedef struct HS_SCCH_Info {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union HS_SCCH_Info__modeSpecificInfo_u {
			struct fdd {
				struct hS_SCCHChannelisationCodeInfo {
					A_SEQUENCE_OF(HS_SCCH_Codes_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} hS_SCCHChannelisationCodeInfo;
				SecondaryScramblingCode_t	*dl_ScramblingCode	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				tdd_PR present;
				union HS_SCCH_Info__modeSpecificInfo__tdd_u {
					struct tdd384 {
						long	 nack_ack_power_offset;
						HS_SICH_Power_Control_Info_TDD384_t	 hs_SICH_PowerControl_Info;
						struct hS_SCCH_SetConfiguration {
							A_SEQUENCE_OF(struct HS_SCCH_TDD384) list;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} hS_SCCH_SetConfiguration;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd384;
					struct tdd128 {
						A_SEQUENCE_OF(struct HS_SCCH_TDD128) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd128;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_Info;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HS-SCCH-TDD384.h"
#include "HS-SCCH-TDD128.h"

#endif	/* _HS_SCCH_Info_H_ */
#include <asn_internal.h>
