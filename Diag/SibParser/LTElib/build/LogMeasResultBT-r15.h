/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LogMeasResultBT_r15_H_
#define	_LogMeasResultBT_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LogMeasResultBT-r15 */
typedef struct LogMeasResultBT_r15 {
	BIT_STRING_t	 bt_Addr_r15;
	long	*rssi_BT_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasResultBT_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasResultBT_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LogMeasResultBT_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LogMeasResultBT_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LogMeasResultBT_r15_H_ */
#include <asn_internal.h>
