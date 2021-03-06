/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Serving_HSDSCH_CellInformation_H_
#define	_Serving_HSDSCH_CellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaACK.h"
#include "DeltaNACK.h"
#include "HARQ-Preamble-Mode.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mac_hsResetIndicator {
	mac_hsResetIndicator_true	= 0
} e_mac_hsResetIndicator;

/* Forward declarations */
struct PrimaryCPICH_Info;
struct DL_HSPDSCH_Information;
struct HARQ_Info;

/* Serving-HSDSCH-CellInformation */
typedef struct Serving_HSDSCH_CellInformation {
	DeltaACK_t	*deltaACK	/* OPTIONAL */;
	DeltaNACK_t	*deltaNACK	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	 harq_Preamble_Mode;
	struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
	struct DL_HSPDSCH_Information	*dl_hspdsch_Information	/* OPTIONAL */;
	struct HARQ_Info	*harqInfo	/* OPTIONAL */;
	long	*mac_hsResetIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Serving_HSDSCH_CellInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_hsResetIndicator_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Serving_HSDSCH_CellInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrimaryCPICH-Info.h"
#include "DL-HSPDSCH-Information.h"
#include "HARQ-Info.h"

#endif	/* _Serving_HSDSCH_CellInformation_H_ */
#include <asn_internal.h>
