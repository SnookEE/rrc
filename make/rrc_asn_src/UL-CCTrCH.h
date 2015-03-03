/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_CCTrCH_H_
#define	_UL_CCTrCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS-IdentityPlain.h"
#include "UL-TargetSIR.h"
#include "TimeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonTimeslotInfo;
struct UplinkTimeslotsCodes;

/* UL-CCTrCH */
typedef struct UL_CCTrCH {
	TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
	UL_TargetSIR_t	 ul_TargetSIR;
	TimeInfo_t	 timeInfo;
	struct CommonTimeslotInfo	*commonTimeslotInfo	/* OPTIONAL */;
	struct UplinkTimeslotsCodes	*ul_CCTrCH_TimeslotsCodes	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCTrCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCTrCH;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonTimeslotInfo.h"
#include "UplinkTimeslotsCodes.h"

#endif	/* _UL_CCTrCH_H_ */
#include <asn_internal.h>
