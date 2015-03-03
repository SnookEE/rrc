/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TransportFormatSet_H_
#define	_TransportFormatSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedTransChTFS.h"
#include "CommonTransChTFS.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransportFormatSet_PR {
	TransportFormatSet_PR_NOTHING,	/* No components present */
	TransportFormatSet_PR_dedicatedTransChTFS,
	TransportFormatSet_PR_commonTransChTFS
} TransportFormatSet_PR;

/* TransportFormatSet */
typedef struct TransportFormatSet {
	TransportFormatSet_PR present;
	union TransportFormatSet_u {
		DedicatedTransChTFS_t	 dedicatedTransChTFS;
		CommonTransChTFS_t	 commonTransChTFS;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportFormatSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportFormatSet;

#ifdef __cplusplus
}
#endif

#endif	/* _TransportFormatSet_H_ */
#include <asn_internal.h>
