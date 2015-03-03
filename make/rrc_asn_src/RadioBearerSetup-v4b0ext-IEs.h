/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RadioBearerSetup_v4b0ext_IEs_H_
#define	_RadioBearerSetup_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SSDT-UL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellIdentity_PerRL_List;

/* RadioBearerSetup-v4b0ext-IEs */
typedef struct RadioBearerSetup_v4b0ext_IEs {
	SSDT_UL_t	*dummy	/* OPTIONAL */;
	struct CellIdentity_PerRL_List	*cell_id_PerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_v4b0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellIdentity-PerRL-List.h"

#endif	/* _RadioBearerSetup_v4b0ext_IEs_H_ */
#include <asn_internal.h>
