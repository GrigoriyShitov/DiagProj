/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_WayPointLocation_r15_H_
#define	_WayPointLocation_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationInfo-r10.h"
#include "AbsoluteTimeInfo-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WayPointLocation-r15 */
typedef struct WayPointLocation_r15 {
	LocationInfo_r10_t	 wayPointLocation_r15;
	AbsoluteTimeInfo_r10_t	*timeStamp_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WayPointLocation_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WayPointLocation_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_WayPointLocation_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_WayPointLocation_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _WayPointLocation_r15_H_ */
#include <asn_internal.h>
