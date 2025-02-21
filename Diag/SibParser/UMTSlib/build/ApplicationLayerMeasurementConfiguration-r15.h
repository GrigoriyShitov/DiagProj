/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ApplicationLayerMeasurementConfiguration_r15_H_
#define	_ApplicationLayerMeasurementConfiguration_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ApplicationLayerMeasurementConfiguration_r15__serviceType {
	ApplicationLayerMeasurementConfiguration_r15__serviceType_qoe	= 0,
	ApplicationLayerMeasurementConfiguration_r15__serviceType_qoemtsi	= 1
} e_ApplicationLayerMeasurementConfiguration_r15__serviceType;

/* ApplicationLayerMeasurementConfiguration-r15 */
typedef struct ApplicationLayerMeasurementConfiguration_r15 {
	OCTET_STRING_t	 containerForApplicationLayerMeasurementConfiguration;
	long	 serviceType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ApplicationLayerMeasurementConfiguration_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_serviceType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ApplicationLayerMeasurementConfiguration_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_ApplicationLayerMeasurementConfiguration_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ApplicationLayerMeasurementConfiguration_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ApplicationLayerMeasurementConfiguration_r15_H_ */
#include <asn_internal.h>
