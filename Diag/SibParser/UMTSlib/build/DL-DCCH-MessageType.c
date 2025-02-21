/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "../rrc-25.331-i00.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "DL-DCCH-MessageType.h"

static asn_oer_constraints_t asn_OER_type_DL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DL_DCCH_MessageType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.activeSetUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ActiveSetUpdate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activeSetUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.assistanceDataDelivery),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AssistanceDataDelivery,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistanceDataDelivery"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.cellChangeOrderFromUTRAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellChangeOrderFromUTRAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellChangeOrderFromUTRAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.cellUpdateConfirm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellUpdateConfirm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellUpdateConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.counterCheck),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CounterCheck,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"counterCheck"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.downlinkDirectTransfer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DownlinkDirectTransfer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkDirectTransfer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.handoverFromUTRANCommand_GSM),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_HandoverFromUTRANCommand_GSM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverFromUTRANCommand-GSM"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.handoverFromUTRANCommand_CDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_HandoverFromUTRANCommand_CDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverFromUTRANCommand-CDMA2000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.measurementControl),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasurementControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.pagingType2),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.physicalChannelReconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PhysicalChannelReconfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalChannelReconfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.physicalSharedChannelAllocation),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PhysicalSharedChannelAllocation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalSharedChannelAllocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.radioBearerReconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RadioBearerReconfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerReconfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.radioBearerRelease),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RadioBearerRelease,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerRelease"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.radioBearerSetup),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RadioBearerSetup,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerSetup"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.rrcConnectionRelease),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRCConnectionRelease,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionRelease"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.securityModeCommand),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SecurityModeCommand,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeCommand"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.signallingConnectionRelease),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SignallingConnectionRelease,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signallingConnectionRelease"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.transportChannelReconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportChannelReconfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportChannelReconfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.transportFormatCombinationControl),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportFormatCombinationControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportFormatCombinationControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.ueCapabilityEnquiry),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UECapabilityEnquiry,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueCapabilityEnquiry"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.ueCapabilityInformationConfirm),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UECapabilityInformationConfirm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueCapabilityInformationConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.uplinkPhysicalChannelControl),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UplinkPhysicalChannelControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPhysicalChannelControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.uraUpdateConfirm),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_URAUpdateConfirm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uraUpdateConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.utranMobilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UTRANMobilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utranMobilityInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.handoverFromUTRANCommand_GERANIu),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverFromUTRANCommand_GERANIu,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverFromUTRANCommand-GERANIu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.mbmsModifiedServicesInformation),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSModifiedServicesInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsModifiedServicesInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.etwsPrimaryNotificationWithSecurity),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ETWSPrimaryNotificationWithSecurity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"etwsPrimaryNotificationWithSecurity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.handoverFromUTRANCommand_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverFromUTRANCommand_EUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverFromUTRANCommand-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.ueInformationRequest),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueInformationRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.loggingMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingMeasurementConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_DCCH_MessageType, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DL_DCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activeSetUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* assistanceDataDelivery */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellChangeOrderFromUTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellUpdateConfirm */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* counterCheck */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* downlinkDirectTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* handoverFromUTRANCommand-GSM */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* handoverFromUTRANCommand-CDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measurementControl */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pagingType2 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* physicalChannelReconfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* physicalSharedChannelAllocation */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* radioBearerReconfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* radioBearerRelease */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* radioBearerSetup */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* rrcConnectionRelease */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* securityModeCommand */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* signallingConnectionRelease */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* transportChannelReconfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* transportFormatCombinationControl */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* ueCapabilityEnquiry */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* ueCapabilityInformationConfirm */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* uplinkPhysicalChannelControl */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* uraUpdateConfirm */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* utranMobilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* handoverFromUTRANCommand-GERANIu */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* mbmsModifiedServicesInformation */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* etwsPrimaryNotificationWithSecurity */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* handoverFromUTRANCommand-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* ueInformationRequest */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* loggingMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 } /* spare1 */
};
asn_CHOICE_specifics_t asn_SPC_DL_DCCH_MessageType_specs_1 = {
	sizeof(struct DL_DCCH_MessageType),
	offsetof(struct DL_DCCH_MessageType, _asn_ctx),
	offsetof(struct DL_DCCH_MessageType, present),
	sizeof(((struct DL_DCCH_MessageType *)0)->present),
	asn_MAP_DL_DCCH_MessageType_tag2el_1,
	32,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DL_DCCH_MessageType = {
	"DL-DCCH-MessageType",
	"DL-DCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_DL_DCCH_MessageType_constr_1, &asn_PER_type_DL_DCCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_DL_DCCH_MessageType_1,
	32,	/* Elements count */
	&asn_SPC_DL_DCCH_MessageType_specs_1	/* Additional specs */
};

