/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_ProtocolError_H_
#define	_ProtocolError_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ErrorCodes.h"
#include "ExtensionContainer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Rel_5_ProtocolError_Extension;

/* ProtocolError */
typedef struct ProtocolError {
	ErrorCodes_t	 errorCause;
	ExtensionContainer_t	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Rel_5_ProtocolError_Extension	*rel_5_ProtocolError_Extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolError;
extern asn_SEQUENCE_specifics_t asn_SPC_ProtocolError_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtocolError_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Rel-5-ProtocolError-Extension.h"

#endif	/* _ProtocolError_H_ */
#include <asn_internal.h>
