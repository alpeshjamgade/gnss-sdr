/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "MsrPosition-Req.h"

asn_TYPE_member_t asn_MBR_MsrPosition_Req_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MsrPosition_Req, positionInstruct),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionInstruct,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"positionInstruct"
		},
	{ ATF_POINTER, 7, offsetof(struct MsrPosition_Req, referenceAssistData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceAssistData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceAssistData"
		},
	{ ATF_POINTER, 6, offsetof(struct MsrPosition_Req, msrAssistData),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsrAssistData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msrAssistData"
		},
	{ ATF_POINTER, 5, offsetof(struct MsrPosition_Req, systemInfoAssistData),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoAssistData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInfoAssistData"
		},
	{ ATF_POINTER, 4, offsetof(struct MsrPosition_Req, gps_AssistData),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPS_AssistData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gps-AssistData"
		},
	{ ATF_POINTER, 3, offsetof(struct MsrPosition_Req, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extensionContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct MsrPosition_Req, rel98_MsrPosition_Req_extension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Rel98_MsrPosition_Req_Extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rel98-MsrPosition-Req-extension"
		},
	{ ATF_POINTER, 1, offsetof(struct MsrPosition_Req, rel5_MsrPosition_Req_extension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Rel5_MsrPosition_Req_Extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rel5-MsrPosition-Req-extension"
		},
};
static const int asn_MAP_MsrPosition_Req_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_MsrPosition_Req_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MsrPosition_Req_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* positionInstruct */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msrAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gps-AssistData */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* extensionContainer */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rel98-MsrPosition-Req-extension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* rel5-MsrPosition-Req-extension */
};
asn_SEQUENCE_specifics_t asn_SPC_MsrPosition_Req_specs_1 = {
	sizeof(struct MsrPosition_Req),
	offsetof(struct MsrPosition_Req, _asn_ctx),
	asn_MAP_MsrPosition_Req_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_MsrPosition_Req_oms_1,	/* Optional members */
	5, 2,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MsrPosition_Req = {
	"MsrPosition-Req",
	"MsrPosition-Req",
	&asn_OP_SEQUENCE,
	asn_DEF_MsrPosition_Req_tags_1,
	sizeof(asn_DEF_MsrPosition_Req_tags_1)
		/sizeof(asn_DEF_MsrPosition_Req_tags_1[0]), /* 1 */
	asn_DEF_MsrPosition_Req_tags_1,	/* Same as above */
	sizeof(asn_DEF_MsrPosition_Req_tags_1)
		/sizeof(asn_DEF_MsrPosition_Req_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MsrPosition_Req_1,
	8,	/* Elements count */
	&asn_SPC_MsrPosition_Req_specs_1	/* Additional specs */
};

