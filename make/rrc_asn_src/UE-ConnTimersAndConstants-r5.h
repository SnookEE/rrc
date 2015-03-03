/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_ConnTimersAndConstants_r5_H_
#define	_UE_ConnTimersAndConstants_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-301.h"
#include "N-301.h"
#include "T-302.h"
#include "N-302.h"
#include "T-304.h"
#include "N-304.h"
#include "T-305.h"
#include "T-307.h"
#include "T-308.h"
#include "T-309.h"
#include "T-310.h"
#include "N-310.h"
#include "T-311.h"
#include "T-312.h"
#include "N-312-r5.h"
#include "T-313.h"
#include "N-313.h"
#include "T-314.h"
#include "T-315.h"
#include "N-315-r5.h"
#include "T-316.h"
#include "T-317.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-ConnTimersAndConstants-r5 */
typedef struct UE_ConnTimersAndConstants_r5 {
	T_301_t	*t_301	/* DEFAULT 10 */;
	N_301_t	*n_301	/* DEFAULT 2 */;
	T_302_t	*t_302	/* DEFAULT 12 */;
	N_302_t	*n_302	/* DEFAULT 3 */;
	T_304_t	*t_304	/* DEFAULT 4 */;
	N_304_t	*n_304	/* DEFAULT 2 */;
	T_305_t	*t_305	/* DEFAULT 3 */;
	T_307_t	*t_307	/* DEFAULT 4 */;
	T_308_t	*t_308	/* DEFAULT 2 */;
	T_309_t	*t_309	/* DEFAULT 5 */;
	T_310_t	*t_310	/* DEFAULT 3 */;
	N_310_t	*n_310	/* DEFAULT 4 */;
	T_311_t	*t_311	/* DEFAULT 7 */;
	T_312_t	*t_312	/* DEFAULT 1 */;
	N_312_r5_t	 n_312	/* DEFAULT 0 */;
	T_313_t	*t_313	/* DEFAULT 3 */;
	N_313_t	*n_313	/* DEFAULT 4 */;
	T_314_t	*t_314	/* DEFAULT 5 */;
	T_315_t	*t_315	/* DEFAULT 4 */;
	N_315_r5_t	 n_315	/* DEFAULT 0 */;
	T_316_t	*t_316	/* DEFAULT 3 */;
	T_317_t	*t_317	/* DEFAULT 4 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_ConnTimersAndConstants_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_ConnTimersAndConstants_r5;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_ConnTimersAndConstants_r5_H_ */
#include <asn_internal.h>
