/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PDSCH_SHO_DCH_Info_H_
#define	_PDSCH_SHO_DCH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSCH-RadioLinkIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RL_IdentifierList;

/* PDSCH-SHO-DCH-Info */
typedef struct PDSCH_SHO_DCH_Info {
	DSCH_RadioLinkIdentifier_t	 dsch_RadioLinkIdentifier;
	struct RL_IdentifierList	*rl_IdentifierList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_SHO_DCH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_SHO_DCH_Info;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RL-IdentifierList.h"

#endif	/* _PDSCH_SHO_DCH_Info_H_ */
#include <asn_internal.h>