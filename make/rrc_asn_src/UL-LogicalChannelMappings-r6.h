/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_LogicalChannelMappings_r6_H_
#define	_UL_LogicalChannelMappings_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-LogicalChannelMapping-r6.h"
#include "UL-LogicalChannelMappingList-r6.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_LogicalChannelMappings_r6_PR {
	UL_LogicalChannelMappings_r6_PR_NOTHING,	/* No components present */
	UL_LogicalChannelMappings_r6_PR_oneLogicalChannel,
	UL_LogicalChannelMappings_r6_PR_twoLogicalChannels
} UL_LogicalChannelMappings_r6_PR;

/* UL-LogicalChannelMappings-r6 */
typedef struct UL_LogicalChannelMappings_r6 {
	UL_LogicalChannelMappings_r6_PR present;
	union UL_LogicalChannelMappings_r6_u {
		UL_LogicalChannelMapping_r6_t	 oneLogicalChannel;
		UL_LogicalChannelMappingList_r6_t	 twoLogicalChannels;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_LogicalChannelMappings_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_LogicalChannelMappings_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_LogicalChannelMappings_r6_H_ */
#include <asn_internal.h>