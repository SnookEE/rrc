/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_PhysChCapabilityFDD_H_
#define	_DL_PhysChCapabilityFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "MaxNoPhysChBitsReceived.h"
#include <BOOLEAN.h>
#include "SimultaneousSCCPCH-DPCH-Reception.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-PhysChCapabilityFDD */
typedef struct DL_PhysChCapabilityFDD {
	long	 maxNoDPCH_PDSCH_Codes;
	MaxNoPhysChBitsReceived_t	 maxNoPhysChBitsReceived;
	BOOLEAN_t	 supportForSF_512;
	BOOLEAN_t	 dummy;
	SimultaneousSCCPCH_DPCH_Reception_t	 dummy2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PhysChCapabilityFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PhysChCapabilityFDD_H_ */
#include <asn_internal.h>
