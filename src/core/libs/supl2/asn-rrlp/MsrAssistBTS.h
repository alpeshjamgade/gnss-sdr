/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_MsrAssistBTS_H_
#define	_MsrAssistBTS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCHCarrier.h"
#include "BSIC.h"
#include "MultiFrameOffset.h"
#include "TimeSlotScheme.h"
#include "RoughRTD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CalcAssistanceBTS;

/* MsrAssistBTS */
typedef struct MsrAssistBTS {
	BCCHCarrier_t	 bcchCarrier;
	BSIC_t	 bsic;
	MultiFrameOffset_t	 multiFrameOffset;
	TimeSlotScheme_t	 timeSlotScheme;
	RoughRTD_t	 roughRTD;
	struct CalcAssistanceBTS	*calcAssistanceBTS	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MsrAssistBTS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MsrAssistBTS;
extern asn_SEQUENCE_specifics_t asn_SPC_MsrAssistBTS_specs_1;
extern asn_TYPE_member_t asn_MBR_MsrAssistBTS_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CalcAssistanceBTS.h"

#endif	/* _MsrAssistBTS_H_ */
#include <asn_internal.h>
