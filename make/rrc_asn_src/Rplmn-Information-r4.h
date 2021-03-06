/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Rplmn_Information_r4_H_
#define	_Rplmn_Information_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_BA_Range_List;
struct FDD_UMTS_Frequency_List;
struct TDD_UMTS_Frequency_List;
struct CDMA2000_UMTS_Frequency_List;

/* Rplmn-Information-r4 */
typedef struct Rplmn_Information_r4 {
	struct GSM_BA_Range_List	*gsm_BA_Range_List	/* OPTIONAL */;
	struct FDD_UMTS_Frequency_List	*fdd_UMTS_Frequency_List	/* OPTIONAL */;
	struct TDD_UMTS_Frequency_List	*tdd384_UMTS_Frequency_List	/* OPTIONAL */;
	struct TDD_UMTS_Frequency_List	*tdd128_UMTS_Frequency_List	/* OPTIONAL */;
	struct CDMA2000_UMTS_Frequency_List	*cdma2000_UMTS_Frequency_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Rplmn_Information_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Rplmn_Information_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSM-BA-Range-List.h"
#include "FDD-UMTS-Frequency-List.h"
#include "TDD-UMTS-Frequency-List.h"
#include "CDMA2000-UMTS-Frequency-List.h"

#endif	/* _Rplmn_Information_r4_H_ */
#include <asn_internal.h>
