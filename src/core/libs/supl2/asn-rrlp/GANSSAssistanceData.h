/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_GANSSAssistanceData_H_
#define	_GANSSAssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSAssistanceData */
typedef OCTET_STRING_t	 GANSSAssistanceData_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GANSSAssistanceData_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GANSSAssistanceData;
asn_struct_free_f GANSSAssistanceData_free;
asn_struct_print_f GANSSAssistanceData_print;
asn_constr_check_f GANSSAssistanceData_constraint;
ber_type_decoder_f GANSSAssistanceData_decode_ber;
der_type_encoder_f GANSSAssistanceData_encode_der;
xer_type_decoder_f GANSSAssistanceData_decode_xer;
xer_type_encoder_f GANSSAssistanceData_encode_xer;
oer_type_decoder_f GANSSAssistanceData_decode_oer;
oer_type_encoder_f GANSSAssistanceData_encode_oer;
per_type_decoder_f GANSSAssistanceData_decode_uper;
per_type_encoder_f GANSSAssistanceData_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSAssistanceData_H_ */
#include <asn_internal.h>
