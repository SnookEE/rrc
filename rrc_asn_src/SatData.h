/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SatData_H_
#define	_SatData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatID.h"
#include "IODE.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SatData */
typedef struct SatData {
	SatID_t	 satID;
	IODE_t	 iode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatData;

#ifdef __cplusplus
}
#endif

#endif	/* _SatData_H_ */
#include <asn_internal.h>
