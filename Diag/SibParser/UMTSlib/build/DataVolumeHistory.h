/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DataVolumeHistory_H_
#define	_DataVolumeHistory_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DataTransmFrequency;
struct DataVolumePerRB_List;

/* DataVolumeHistory */
typedef struct DataVolumeHistory {
	long	 dataVolumeMontoringWindow;
	struct DataTransmFrequency	*dataTransmFrequency	/* OPTIONAL */;
	struct DataVolumePerRB_List	*dataVolumePerRB	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataVolumeHistory_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataVolumeHistory;
extern asn_SEQUENCE_specifics_t asn_SPC_DataVolumeHistory_specs_1;
extern asn_TYPE_member_t asn_MBR_DataVolumeHistory_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DataTransmFrequency.h"
#include "DataVolumePerRB-List.h"

#endif	/* _DataVolumeHistory_H_ */
#include <asn_internal.h>
