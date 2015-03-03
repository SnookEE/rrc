/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MAC_d_FlowIdentityDCHandHSDSCH_H_
#define	_MAC_d_FlowIdentityDCHandHSDSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportChannelIdentity.h"
#include "MAC-d-FlowIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-d-FlowIdentityDCHandHSDSCH */
typedef struct MAC_d_FlowIdentityDCHandHSDSCH {
	TransportChannelIdentity_t	 dch_transport_ch_id;
	MAC_d_FlowIdentity_t	 hsdsch_mac_d_flow_id;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_d_FlowIdentityDCHandHSDSCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_d_FlowIdentityDCHandHSDSCH;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_d_FlowIdentityDCHandHSDSCH_H_ */
#include <asn_internal.h>
