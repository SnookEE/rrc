/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DL-PhysChCapabilityFDD.h"

static int
memb_maxNoDPCH_PDSCH_Codes_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_maxNoDPCH_PDSCH_Codes_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DL_PhysChCapabilityFDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD, maxNoDPCH_PDSCH_Codes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_maxNoDPCH_PDSCH_Codes_constraint_1,
		&asn_PER_memb_maxNoDPCH_PDSCH_Codes_constr_2,
		0,
		"maxNoDPCH-PDSCH-Codes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD, maxNoPhysChBitsReceived),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxNoPhysChBitsReceived,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxNoPhysChBitsReceived"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD, supportForSF_512),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForSF-512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD, dummy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SimultaneousSCCPCH_DPCH_Reception,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_PhysChCapabilityFDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_PhysChCapabilityFDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNoDPCH-PDSCH-Codes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNoPhysChBitsReceived */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportForSF-512 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dummy2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_PhysChCapabilityFDD_specs_1 = {
	sizeof(struct DL_PhysChCapabilityFDD),
	offsetof(struct DL_PhysChCapabilityFDD, _asn_ctx),
	asn_MAP_DL_PhysChCapabilityFDD_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityFDD = {
	"DL-PhysChCapabilityFDD",
	"DL-PhysChCapabilityFDD",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DL_PhysChCapabilityFDD_tags_1,
	sizeof(asn_DEF_DL_PhysChCapabilityFDD_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityFDD_tags_1[0]), /* 1 */
	asn_DEF_DL_PhysChCapabilityFDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PhysChCapabilityFDD_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityFDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_PhysChCapabilityFDD_1,
	5,	/* Elements count */
	&asn_SPC_DL_PhysChCapabilityFDD_specs_1	/* Additional specs */
};

