/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_AlmanacElement_H_
#define	_AlmanacElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatelliteID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AlmanacElement */
typedef struct AlmanacElement {
	SatelliteID_t	 satelliteID;
	long	 almanacE;
	long	 alamanacToa;
	long	 almanacKsii;
	long	 almanacOmegaDot;
	long	 almanacSVhealth;
	long	 almanacAPowerHalf;
	long	 almanacOmega0;
	long	 almanacW;
	long	 almanacM0;
	long	 almanacAF0;
	long	 almanacAF1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlmanacElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlmanacElement;
extern asn_SEQUENCE_specifics_t asn_SPC_AlmanacElement_specs_1;
extern asn_TYPE_member_t asn_MBR_AlmanacElement_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _AlmanacElement_H_ */
#include <asn_internal.h>
