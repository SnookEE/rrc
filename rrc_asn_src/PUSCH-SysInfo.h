/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PUSCH_SysInfo_H_
#define	_PUSCH_SysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PUSCH-Identity.h"
#include "PUSCH-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransportFormatSet;
struct TFCS;

/* PUSCH-SysInfo */
typedef struct PUSCH_SysInfo {
	PUSCH_Identity_t	 pusch_Identity;
	PUSCH_Info_t	 pusch_Info;
	struct TransportFormatSet	*usch_TFS	/* OPTIONAL */;
	struct TFCS	*usch_TFCS	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TransportFormatSet.h"
#include "TFCS.h"

#endif	/* _PUSCH_SysInfo_H_ */
#include <asn_internal.h>
