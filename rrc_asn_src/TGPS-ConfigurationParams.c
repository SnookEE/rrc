/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "TGPS-ConfigurationParams.h"

static asn_TYPE_member_t asn_MBR_TGPS_ConfigurationParams_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgmp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGMP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgmp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgprc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGPRC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgprc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgsn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGSN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgsn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgl1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgl1"
		},
	{ ATF_POINTER, 1, offsetof(struct TGPS_ConfigurationParams, tgl2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgl2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgd),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, tgpl1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGPL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tgpl1"
		},
	{ ATF_POINTER, 1, offsetof(struct TGPS_ConfigurationParams, dummy),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TGPL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, rpp),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RPP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rpp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, itp),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"itp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, ul_DL_Mode),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_DL_Mode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DL-Mode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, dl_FrameType),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_FrameType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-FrameType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, deltaSIR1),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaSIR1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TGPS_ConfigurationParams, deltaSIRAfter1),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaSIRAfter1"
		},
	{ ATF_POINTER, 4, offsetof(struct TGPS_ConfigurationParams, deltaSIR2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaSIR2"
		},
	{ ATF_POINTER, 3, offsetof(struct TGPS_ConfigurationParams, deltaSIRAfter2),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaSIRAfter2"
		},
	{ ATF_POINTER, 2, offsetof(struct TGPS_ConfigurationParams, nidentifyAbort),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NidentifyAbort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nidentifyAbort"
		},
	{ ATF_POINTER, 1, offsetof(struct TGPS_ConfigurationParams, treconfirmAbort),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TreconfirmAbort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"treconfirmAbort"
		},
};
static const int asn_MAP_TGPS_ConfigurationParams_oms_1[] = { 4, 7, 14, 15, 16, 17 };
static const ber_tlv_tag_t asn_DEF_TGPS_ConfigurationParams_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TGPS_ConfigurationParams_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tgmp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tgprc */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tgsn */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tgl1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tgl2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tgd */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* tgpl1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rpp */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* itp */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ul-DL-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* dl-FrameType */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* deltaSIR1 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* deltaSIRAfter1 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* deltaSIR2 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* deltaSIRAfter2 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* nidentifyAbort */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 } /* treconfirmAbort */
};
static asn_SEQUENCE_specifics_t asn_SPC_TGPS_ConfigurationParams_specs_1 = {
	sizeof(struct TGPS_ConfigurationParams),
	offsetof(struct TGPS_ConfigurationParams, _asn_ctx),
	asn_MAP_TGPS_ConfigurationParams_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_TGPS_ConfigurationParams_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TGPS_ConfigurationParams = {
	"TGPS-ConfigurationParams",
	"TGPS-ConfigurationParams",
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
	asn_DEF_TGPS_ConfigurationParams_tags_1,
	sizeof(asn_DEF_TGPS_ConfigurationParams_tags_1)
		/sizeof(asn_DEF_TGPS_ConfigurationParams_tags_1[0]), /* 1 */
	asn_DEF_TGPS_ConfigurationParams_tags_1,	/* Same as above */
	sizeof(asn_DEF_TGPS_ConfigurationParams_tags_1)
		/sizeof(asn_DEF_TGPS_ConfigurationParams_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TGPS_ConfigurationParams_1,
	18,	/* Elements count */
	&asn_SPC_TGPS_ConfigurationParams_specs_1	/* Additional specs */
};

