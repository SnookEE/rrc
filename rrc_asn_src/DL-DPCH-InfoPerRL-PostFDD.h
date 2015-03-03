/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_DPCH_InfoPerRL_PostFDD_H_
#define	_DL_DPCH_InfoPerRL_PostFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCPICH-UsageForChannelEst.h"
#include "DL-ChannelisationCode.h"
#include "TPC-CombinationIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-DPCH-InfoPerRL-PostFDD */
typedef struct DL_DPCH_InfoPerRL_PostFDD {
	PCPICH_UsageForChannelEst_t	 pCPICH_UsageForChannelEst;
	DL_ChannelisationCode_t	 dl_ChannelisationCode;
	TPC_CombinationIndex_t	 tpc_CombinationIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoPerRL_PostFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoPerRL_PostFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DPCH_InfoPerRL_PostFDD_H_ */
#include <asn_internal.h>
