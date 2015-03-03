/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MAC_d_PDU_SizeInfo_List_H_
#define	_MAC_d_PDU_SizeInfo_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAC_d_PDUsizeInfo;

/* MAC-d-PDU-SizeInfo-List */
typedef struct MAC_d_PDU_SizeInfo_List {
	A_SEQUENCE_OF(struct MAC_d_PDUsizeInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_d_PDU_SizeInfo_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_d_PDU_SizeInfo_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-d-PDUsizeInfo.h"

#endif	/* _MAC_d_PDU_SizeInfo_List_H_ */
#include <asn_internal.h>
