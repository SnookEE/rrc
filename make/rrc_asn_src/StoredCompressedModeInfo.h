/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_StoredCompressedModeInfo_H_
#define	_StoredCompressedModeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StoredTGP-SequenceList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CodeChangeStatusList;

/* StoredCompressedModeInfo */
typedef struct StoredCompressedModeInfo {
	StoredTGP_SequenceList_t	 storedTGP_SequenceList;
	struct CodeChangeStatusList	*codeChangeStatusList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoredCompressedModeInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoredCompressedModeInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CodeChangeStatusList.h"

#endif	/* _StoredCompressedModeInfo_H_ */
#include <asn_internal.h>
