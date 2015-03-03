/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_HorizontalWithVerticalVelocityAndUncertainty_H_
#define	_HorizontalWithVerticalVelocityAndUncertainty_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum verticalSpeedDirection {
	verticalSpeedDirection_upward	= 0,
	verticalSpeedDirection_downward	= 1
} e_verticalSpeedDirection;

/* HorizontalWithVerticalVelocityAndUncertainty */
typedef struct HorizontalWithVerticalVelocityAndUncertainty {
	long	 verticalSpeedDirection;
	long	 bearing;
	long	 horizontalSpeed;
	long	 verticalSpeed;
	long	 horizontalSpeedUncertainty;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HorizontalWithVerticalVelocityAndUncertainty_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_verticalSpeedDirection_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HorizontalWithVerticalVelocityAndUncertainty;

#ifdef __cplusplus
}
#endif

#endif	/* _HorizontalWithVerticalVelocityAndUncertainty_H_ */
#include <asn_internal.h>
