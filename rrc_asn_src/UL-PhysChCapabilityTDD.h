/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_PhysChCapabilityTDD_H_
#define	_UL_PhysChCapabilityTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MaxTS-PerFrame.h"
#include "MaxPhysChPerTimeslot.h"
#include "MinimumSF-UL.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-PhysChCapabilityTDD */
typedef struct UL_PhysChCapabilityTDD {
	MaxTS_PerFrame_t	 maxTS_PerFrame;
	MaxPhysChPerTimeslot_t	 maxPhysChPerTimeslot;
	MinimumSF_UL_t	 minimumSF;
	BOOLEAN_t	 supportOfPUSCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_PhysChCapabilityTDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_PhysChCapabilityTDD;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_PhysChCapabilityTDD_H_ */
#include <asn_internal.h>
