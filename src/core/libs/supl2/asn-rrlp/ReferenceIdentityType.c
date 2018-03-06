/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "ReferenceIdentityType.h"

static asn_oer_constraints_t asn_OER_type_ReferenceIdentityType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ReferenceIdentityType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ReferenceIdentityType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.bsicAndCarrier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSICAndCarrier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bsicAndCarrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.ci),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ci"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.requestIndex),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.systemInfoIndex),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInfoIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.ciAndLAC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIDAndLAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ciAndLAC"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ReferenceIdentityType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bsicAndCarrier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ci */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestIndex */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoIndex */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ciAndLAC */
};
asn_CHOICE_specifics_t asn_SPC_ReferenceIdentityType_specs_1 = {
	sizeof(struct ReferenceIdentityType),
	offsetof(struct ReferenceIdentityType, _asn_ctx),
	offsetof(struct ReferenceIdentityType, present),
	sizeof(((struct ReferenceIdentityType *)0)->present),
	asn_MAP_ReferenceIdentityType_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceIdentityType = {
	"ReferenceIdentityType",
	"ReferenceIdentityType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ReferenceIdentityType_constr_1, &asn_PER_type_ReferenceIdentityType_constr_1, CHOICE_constraint },
	asn_MBR_ReferenceIdentityType_1,
	5,	/* Elements count */
	&asn_SPC_ReferenceIdentityType_specs_1	/* Additional specs */
};

