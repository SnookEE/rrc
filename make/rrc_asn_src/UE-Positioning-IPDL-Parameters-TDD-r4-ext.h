/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_Positioning_IPDL_Parameters_TDD_r4_ext_H_
#define	_UE_Positioning_IPDL_Parameters_TDD_r4_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IP-Spacing-TDD.h"
#include <NativeInteger.h>
#include "IP-PCCPCH-r4.h"
#include "BurstModeParameters.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-IPDL-Parameters-TDD-r4-ext */
typedef struct UE_Positioning_IPDL_Parameters_TDD_r4_ext {
	IP_Spacing_TDD_t	 ip_Spacing;
	long	 ip_slot;
	long	 ip_Start;
	IP_PCCPCH_r4_t	*ip_PCCPCG	/* OPTIONAL */;
	BurstModeParameters_t	 burstModeParameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_IPDL_Parameters_TDD_r4_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_IPDL_Parameters_TDD_r4_ext;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_IPDL_Parameters_TDD_r4_ext_H_ */
#include <asn_internal.h>
