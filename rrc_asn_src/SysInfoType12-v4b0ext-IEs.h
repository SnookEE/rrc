/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SysInfoType12_v4b0ext_IEs_H_
#define	_SysInfoType12_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementControlSysInfo-LCR-r4-ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FACH_MeasurementOccasionInfo_LCR_r4_ext;

/* SysInfoType12-v4b0ext-IEs */
typedef struct SysInfoType12_v4b0ext_IEs {
	struct FACH_MeasurementOccasionInfo_LCR_r4_ext	*fach_MeasurementOccasionInfo_LCR_Ext	/* OPTIONAL */;
	MeasurementControlSysInfo_LCR_r4_ext_t	 measurementControlSysInfo_LCR;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType12_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType12_v4b0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FACH-MeasurementOccasionInfo-LCR-r4-ext.h"

#endif	/* _SysInfoType12_v4b0ext_IEs_H_ */
#include <asn_internal.h>
