/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RestrictedTrCH_H_
#define	_RestrictedTrCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-TrCH-Type.h"
#include "TransportChannelIdentity.h"
#include "AllowedTFI-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RestrictedTrCH */
typedef struct RestrictedTrCH {
	DL_TrCH_Type_t	 dl_restrictedTrCh_Type;
	TransportChannelIdentity_t	 restrictedDL_TrCH_Identity;
	AllowedTFI_List_t	 allowedTFIList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictedTrCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictedTrCH;

#ifdef __cplusplus
}
#endif

#endif	/* _RestrictedTrCH_H_ */
#include <asn_internal.h>
