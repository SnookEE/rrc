/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AP_Signature_VCAM_H_
#define	_AP_Signature_VCAM_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AP-Signature.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AvailableAP_SubchannelList;

/* AP-Signature-VCAM */
typedef struct AP_Signature_VCAM {
	AP_Signature_t	 ap_Signature;
	struct AvailableAP_SubchannelList	*availableAP_SubchannelList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AP_Signature_VCAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AP_Signature_VCAM;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AvailableAP-SubchannelList.h"

#endif	/* _AP_Signature_VCAM_H_ */
#include <asn_internal.h>
