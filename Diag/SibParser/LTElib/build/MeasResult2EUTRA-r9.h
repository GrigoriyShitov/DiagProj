/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResult2EUTRA_r9_H_
#define	_MeasResult2EUTRA_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "MeasResultListEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResult2EUTRA-r9 */
typedef struct MeasResult2EUTRA_r9 {
	ARFCN_ValueEUTRA_t	 carrierFreq_r9;
	MeasResultListEUTRA_t	 measResultList_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResult2EUTRA_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResult2EUTRA_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResult2EUTRA_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResult2EUTRA_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResult2EUTRA_r9_H_ */
#include <asn_internal.h>
