/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ReportQuantityWLAN_r13_H_
#define	_ReportQuantityWLAN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportQuantityWLAN_r13__bandRequestWLAN_r13 {
	ReportQuantityWLAN_r13__bandRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__bandRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13 {
	ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13 {
	ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13 {
	ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13 {
	ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13 {
	ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13;
typedef enum ReportQuantityWLAN_r13__stationCountRequestWLAN_r13 {
	ReportQuantityWLAN_r13__stationCountRequestWLAN_r13_true	= 0
} e_ReportQuantityWLAN_r13__stationCountRequestWLAN_r13;

/* ReportQuantityWLAN-r13 */
typedef struct ReportQuantityWLAN_r13 {
	long	*bandRequestWLAN_r13	/* OPTIONAL */;
	long	*carrierInfoRequestWLAN_r13	/* OPTIONAL */;
	long	*availableAdmissionCapacityRequestWLAN_r13	/* OPTIONAL */;
	long	*backhaulDL_BandwidthRequestWLAN_r13	/* OPTIONAL */;
	long	*backhaulUL_BandwidthRequestWLAN_r13	/* OPTIONAL */;
	long	*channelUtilizationRequestWLAN_r13	/* OPTIONAL */;
	long	*stationCountRequestWLAN_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportQuantityWLAN_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bandRequestWLAN_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_carrierInfoRequestWLAN_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_availableAdmissionCapacityRequestWLAN_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_channelUtilizationRequestWLAN_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_stationCountRequestWLAN_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportQuantityWLAN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportQuantityWLAN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportQuantityWLAN_r13_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ReportQuantityWLAN_r13_H_ */
#include <asn_internal.h>
