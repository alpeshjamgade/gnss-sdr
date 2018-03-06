/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "OTD-MsrsOfOtherSets.h"

static asn_oer_constraints_t asn_OER_type_OTD_MsrsOfOtherSets_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_OTD_MsrsOfOtherSets_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_OTD_MsrsOfOtherSets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MsrsOfOtherSets, choice.identityNotPresent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTD_Measurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"identityNotPresent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MsrsOfOtherSets, choice.identityPresent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTD_MeasurementWithID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"identityPresent"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_OTD_MsrsOfOtherSets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* identityNotPresent */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* identityPresent */
};
asn_CHOICE_specifics_t asn_SPC_OTD_MsrsOfOtherSets_specs_1 = {
	sizeof(struct OTD_MsrsOfOtherSets),
	offsetof(struct OTD_MsrsOfOtherSets, _asn_ctx),
	offsetof(struct OTD_MsrsOfOtherSets, present),
	sizeof(((struct OTD_MsrsOfOtherSets *)0)->present),
	asn_MAP_OTD_MsrsOfOtherSets_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_OTD_MsrsOfOtherSets = {
	"OTD-MsrsOfOtherSets",
	"OTD-MsrsOfOtherSets",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_OTD_MsrsOfOtherSets_constr_1, &asn_PER_type_OTD_MsrsOfOtherSets_constr_1, CHOICE_constraint },
	asn_MBR_OTD_MsrsOfOtherSets_1,
	2,	/* Elements count */
	&asn_SPC_OTD_MsrsOfOtherSets_specs_1	/* Additional specs */
};

