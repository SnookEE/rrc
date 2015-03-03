/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_EphemerisParameter_H_
#define	_EphemerisParameter_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "SubFrame1Reserved.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EphemerisParameter */
typedef struct EphemerisParameter {
	BIT_STRING_t	 codeOnL2;
	BIT_STRING_t	 uraIndex;
	BIT_STRING_t	 satHealth;
	BIT_STRING_t	 iodc;
	BIT_STRING_t	 l2Pflag;
	SubFrame1Reserved_t	 sf1Revd;
	BIT_STRING_t	 t_GD;
	BIT_STRING_t	 t_oc;
	BIT_STRING_t	 af2;
	BIT_STRING_t	 af1;
	BIT_STRING_t	 af0;
	BIT_STRING_t	 c_rs;
	BIT_STRING_t	 delta_n;
	BIT_STRING_t	 m0;
	BIT_STRING_t	 c_uc;
	BIT_STRING_t	 e;
	BIT_STRING_t	 c_us;
	BIT_STRING_t	 a_Sqrt;
	BIT_STRING_t	 t_oe;
	BIT_STRING_t	 fitInterval;
	BIT_STRING_t	 aodo;
	BIT_STRING_t	 c_ic;
	BIT_STRING_t	 omega0;
	BIT_STRING_t	 c_is;
	BIT_STRING_t	 i0;
	BIT_STRING_t	 c_rc;
	BIT_STRING_t	 omega;
	BIT_STRING_t	 omegaDot;
	BIT_STRING_t	 iDot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EphemerisParameter_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EphemerisParameter;

#ifdef __cplusplus
}
#endif

#endif	/* _EphemerisParameter_H_ */
#include <asn_internal.h>
