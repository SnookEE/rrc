/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_DPCH_InfoPostTDD_LCR_r4_H_
#define	_UL_DPCH_InfoPostTDD_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-DPCH-PowerControlInfoPostTDD-LCR-r4.h"
#include "UplinkTimeslotsCodes-LCR-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_TimingAdvanceControl_LCR_r4;

/* UL-DPCH-InfoPostTDD-LCR-r4 */
typedef struct UL_DPCH_InfoPostTDD_LCR_r4 {
	UL_DPCH_PowerControlInfoPostTDD_LCR_r4_t	 ul_DPCH_PowerControlInfo;
	struct UL_TimingAdvanceControl_LCR_r4	*ul_TimingAdvance	/* OPTIONAL */;
	UplinkTimeslotsCodes_LCR_r4_t	 ul_CCTrCH_TimeslotsCodes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_InfoPostTDD_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_InfoPostTDD_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-TimingAdvanceControl-LCR-r4.h"

#endif	/* _UL_DPCH_InfoPostTDD_LCR_r4_H_ */
#include <asn_internal.h>
