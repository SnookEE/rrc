/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellSelectReselectInfo_v590ext_H_
#define	_CellSelectReselectInfo_v590ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaQrxlevmin.h"
#include "DeltaRSCP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectReselectInfo-v590ext */
typedef struct CellSelectReselectInfo_v590ext {
	DeltaQrxlevmin_t	*deltaQrxlevmin	/* OPTIONAL */;
	DeltaRSCP_t	*deltaQhcs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectReselectInfo_v590ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectReselectInfo_v590ext;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectReselectInfo_v590ext_H_ */
#include <asn_internal.h>
