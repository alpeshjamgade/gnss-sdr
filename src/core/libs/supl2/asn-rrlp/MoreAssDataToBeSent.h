/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_MoreAssDataToBeSent_H_
#define	_MoreAssDataToBeSent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MoreAssDataToBeSent {
	MoreAssDataToBeSent_noMoreMessages	= 0,
	MoreAssDataToBeSent_moreMessagesOnTheWay	= 1
} e_MoreAssDataToBeSent;

/* MoreAssDataToBeSent */
typedef long	 MoreAssDataToBeSent_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MoreAssDataToBeSent_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MoreAssDataToBeSent;
extern const asn_INTEGER_specifics_t asn_SPC_MoreAssDataToBeSent_specs_1;
asn_struct_free_f MoreAssDataToBeSent_free;
asn_struct_print_f MoreAssDataToBeSent_print;
asn_constr_check_f MoreAssDataToBeSent_constraint;
ber_type_decoder_f MoreAssDataToBeSent_decode_ber;
der_type_encoder_f MoreAssDataToBeSent_encode_der;
xer_type_decoder_f MoreAssDataToBeSent_decode_xer;
xer_type_encoder_f MoreAssDataToBeSent_encode_xer;
oer_type_decoder_f MoreAssDataToBeSent_decode_oer;
oer_type_encoder_f MoreAssDataToBeSent_encode_oer;
per_type_decoder_f MoreAssDataToBeSent_decode_uper;
per_type_encoder_f MoreAssDataToBeSent_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MoreAssDataToBeSent_H_ */
#include <asn_internal.h>
