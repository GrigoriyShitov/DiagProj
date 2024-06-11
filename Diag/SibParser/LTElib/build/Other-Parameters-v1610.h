/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_Other_Parameters_v1610_H_
#define	_Other_Parameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v1610__resumeWithStoredMCG_SCells_r16 {
	Other_Parameters_v1610__resumeWithStoredMCG_SCells_r16_supported	= 0
} e_Other_Parameters_v1610__resumeWithStoredMCG_SCells_r16;
typedef enum Other_Parameters_v1610__resumeWithMCG_SCellConfig_r16 {
	Other_Parameters_v1610__resumeWithMCG_SCellConfig_r16_supported	= 0
} e_Other_Parameters_v1610__resumeWithMCG_SCellConfig_r16;
typedef enum Other_Parameters_v1610__resumeWithStoredSCG_r16 {
	Other_Parameters_v1610__resumeWithStoredSCG_r16_supported	= 0
} e_Other_Parameters_v1610__resumeWithStoredSCG_r16;
typedef enum Other_Parameters_v1610__resumeWithSCG_Config_r16 {
	Other_Parameters_v1610__resumeWithSCG_Config_r16_supported	= 0
} e_Other_Parameters_v1610__resumeWithSCG_Config_r16;
typedef enum Other_Parameters_v1610__mcgRLF_RecoveryViaSCG_r16 {
	Other_Parameters_v1610__mcgRLF_RecoveryViaSCG_r16_supported	= 0
} e_Other_Parameters_v1610__mcgRLF_RecoveryViaSCG_r16;
typedef enum Other_Parameters_v1610__overheatingIndForSCG_r16 {
	Other_Parameters_v1610__overheatingIndForSCG_r16_supported	= 0
} e_Other_Parameters_v1610__overheatingIndForSCG_r16;

/* Other-Parameters-v1610 */
typedef struct Other_Parameters_v1610 {
	long	*resumeWithStoredMCG_SCells_r16	/* OPTIONAL */;
	long	*resumeWithMCG_SCellConfig_r16	/* OPTIONAL */;
	long	*resumeWithStoredSCG_r16	/* OPTIONAL */;
	long	*resumeWithSCG_Config_r16	/* OPTIONAL */;
	long	*mcgRLF_RecoveryViaSCG_r16	/* OPTIONAL */;
	long	*overheatingIndForSCG_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithStoredMCG_SCells_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithMCG_SCellConfig_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithStoredSCG_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithSCG_Config_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcgRLF_RecoveryViaSCG_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_overheatingIndForSCG_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_Other_Parameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_Other_Parameters_v1610_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v1610_H_ */
#include <asn_internal.h>
