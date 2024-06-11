/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../try-new-asn.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EllipsoidPointAltitudeEllipsoide_H_
#define	_EllipsoidPointAltitudeEllipsoide_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EllipsoidPointAltitudeEllipsoide__latitudeSign {
	EllipsoidPointAltitudeEllipsoide__latitudeSign_north	= 0,
	EllipsoidPointAltitudeEllipsoide__latitudeSign_south	= 1
} e_EllipsoidPointAltitudeEllipsoide__latitudeSign;
typedef enum EllipsoidPointAltitudeEllipsoide__altitudeDirection {
	EllipsoidPointAltitudeEllipsoide__altitudeDirection_height	= 0,
	EllipsoidPointAltitudeEllipsoide__altitudeDirection_depth	= 1
} e_EllipsoidPointAltitudeEllipsoide__altitudeDirection;

/* EllipsoidPointAltitudeEllipsoide */
typedef struct EllipsoidPointAltitudeEllipsoide {
	long	 latitudeSign;
	long	 latitude;
	long	 longitude;
	long	 altitudeDirection;
	long	 altitude;
	long	 uncertaintySemiMajor;
	long	 uncertaintySemiMinor;
	long	 orientationMajorAxis;
	long	 uncertaintyAltitude;
	long	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EllipsoidPointAltitudeEllipsoide_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_latitudeSign_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_altitudeDirection_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EllipsoidPointAltitudeEllipsoide;
extern asn_SEQUENCE_specifics_t asn_SPC_EllipsoidPointAltitudeEllipsoide_specs_1;
extern asn_TYPE_member_t asn_MBR_EllipsoidPointAltitudeEllipsoide_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _EllipsoidPointAltitudeEllipsoide_H_ */
#include <asn_internal.h>
