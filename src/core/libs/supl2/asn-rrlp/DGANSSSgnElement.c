/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "DGANSSSgnElement.h"

static int
memb_iod_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_udre_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pseudoRangeCor_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -2047 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rangeRateCor_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_iod_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_iod_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_udre_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_udre_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pseudoRangeCor_constr_5 CC_NOTUSED = {
	{ 2, 0 }	/* (-2047..2047) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pseudoRangeCor_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12, -2047,  2047 }	/* (-2047..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rangeRateCor_constr_6 CC_NOTUSED = {
	{ 1, 0 }	/* (-127..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rangeRateCor_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  127 }	/* (-127..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DGANSSSgnElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSgnElement, svID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SVID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"svID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSgnElement, iod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_iod_constr_3, &asn_PER_memb_iod_constr_3,  memb_iod_constraint_1 },
		0, 0, /* No default value */
		"iod"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSgnElement, udre),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_udre_constr_4, &asn_PER_memb_udre_constr_4,  memb_udre_constraint_1 },
		0, 0, /* No default value */
		"udre"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSgnElement, pseudoRangeCor),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pseudoRangeCor_constr_5, &asn_PER_memb_pseudoRangeCor_constr_5,  memb_pseudoRangeCor_constraint_1 },
		0, 0, /* No default value */
		"pseudoRangeCor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSgnElement, rangeRateCor),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rangeRateCor_constr_6, &asn_PER_memb_rangeRateCor_constr_6,  memb_rangeRateCor_constraint_1 },
		0, 0, /* No default value */
		"rangeRateCor"
		},
};
static const ber_tlv_tag_t asn_DEF_DGANSSSgnElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DGANSSSgnElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iod */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* udre */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pseudoRangeCor */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* rangeRateCor */
};
asn_SEQUENCE_specifics_t asn_SPC_DGANSSSgnElement_specs_1 = {
	sizeof(struct DGANSSSgnElement),
	offsetof(struct DGANSSSgnElement, _asn_ctx),
	asn_MAP_DGANSSSgnElement_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DGANSSSgnElement = {
	"DGANSSSgnElement",
	"DGANSSSgnElement",
	&asn_OP_SEQUENCE,
	asn_DEF_DGANSSSgnElement_tags_1,
	sizeof(asn_DEF_DGANSSSgnElement_tags_1)
		/sizeof(asn_DEF_DGANSSSgnElement_tags_1[0]), /* 1 */
	asn_DEF_DGANSSSgnElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_DGANSSSgnElement_tags_1)
		/sizeof(asn_DEF_DGANSSSgnElement_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DGANSSSgnElement_1,
	5,	/* Elements count */
	&asn_SPC_DGANSSSgnElement_specs_1	/* Additional specs */
};

