/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_PhysicalChannelReconfiguration_v690ext_IEs_H_
#define	_PhysicalChannelReconfiguration_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DelayRestrictionFlag.h"
#include "HARQ-Preamble-Mode.h"
#include "BEACON-PL-Est.h"
#include <NativeEnumerated.h>
#include "DHS-Sync.h"
#include "TimingMaintainedSynchInd.h"
#include "MBMS-PL-ServiceRestrictInfo-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum postVerificationPeriod {
	postVerificationPeriod_true	= 0
} e_postVerificationPeriod;

/* Forward declarations */
struct PLMN_Identity;

/* PhysicalChannelReconfiguration-v690ext-IEs */
typedef struct PhysicalChannelReconfiguration_v690ext_IEs {
	DelayRestrictionFlag_t	*delayRestrictionFlag	/* OPTIONAL */;
	struct PLMN_Identity	*primary_plmn_Identity	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	*harq_Preamble_Mode	/* OPTIONAL */;
	BEACON_PL_Est_t	*beaconPLEst	/* OPTIONAL */;
	long	*postVerificationPeriod	/* OPTIONAL */;
	DHS_Sync_t	*dhs_sync	/* OPTIONAL */;
	TimingMaintainedSynchInd_t	*timingMaintainedSynchInd	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelReconfiguration_v690ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_postVerificationPeriod_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfiguration_v690ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _PhysicalChannelReconfiguration_v690ext_IEs_H_ */
#include <asn_internal.h>
