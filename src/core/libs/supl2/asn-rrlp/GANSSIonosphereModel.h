/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_GANSSIonosphereModel_H_
#define	_GANSSIonosphereModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSIonosphereModel */
typedef struct GANSSIonosphereModel {
	long	 ai0;
	long	 ai1;
	long	 ai2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSIonosphereModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSIonosphereModel;
extern asn_SEQUENCE_specifics_t asn_SPC_GANSSIonosphereModel_specs_1;
extern asn_TYPE_member_t asn_MBR_GANSSIonosphereModel_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSIonosphereModel_H_ */
#include <asn_internal.h>
