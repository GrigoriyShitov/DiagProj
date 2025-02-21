/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Other_Parameters_v1360_H_
#define	_Other_Parameters_v1360_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v1360__inDeviceCoexInd_HardwareSharingInd_r13 {
	Other_Parameters_v1360__inDeviceCoexInd_HardwareSharingInd_r13_supported	= 0
} e_Other_Parameters_v1360__inDeviceCoexInd_HardwareSharingInd_r13;

/* Other-Parameters-v1360 */
typedef struct Other_Parameters_v1360 {
	long	*inDeviceCoexInd_HardwareSharingInd_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v1360_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_inDeviceCoexInd_HardwareSharingInd_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v1360;
extern asn_SEQUENCE_specifics_t asn_SPC_Other_Parameters_v1360_specs_1;
extern asn_TYPE_member_t asn_MBR_Other_Parameters_v1360_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v1360_H_ */
#include <asn_internal.h>
