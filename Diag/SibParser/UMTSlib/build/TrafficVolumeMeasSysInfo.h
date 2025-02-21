/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TrafficVolumeMeasSysInfo_H_
#define	_TrafficVolumeMeasSysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementIdentity.h"
#include "MeasurementReportingMode.h"
#include "TrafficVolumeReportCriteriaSysInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrafficVolumeMeasurementObjectList;
struct TrafficVolumeMeasQuantity;
struct TrafficVolumeReportingQuantity;
struct TrafficVolumeReportingCriteria;
struct MeasurementValidity;

/* TrafficVolumeMeasSysInfo */
typedef struct TrafficVolumeMeasSysInfo {
	MeasurementIdentity_t	*trafficVolumeMeasurementID	/* DEFAULT 4 */;
	struct TrafficVolumeMeasurementObjectList	*trafficVolumeMeasurementObjectList	/* OPTIONAL */;
	struct TrafficVolumeMeasQuantity	*trafficVolumeMeasQuantity	/* OPTIONAL */;
	struct TrafficVolumeReportingQuantity	*trafficVolumeReportingQuantity	/* OPTIONAL */;
	struct TrafficVolumeReportingCriteria	*dummy	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	MeasurementReportingMode_t	 measurementReportingMode;
	TrafficVolumeReportCriteriaSysInfo_t	 reportCriteriaSysInf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeMeasSysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasSysInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeMeasSysInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficVolumeMeasSysInfo_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrafficVolumeMeasurementObjectList.h"
#include "TrafficVolumeMeasQuantity.h"
#include "TrafficVolumeReportingQuantity.h"
#include "TrafficVolumeReportingCriteria.h"
#include "MeasurementValidity.h"

#endif	/* _TrafficVolumeMeasSysInfo_H_ */
#include <asn_internal.h>
