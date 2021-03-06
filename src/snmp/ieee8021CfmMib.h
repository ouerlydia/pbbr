/*****************************************************************************

 @(#) src/snmp/ieee8021cfmmib.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_IEEE8021CFMMIB_H__
#define __LOCAL_IEEE8021CFMMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct ieee8021CfmMib_data {
	struct ieee8021CfmMib_data *ieee8021CfmMib_old;
	uint ieee8021CfmMib_rsvs;
	uint ieee8021CfmMib_tsts;
	uint ieee8021CfmMib_sets;
	uint ieee8021CfmMib_request;
	long dot1agCfmDefaultMdDefLevel;	/* ReadWrite */
	long dot1agCfmDefaultMdDefMhfCreation;	/* ReadWrite */
	long dot1agCfmDefaultMdDefIdPermission;	/* ReadWrite */
	ulong dot1agCfmMdTableNextIndex;	/* ReadOnly */
};
struct dot1agCfmStackTable_data {
	struct dot1agCfmStackTable_data *dot1agCfmStackTable_old;
	uint dot1agCfmStackTable_rsvs;
	uint dot1agCfmStackTable_tsts;
	uint dot1agCfmStackTable_sets;
	uint dot1agCfmStackTable_request;
	uint dot1agCfmStackTable_refs;
	uint dot1agCfmStackTable_id;
	long dot1agCfmStackifIndex;	/* NoAccess */
	long dot1agCfmStackVlanIdOrNone;	/* NoAccess */
	long dot1agCfmStackMdLevel;	/* NoAccess */
	long dot1agCfmStackDirection;	/* NoAccess */
	ulong dot1agCfmStackMdIndex;	/* ReadOnly */
	ulong dot1agCfmStackMaIndex;	/* ReadOnly */
	ulong dot1agCfmStackMepId;	/* ReadOnly */
	uint8_t *dot1agCfmStackMacAddress;	/* ReadOnly */
	size_t dot1agCfmStackMacAddressLen;
};
struct dot1agCfmDefaultMdTable_data {
	struct dot1agCfmDefaultMdTable_data *dot1agCfmDefaultMdTable_old;
	uint dot1agCfmDefaultMdTable_rsvs;
	uint dot1agCfmDefaultMdTable_tsts;
	uint dot1agCfmDefaultMdTable_sets;
	uint dot1agCfmDefaultMdTable_request;
	uint dot1agCfmDefaultMdTable_refs;
	uint dot1agCfmDefaultMdTable_id;
	ulong dot1agCfmDefaultMdComponentId;	/* NoAccess */
	long dot1agCfmDefaultMdPrimaryVid;	/* NoAccess */
	long dot1agCfmDefaultMdStatus;	/* ReadOnly */
	long dot1agCfmDefaultMdLevel;	/* ReadWrite */
	long dot1agCfmDefaultMdMhfCreation;	/* ReadWrite */
	long dot1agCfmDefaultMdIdPermission;	/* ReadWrite */
};
struct dot1agCfmVlanTable_data {
	struct dot1agCfmVlanTable_data *dot1agCfmVlanTable_old;
	uint dot1agCfmVlanTable_rsvs;
	uint dot1agCfmVlanTable_tsts;
	uint dot1agCfmVlanTable_sets;
	uint dot1agCfmVlanTable_request;
	uint dot1agCfmVlanTable_refs;
	uint dot1agCfmVlanTable_id;
	ulong dot1agCfmVlanComponentId;	/* NoAccess */
	long dot1agCfmVlanVid;		/* NoAccess */
	long dot1agCfmVlanPrimaryVid;	/* Create */
	long dot1agCfmVlanRowStatus;	/* Create */
};
struct dot1agCfmConfigErrorListTable_data {
	struct dot1agCfmConfigErrorListTable_data *dot1agCfmConfigErrorListTable_old;
	uint dot1agCfmConfigErrorListTable_rsvs;
	uint dot1agCfmConfigErrorListTable_tsts;
	uint dot1agCfmConfigErrorListTable_sets;
	uint dot1agCfmConfigErrorListTable_request;
	uint dot1agCfmConfigErrorListTable_refs;
	uint dot1agCfmConfigErrorListTable_id;
	long dot1agCfmConfigErrorListVid;	/* NoAccess */
	long dot1agCfmConfigErrorListIfIndex;	/* NoAccess */
	uint8_t *dot1agCfmConfigErrorListErrorType;	/* ReadOnly */
	size_t dot1agCfmConfigErrorListErrorTypeLen;
};
struct dot1agCfmMdTable_data {
	struct dot1agCfmMdTable_data *dot1agCfmMdTable_old;
	uint dot1agCfmMdTable_rsvs;
	uint dot1agCfmMdTable_tsts;
	uint dot1agCfmMdTable_sets;
	uint dot1agCfmMdTable_request;
	uint dot1agCfmMdTable_refs;
	uint dot1agCfmMdTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	long dot1agCfmMdFormat;		/* Create */
	uint8_t *dot1agCfmMdName;	/* Create */
	size_t dot1agCfmMdNameLen;
	long dot1agCfmMdMdLevel;	/* Create */
	long dot1agCfmMdMhfCreation;	/* Create */
	long dot1agCfmMdMhfIdPermission;	/* Create */
	ulong dot1agCfmMdMaNextIndex;	/* ReadOnly */
	long dot1agCfmMdRowStatus;	/* Create */
};
struct dot1agCfmMaNetTable_data {
	struct dot1agCfmMaNetTable_data *dot1agCfmMaNetTable_old;
	uint dot1agCfmMaNetTable_rsvs;
	uint dot1agCfmMaNetTable_tsts;
	uint dot1agCfmMaNetTable_sets;
	uint dot1agCfmMaNetTable_request;
	uint dot1agCfmMaNetTable_refs;
	uint dot1agCfmMaNetTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	long dot1agCfmMaNetFormat;	/* Create */
	uint8_t *dot1agCfmMaNetName;	/* Create */
	size_t dot1agCfmMaNetNameLen;
	long dot1agCfmMaNetCcmInterval;	/* Create */
	long dot1agCfmMaNetRowStatus;	/* Create */
};
struct dot1agCfmMaCompTable_data {
	struct dot1agCfmMaCompTable_data *dot1agCfmMaCompTable_old;
	uint dot1agCfmMaCompTable_rsvs;
	uint dot1agCfmMaCompTable_tsts;
	uint dot1agCfmMaCompTable_sets;
	uint dot1agCfmMaCompTable_request;
	uint dot1agCfmMaCompTable_refs;
	uint dot1agCfmMaCompTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	ulong dot1agCfmMaComponentId;	/* NoAccess */
	long dot1agCfmMaCompPrimaryVlanId;	/* Create */
	long dot1agCfmMaCompMhfCreation;	/* Create */
	long dot1agCfmMaCompIdPermission;	/* Create */
	ulong dot1agCfmMaCompNumberOfVids;	/* Create */
	long dot1agCfmMaCompRowStatus;	/* Create */
};
struct dot1agCfmMaMepListTable_data {
	struct dot1agCfmMaMepListTable_data *dot1agCfmMaMepListTable_old;
	uint dot1agCfmMaMepListTable_rsvs;
	uint dot1agCfmMaMepListTable_tsts;
	uint dot1agCfmMaMepListTable_sets;
	uint dot1agCfmMaMepListTable_request;
	uint dot1agCfmMaMepListTable_refs;
	uint dot1agCfmMaMepListTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	ulong dot1agCfmMaMepListIdentifier;	/* NoAccess */
	long dot1agCfmMaMepListRowStatus;	/* Create */
};
struct dot1agCfmMepTable_data {
	struct dot1agCfmMepTable_data *dot1agCfmMepTable_old;
	uint dot1agCfmMepTable_rsvs;
	uint dot1agCfmMepTable_tsts;
	uint dot1agCfmMepTable_sets;
	uint dot1agCfmMepTable_request;
	uint dot1agCfmMepTable_refs;
	uint dot1agCfmMepTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	ulong dot1agCfmMepIdentifier;	/* NoAccess */
	long dot1agCfmMepIfIndex;	/* Create */
	long dot1agCfmMepDirection;	/* Create */
	ulong dot1agCfmMepPrimaryVid;	/* Create */
	long dot1agCfmMepActive;	/* Create */
	long dot1agCfmMepFngState;	/* ReadOnly */
	long dot1agCfmMepCciEnabled;	/* Create */
	ulong dot1agCfmMepCcmLtmPriority;	/* Create */
	uint8_t *dot1agCfmMepMacAddress;	/* ReadOnly */
	size_t dot1agCfmMepMacAddressLen;
	long dot1agCfmMepLowPrDef;	/* Create */
	long dot1agCfmMepFngAlarmTime;	/* Create */
	long dot1agCfmMepFngResetTime;	/* Create */
	long dot1agCfmMepHighestPrDefect;	/* ReadOnly */
	uint8_t *dot1agCfmMepDefects;	/* ReadOnly */
	size_t dot1agCfmMepDefectsLen;
	uint8_t *dot1agCfmMepErrorCcmLastFailure;	/* ReadOnly */
	size_t dot1agCfmMepErrorCcmLastFailureLen;
	uint8_t *dot1agCfmMepXconCcmLastFailure;	/* ReadOnly */
	size_t dot1agCfmMepXconCcmLastFailureLen;
	long dot1agCfmMepCcmSequenceErrors;	/* ReadOnly */
	long dot1agCfmMepCciSentCcms;	/* ReadOnly */
	ulong dot1agCfmMepNextLbmTransId;	/* ReadOnly */
	long dot1agCfmMepLbrIn;		/* ReadOnly */
	long dot1agCfmMepLbrInOutOfOrder;	/* ReadOnly */
	long dot1agCfmMepLbrBadMsdu;	/* ReadOnly */
	ulong dot1agCfmMepLtmNextSeqNumber;	/* ReadOnly */
	long dot1agCfmMepUnexpLtrIn;	/* ReadOnly */
	long dot1agCfmMepLbrOut;	/* ReadOnly */
	long dot1agCfmMepTransmitLbmStatus;	/* Create */
	uint8_t *dot1agCfmMepTransmitLbmDestMacAddress;	/* Create */
	size_t dot1agCfmMepTransmitLbmDestMacAddressLen;
	ulong dot1agCfmMepTransmitLbmDestMepId;	/* Create */
	long dot1agCfmMepTransmitLbmDestIsMepId;	/* Create */
	long dot1agCfmMepTransmitLbmMessages;	/* Create */
	uint8_t *dot1agCfmMepTransmitLbmDataTlv;	/* Create */
	size_t dot1agCfmMepTransmitLbmDataTlvLen;
	long dot1agCfmMepTransmitLbmVlanPriority;	/* Create */
	long dot1agCfmMepTransmitLbmVlanDropEnable;	/* Create */
	long dot1agCfmMepTransmitLbmResultOK;	/* ReadOnly */
	ulong dot1agCfmMepTransmitLbmSeqNumber;	/* ReadOnly */
	long dot1agCfmMepTransmitLtmStatus;	/* Create */
	uint8_t *dot1agCfmMepTransmitLtmFlags;	/* Create */
	size_t dot1agCfmMepTransmitLtmFlagsLen;
	uint8_t *dot1agCfmMepTransmitLtmTargetMacAddress;	/* Create */
	size_t dot1agCfmMepTransmitLtmTargetMacAddressLen;
	ulong dot1agCfmMepTransmitLtmTargetMepId;	/* Create */
	long dot1agCfmMepTransmitLtmTargetIsMepId;	/* Create */
	ulong dot1agCfmMepTransmitLtmTtl;	/* Create */
	long dot1agCfmMepTransmitLtmResult;	/* ReadOnly */
	ulong dot1agCfmMepTransmitLtmSeqNumber;	/* ReadOnly */
	uint8_t *dot1agCfmMepTransmitLtmEgressIdentifier;	/* Create */
	size_t dot1agCfmMepTransmitLtmEgressIdentifierLen;
	long dot1agCfmMepRowStatus;	/* Create */
	long dot1agCfmMepPbbTeCanReportPbbTePresence;	/* Create */
	long dot1agCfmMepPbbTeTrafficMismatchDefect;	/* ReadOnly */
	ulong dot1agCfmMepPbbTransmitLbmLtmReverseVid;	/* Create */
	long dot1agCfmMepPbbTeMismatchAlarm;	/* Create */
	long dot1agCfmMepPbbTeLocalMismatchDefect;	/* ReadOnly */
	long dot1agCfmMepPbbTeMismatchSinceReset;	/* ReadOnly */
};
struct dot1agCfmLtrTable_data {
	struct dot1agCfmLtrTable_data *dot1agCfmLtrTable_old;
	uint dot1agCfmLtrTable_rsvs;
	uint dot1agCfmLtrTable_tsts;
	uint dot1agCfmLtrTable_sets;
	uint dot1agCfmLtrTable_request;
	uint dot1agCfmLtrTable_refs;
	uint dot1agCfmLtrTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	ulong dot1agCfmMepIdentifier;	/* NoAccess */
	ulong dot1agCfmLtrSeqNumber;	/* NoAccess */
	ulong dot1agCfmLtrReceiveOrder;	/* NoAccess */
	ulong dot1agCfmLtrTtl;		/* ReadOnly */
	long dot1agCfmLtrForwarded;	/* ReadOnly */
	long dot1agCfmLtrTerminalMep;	/* ReadOnly */
	uint8_t *dot1agCfmLtrLastEgressIdentifier;	/* ReadOnly */
	size_t dot1agCfmLtrLastEgressIdentifierLen;
	uint8_t *dot1agCfmLtrNextEgressIdentifier;	/* ReadOnly */
	size_t dot1agCfmLtrNextEgressIdentifierLen;
	long dot1agCfmLtrRelay;		/* ReadOnly */
	long dot1agCfmLtrChassisIdSubtype;	/* ReadOnly */
	uint8_t *dot1agCfmLtrChassisId;	/* ReadOnly */
	size_t dot1agCfmLtrChassisIdLen;
	oid *dot1agCfmLtrManAddressDomain;	/* ReadOnly */
	size_t dot1agCfmLtrManAddressDomainLen;
	uint8_t *dot1agCfmLtrManAddress;	/* ReadOnly */
	size_t dot1agCfmLtrManAddressLen;
	long dot1agCfmLtrIngress;	/* ReadOnly */
	uint8_t *dot1agCfmLtrIngressMac;	/* ReadOnly */
	size_t dot1agCfmLtrIngressMacLen;
	long dot1agCfmLtrIngressPortIdSubtype;	/* ReadOnly */
	uint8_t *dot1agCfmLtrIngressPortId;	/* ReadOnly */
	size_t dot1agCfmLtrIngressPortIdLen;
	long dot1agCfmLtrEgress;	/* ReadOnly */
	uint8_t *dot1agCfmLtrEgressMac;	/* ReadOnly */
	size_t dot1agCfmLtrEgressMacLen;
	long dot1agCfmLtrEgressPortIdSubtype;	/* ReadOnly */
	uint8_t *dot1agCfmLtrEgressPortId;	/* ReadOnly */
	size_t dot1agCfmLtrEgressPortIdLen;
	uint8_t *dot1agCfmLtrOrganizationSpecificTlv;	/* ReadOnly */
	size_t dot1agCfmLtrOrganizationSpecificTlvLen;
};
struct dot1agCfmMepDbTable_data {
	struct dot1agCfmMepDbTable_data *dot1agCfmMepDbTable_old;
	uint dot1agCfmMepDbTable_rsvs;
	uint dot1agCfmMepDbTable_tsts;
	uint dot1agCfmMepDbTable_sets;
	uint dot1agCfmMepDbTable_request;
	uint dot1agCfmMepDbTable_refs;
	uint dot1agCfmMepDbTable_id;
	ulong dot1agCfmMdIndex;		/* NoAccess */
	ulong dot1agCfmMaIndex;		/* NoAccess */
	ulong dot1agCfmMepIdentifier;	/* NoAccess */
	ulong dot1agCfmMepDbRMepIdentifier;	/* NoAccess */
	long dot1agCfmMepDbRMepState;	/* ReadOnly */
	long dot1agCfmMepDbRMepFailedOkTime;	/* ReadOnly */
	uint8_t *dot1agCfmMepDbMacAddress;	/* ReadOnly */
	size_t dot1agCfmMepDbMacAddressLen;
	long dot1agCfmMepDbRdi;		/* ReadOnly */
	long dot1agCfmMepDbPortStatusTlv;	/* ReadOnly */
	long dot1agCfmMepDbInterfaceStatusTlv;	/* ReadOnly */
	long dot1agCfmMepDbChassisIdSubtype;	/* ReadOnly */
	uint8_t *dot1agCfmMepDbChassisId;	/* ReadOnly */
	size_t dot1agCfmMepDbChassisIdLen;
	oid *dot1agCfmMepDbManAddressDomain;	/* ReadOnly */
	size_t dot1agCfmMepDbManAddressDomainLen;
	uint8_t *dot1agCfmMepDbManAddress;	/* ReadOnly */
	size_t dot1agCfmMepDbManAddressLen;
	long dot1agCfmMepDbRMepIsActive;	/* ReadWrite */
};

/* storage declarations */
extern struct ieee8021CfmMib_data *ieee8021CfmMibStorage;
extern struct header_complex_index *dot1agCfmStackTableStorage;
extern struct header_complex_index *dot1agCfmDefaultMdTableStorage;
extern struct header_complex_index *dot1agCfmVlanTableStorage;
extern struct header_complex_index *dot1agCfmConfigErrorListTableStorage;
extern struct header_complex_index *dot1agCfmMdTableStorage;
extern struct header_complex_index *dot1agCfmMaNetTableStorage;
extern struct header_complex_index *dot1agCfmMaCompTableStorage;
extern struct header_complex_index *dot1agCfmMaMepListTableStorage;
extern struct header_complex_index *dot1agCfmMepTableStorage;
extern struct header_complex_index *dot1agCfmLtrTableStorage;
extern struct header_complex_index *dot1agCfmMepDbTableStorage;

/* enum definitions from the covered mib sections */

#define DOT1AGCFMSTACKDIRECTION_DOWN             1
#define DOT1AGCFMSTACKDIRECTION_UP               2

#define DOT1AGCFMDEFAULTMDDEFMHFCREATION_DEFMHFNONE 1
#define DOT1AGCFMDEFAULTMDDEFMHFCREATION_DEFMHFDEFAULT 2
#define DOT1AGCFMDEFAULTMDDEFMHFCREATION_DEFMHFEXPLICIT 3

#define DOT1AGCFMDEFAULTMDDEFIDPERMISSION_SENDIDNONE 1
#define DOT1AGCFMDEFAULTMDDEFIDPERMISSION_SENDIDCHASSIS 2
#define DOT1AGCFMDEFAULTMDDEFIDPERMISSION_SENDIDMANAGE 3
#define DOT1AGCFMDEFAULTMDDEFIDPERMISSION_SENDIDCHASSISMANAGE 4

#define DOT1AGCFMDEFAULTMDSTATUS_TRUE            1
#define DOT1AGCFMDEFAULTMDSTATUS_FALSE           2

#define DOT1AGCFMDEFAULTMDMHFCREATION_DEFMHFNONE 1
#define DOT1AGCFMDEFAULTMDMHFCREATION_DEFMHFDEFAULT 2
#define DOT1AGCFMDEFAULTMDMHFCREATION_DEFMHFEXPLICIT 3
#define DOT1AGCFMDEFAULTMDMHFCREATION_DEFMHFDEFER 4

#define DOT1AGCFMDEFAULTMDIDPERMISSION_SENDIDNONE 1
#define DOT1AGCFMDEFAULTMDIDPERMISSION_SENDIDCHASSIS 2
#define DOT1AGCFMDEFAULTMDIDPERMISSION_SENDIDMANAGE 3
#define DOT1AGCFMDEFAULTMDIDPERMISSION_SENDIDCHASSISMANAGE 4
#define DOT1AGCFMDEFAULTMDIDPERMISSION_SENDIDDEFER 5

#define DOT1AGCFMCONFIGERRORLISTERRORTYPE_CFMLEAK 0
#define DOT1AGCFMCONFIGERRORLISTERRORTYPE_CONFLICTINGVIDS 1
#define DOT1AGCFMCONFIGERRORLISTERRORTYPE_EXCESSIVELEVELS 2
#define DOT1AGCFMCONFIGERRORLISTERRORTYPE_OVERLAPPEDLEVELS 3

#define DOT1AGCFMMDFORMAT_NONE                   1
#define DOT1AGCFMMDFORMAT_DNSLIKENAME            2
#define DOT1AGCFMMDFORMAT_MACADDRESSANDUINT      3
#define DOT1AGCFMMDFORMAT_CHARSTRING             4

#define DOT1AGCFMMDMHFCREATION_DEFMHFNONE        1
#define DOT1AGCFMMDMHFCREATION_DEFMHFDEFAULT     2
#define DOT1AGCFMMDMHFCREATION_DEFMHFEXPLICIT    3

#define DOT1AGCFMMDMHFIDPERMISSION_SENDIDNONE    1
#define DOT1AGCFMMDMHFIDPERMISSION_SENDIDCHASSIS 2
#define DOT1AGCFMMDMHFIDPERMISSION_SENDIDMANAGE  3
#define DOT1AGCFMMDMHFIDPERMISSION_SENDIDCHASSISMANAGE 4

#define DOT1AGCFMMANETFORMAT_PRIMARYVID          1
#define DOT1AGCFMMANETFORMAT_CHARSTRING          2
#define DOT1AGCFMMANETFORMAT_UNSIGNEDINT16       3
#define DOT1AGCFMMANETFORMAT_RFC2865VPNID        4
#define DOT1AGCFMMANETFORMAT_ICCFORMAT           32

#define DOT1AGCFMMANETCCMINTERVAL_INTERVALINVALID 0
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL300HZ  1
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL10MS   2
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL100MS  3
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL1S     4
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL10S    5
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL1MIN   6
#define DOT1AGCFMMANETCCMINTERVAL_INTERVAL10MIN  7

#define DOT1AGCFMMACOMPMHFCREATION_DEFMHFNONE    1
#define DOT1AGCFMMACOMPMHFCREATION_DEFMHFDEFAULT 2
#define DOT1AGCFMMACOMPMHFCREATION_DEFMHFEXPLICIT 3
#define DOT1AGCFMMACOMPMHFCREATION_DEFMHFDEFER   4

#define DOT1AGCFMMACOMPIDPERMISSION_SENDIDNONE   1
#define DOT1AGCFMMACOMPIDPERMISSION_SENDIDCHASSIS 2
#define DOT1AGCFMMACOMPIDPERMISSION_SENDIDMANAGE 3
#define DOT1AGCFMMACOMPIDPERMISSION_SENDIDCHASSISMANAGE 4
#define DOT1AGCFMMACOMPIDPERMISSION_SENDIDDEFER  5

#define DOT1AGCFMMEPDIRECTION_DOWN               1
#define DOT1AGCFMMEPDIRECTION_UP                 2

#define DOT1AGCFMMEPACTIVE_TRUE                  1
#define DOT1AGCFMMEPACTIVE_FALSE                 2

#define DOT1AGCFMMEPFNGSTATE_FNGRESET            1
#define DOT1AGCFMMEPFNGSTATE_FNGDEFECT           2
#define DOT1AGCFMMEPFNGSTATE_FNGREPORTDEFECT     3
#define DOT1AGCFMMEPFNGSTATE_FNGDEFECTREPORTED   4
#define DOT1AGCFMMEPFNGSTATE_FNGDEFECTCLEARING   5

#define DOT1AGCFMMEPCCIENABLED_TRUE              1
#define DOT1AGCFMMEPCCIENABLED_FALSE             2

#define DOT1AGCFMMEPLOWPRDEF_ALLDEF              1
#define DOT1AGCFMMEPLOWPRDEF_MACREMERRXCON       2
#define DOT1AGCFMMEPLOWPRDEF_REMERRXCON          3
#define DOT1AGCFMMEPLOWPRDEF_ERRXCON             4
#define DOT1AGCFMMEPLOWPRDEF_XCON                5
#define DOT1AGCFMMEPLOWPRDEF_NOXCON              6

#define DOT1AGCFMMEPHIGHESTPRDEFECT_NONE         0
#define DOT1AGCFMMEPHIGHESTPRDEFECT_DEFRDICCM    1
#define DOT1AGCFMMEPHIGHESTPRDEFECT_DEFMACSTATUS 2
#define DOT1AGCFMMEPHIGHESTPRDEFECT_DEFREMOTECCM 3
#define DOT1AGCFMMEPHIGHESTPRDEFECT_DEFERRORCCM  4
#define DOT1AGCFMMEPHIGHESTPRDEFECT_DEFXCONCCM   5

#define DOT1AGCFMMEPDEFECTS_BDEFRDICCM           0
#define DOT1AGCFMMEPDEFECTS_BDEFMACSTATUS        1
#define DOT1AGCFMMEPDEFECTS_BDEFREMOTECCM        2
#define DOT1AGCFMMEPDEFECTS_BDEFERRORCCM         3
#define DOT1AGCFMMEPDEFECTS_BDEFXCONCCM          4

#define DOT1AGCFMMEPTRANSMITLBMSTATUS_TRUE       1
#define DOT1AGCFMMEPTRANSMITLBMSTATUS_FALSE      2

#define DOT1AGCFMMEPTRANSMITLBMDESTISMEPID_TRUE  1
#define DOT1AGCFMMEPTRANSMITLBMDESTISMEPID_FALSE 2

#define DOT1AGCFMMEPTRANSMITLBMVLANDROPENABLE_TRUE 1
#define DOT1AGCFMMEPTRANSMITLBMVLANDROPENABLE_FALSE 2

#define DOT1AGCFMMEPTRANSMITLBMRESULTOK_TRUE     1
#define DOT1AGCFMMEPTRANSMITLBMRESULTOK_FALSE    2

#define DOT1AGCFMMEPTRANSMITLTMSTATUS_TRUE       1
#define DOT1AGCFMMEPTRANSMITLTMSTATUS_FALSE      2

#define DOT1AGCFMMEPTRANSMITLTMFLAGS_USEFDBONLY  0

#define DOT1AGCFMMEPTRANSMITLTMTARGETISMEPID_TRUE 1
#define DOT1AGCFMMEPTRANSMITLTMTARGETISMEPID_FALSE 2

#define DOT1AGCFMMEPTRANSMITLTMRESULT_TRUE       1
#define DOT1AGCFMMEPTRANSMITLTMRESULT_FALSE      2

#define DOT1AGCFMMEPPBBTECANREPORTPBBTEPRESENCE_TRUE 1
#define DOT1AGCFMMEPPBBTECANREPORTPBBTEPRESENCE_FALSE 2

#define DOT1AGCFMMEPPBBTETRAFFICMISMATCHDEFECT_TRUE 1
#define DOT1AGCFMMEPPBBTETRAFFICMISMATCHDEFECT_FALSE 2

#define DOT1AGCFMMEPPBBTEMISMATCHALARM_TRUE      1
#define DOT1AGCFMMEPPBBTEMISMATCHALARM_FALSE     2

#define DOT1AGCFMMEPPBBTELOCALMISMATCHDEFECT_TRUE 1
#define DOT1AGCFMMEPPBBTELOCALMISMATCHDEFECT_FALSE 2

#define DOT1AGCFMMEPPBBTEMISMATCHSINCERESET_TRUE 1
#define DOT1AGCFMMEPPBBTEMISMATCHSINCERESET_FALSE 2

#define DOT1AGCFMLTRFORWARDED_TRUE               1
#define DOT1AGCFMLTRFORWARDED_FALSE              2

#define DOT1AGCFMLTRTERMINALMEP_TRUE             1
#define DOT1AGCFMLTRTERMINALMEP_FALSE            2

#define DOT1AGCFMLTRRELAY_RLYHIT                 1
#define DOT1AGCFMLTRRELAY_RLYFDB                 2
#define DOT1AGCFMLTRRELAY_RLYMPDB                3

#define DOT1AGCFMLTRCHASSISIDSUBTYPE_CHASSISCOMPONENT 1
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_INTERFACEALIAS 2
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_PORTCOMPONENT 3
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_MACADDRESS  4
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_NETWORKADDRESS 5
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_INTERFACENAME 6
#define DOT1AGCFMLTRCHASSISIDSUBTYPE_LOCAL       7

#define DOT1AGCFMLTRINGRESS_INGNOTLV             0
#define DOT1AGCFMLTRINGRESS_INGOK                1
#define DOT1AGCFMLTRINGRESS_INGDOWN              2
#define DOT1AGCFMLTRINGRESS_INGBLOCKED           3
#define DOT1AGCFMLTRINGRESS_INGVID               4

#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_INTERFACEALIAS 1
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_PORTCOMPONENT 2
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_MACADDRESS 3
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_NETWORKADDRESS 4
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_INTERFACENAME 5
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_AGENTCIRCUITID 6
#define DOT1AGCFMLTRINGRESSPORTIDSUBTYPE_LOCAL   7

#define DOT1AGCFMLTREGRESS_EGRNOTLV              0
#define DOT1AGCFMLTREGRESS_EGROK                 1
#define DOT1AGCFMLTREGRESS_EGRDOWN               2
#define DOT1AGCFMLTREGRESS_EGRBLOCKED            3
#define DOT1AGCFMLTREGRESS_EGRVID                4

#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_INTERFACEALIAS 1
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_PORTCOMPONENT 2
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_MACADDRESS 3
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_NETWORKADDRESS 4
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_INTERFACENAME 5
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_AGENTCIRCUITID 6
#define DOT1AGCFMLTREGRESSPORTIDSUBTYPE_LOCAL    7

#define DOT1AGCFMMEPDBRMEPSTATE_RMEPIDLE         1
#define DOT1AGCFMMEPDBRMEPSTATE_RMEPSTART        2
#define DOT1AGCFMMEPDBRMEPSTATE_RMEPFAILED       3
#define DOT1AGCFMMEPDBRMEPSTATE_RMEPOK           4

#define DOT1AGCFMMEPDBRDI_TRUE                   1
#define DOT1AGCFMMEPDBRDI_FALSE                  2

#define DOT1AGCFMMEPDBPORTSTATUSTLV_PSNOPORTSTATETLV 0
#define DOT1AGCFMMEPDBPORTSTATUSTLV_PSBLOCKED    1
#define DOT1AGCFMMEPDBPORTSTATUSTLV_PSUP         2

#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISNOINTERFACESTATUSTLV 0
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISUP    1
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISDOWN  2
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISTESTING 3
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISUNKNOWN 4
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISDORMANT 5
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISNOTPRESENT 6
#define DOT1AGCFMMEPDBINTERFACESTATUSTLV_ISLOWERLAYERDOWN 7

#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_CHASSISCOMPONENT 1
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_INTERFACEALIAS 2
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_PORTCOMPONENT 3
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_MACADDRESS 4
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_NETWORKADDRESS 5
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_INTERFACENAME 6
#define DOT1AGCFMMEPDBCHASSISIDSUBTYPE_LOCAL     7

#define DOT1AGCFMMEPDBRMEPISACTIVE_TRUE          1
#define DOT1AGCFMMEPDBRMEPISACTIVE_FALSE         2

/* notifications */
extern oid dot1agCfmFaultAlarm_oid[10];

/* scalars accessible only for notify */

/* object id definitions */
extern oid dot1agCfmCompliance_oid[11];
extern oid dot1agCfmStackGroup_oid[11];
extern oid dot1agCfmDefaultMdGroup_oid[11];
extern oid dot1agCfmVlanIdGroup_oid[11];
extern oid dot1agCfmConfigErrorListGroup_oid[11];
extern oid dot1agCfmMdGroup_oid[11];
extern oid dot1agCfmMaGroup_oid[11];
extern oid dot1agCfmMepGroup_oid[11];
extern oid dot1agCfmMepDbGroup_oid[11];
extern oid dot1agCfmNotificationsGroup_oid[11];
extern oid ieee8021CfmMaNetGroup_oid[11];
extern oid ieee8021CfmDefaultMdDefGroup_oid[11];
extern oid ieee8021CfmPbbTeExtensionGroup_oid[11];
extern oid ieee8021CfmPbbTeTrafficBitGroup_oid[11];

/* function prototypes */
/* trap function prototypes */
extern void send_dot1agCfmFaultAlarm_v2trap(struct variable_list *);

/* variable function prototypes */
void init_ieee8021CfmMib(void);
void deinit_ieee8021CfmMib(void);
int term_ieee8021CfmMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021CfmMib;
struct ieee8021CfmMib_data *ieee8021CfmMib_create(void);
struct ieee8021CfmMib_data *ieee8021CfmMib_duplicate(struct ieee8021CfmMib_data *);
int ieee8021CfmMib_destroy(struct ieee8021CfmMib_data **);
int ieee8021CfmMib_add(struct ieee8021CfmMib_data *);
void parse_ieee8021CfmMib(const char *, char *);
SNMPCallback store_ieee8021CfmMib;
void refresh_ieee8021CfmMib(int);
FindVarMethod var_dot1agCfmStackTable;
struct dot1agCfmStackTable_data *dot1agCfmStackTable_create(void);
struct dot1agCfmStackTable_data *dot1agCfmStackTable_duplicate(struct dot1agCfmStackTable_data *);
int dot1agCfmStackTable_destroy(struct dot1agCfmStackTable_data **);
int dot1agCfmStackTable_add(struct dot1agCfmStackTable_data *);
int dot1agCfmStackTable_del(struct dot1agCfmStackTable_data *);
void parse_dot1agCfmStackTable(const char *, char *);
SNMPCallback store_dot1agCfmStackTable;
void refresh_dot1agCfmStackTable(int);
FindVarMethod var_dot1agCfmDefaultMdTable;
struct dot1agCfmDefaultMdTable_data *dot1agCfmDefaultMdTable_create(void);
struct dot1agCfmDefaultMdTable_data *dot1agCfmDefaultMdTable_duplicate(struct dot1agCfmDefaultMdTable_data *);
int dot1agCfmDefaultMdTable_destroy(struct dot1agCfmDefaultMdTable_data **);
int dot1agCfmDefaultMdTable_add(struct dot1agCfmDefaultMdTable_data *);
int dot1agCfmDefaultMdTable_del(struct dot1agCfmDefaultMdTable_data *);
void parse_dot1agCfmDefaultMdTable(const char *, char *);
SNMPCallback store_dot1agCfmDefaultMdTable;
void refresh_dot1agCfmDefaultMdTable(int);
FindVarMethod var_dot1agCfmVlanTable;
struct dot1agCfmVlanTable_data *dot1agCfmVlanTable_create(void);
struct dot1agCfmVlanTable_data *dot1agCfmVlanTable_duplicate(struct dot1agCfmVlanTable_data *);
int dot1agCfmVlanTable_destroy(struct dot1agCfmVlanTable_data **);
int dot1agCfmVlanTable_add(struct dot1agCfmVlanTable_data *);
int dot1agCfmVlanTable_del(struct dot1agCfmVlanTable_data *);
void parse_dot1agCfmVlanTable(const char *, char *);
SNMPCallback store_dot1agCfmVlanTable;
void refresh_dot1agCfmVlanTable(int);
FindVarMethod var_dot1agCfmConfigErrorListTable;
struct dot1agCfmConfigErrorListTable_data *dot1agCfmConfigErrorListTable_create(void);
struct dot1agCfmConfigErrorListTable_data *dot1agCfmConfigErrorListTable_duplicate(struct dot1agCfmConfigErrorListTable_data *);
int dot1agCfmConfigErrorListTable_destroy(struct dot1agCfmConfigErrorListTable_data **);
int dot1agCfmConfigErrorListTable_add(struct dot1agCfmConfigErrorListTable_data *);
int dot1agCfmConfigErrorListTable_del(struct dot1agCfmConfigErrorListTable_data *);
void parse_dot1agCfmConfigErrorListTable(const char *, char *);
SNMPCallback store_dot1agCfmConfigErrorListTable;
void refresh_dot1agCfmConfigErrorListTable(int);
FindVarMethod var_dot1agCfmMdTable;
struct dot1agCfmMdTable_data *dot1agCfmMdTable_create(void);
struct dot1agCfmMdTable_data *dot1agCfmMdTable_duplicate(struct dot1agCfmMdTable_data *);
int dot1agCfmMdTable_destroy(struct dot1agCfmMdTable_data **);
int dot1agCfmMdTable_add(struct dot1agCfmMdTable_data *);
int dot1agCfmMdTable_del(struct dot1agCfmMdTable_data *);
void parse_dot1agCfmMdTable(const char *, char *);
SNMPCallback store_dot1agCfmMdTable;
void refresh_dot1agCfmMdTable(int);
FindVarMethod var_dot1agCfmMaNetTable;
struct dot1agCfmMaNetTable_data *dot1agCfmMaNetTable_create(void);
struct dot1agCfmMaNetTable_data *dot1agCfmMaNetTable_duplicate(struct dot1agCfmMaNetTable_data *);
int dot1agCfmMaNetTable_destroy(struct dot1agCfmMaNetTable_data **);
int dot1agCfmMaNetTable_add(struct dot1agCfmMaNetTable_data *);
int dot1agCfmMaNetTable_del(struct dot1agCfmMaNetTable_data *);
void parse_dot1agCfmMaNetTable(const char *, char *);
SNMPCallback store_dot1agCfmMaNetTable;
void refresh_dot1agCfmMaNetTable(int);
FindVarMethod var_dot1agCfmMaCompTable;
struct dot1agCfmMaCompTable_data *dot1agCfmMaCompTable_create(void);
struct dot1agCfmMaCompTable_data *dot1agCfmMaCompTable_duplicate(struct dot1agCfmMaCompTable_data *);
int dot1agCfmMaCompTable_destroy(struct dot1agCfmMaCompTable_data **);
int dot1agCfmMaCompTable_add(struct dot1agCfmMaCompTable_data *);
int dot1agCfmMaCompTable_del(struct dot1agCfmMaCompTable_data *);
void parse_dot1agCfmMaCompTable(const char *, char *);
SNMPCallback store_dot1agCfmMaCompTable;
void refresh_dot1agCfmMaCompTable(int);
FindVarMethod var_dot1agCfmMaMepListTable;
struct dot1agCfmMaMepListTable_data *dot1agCfmMaMepListTable_create(void);
struct dot1agCfmMaMepListTable_data *dot1agCfmMaMepListTable_duplicate(struct dot1agCfmMaMepListTable_data *);
int dot1agCfmMaMepListTable_destroy(struct dot1agCfmMaMepListTable_data **);
int dot1agCfmMaMepListTable_add(struct dot1agCfmMaMepListTable_data *);
int dot1agCfmMaMepListTable_del(struct dot1agCfmMaMepListTable_data *);
void parse_dot1agCfmMaMepListTable(const char *, char *);
SNMPCallback store_dot1agCfmMaMepListTable;
void refresh_dot1agCfmMaMepListTable(int);
FindVarMethod var_dot1agCfmMepTable;
struct dot1agCfmMepTable_data *dot1agCfmMepTable_create(void);
struct dot1agCfmMepTable_data *dot1agCfmMepTable_duplicate(struct dot1agCfmMepTable_data *);
int dot1agCfmMepTable_destroy(struct dot1agCfmMepTable_data **);
int dot1agCfmMepTable_add(struct dot1agCfmMepTable_data *);
int dot1agCfmMepTable_del(struct dot1agCfmMepTable_data *);
void parse_dot1agCfmMepTable(const char *, char *);
SNMPCallback store_dot1agCfmMepTable;
void refresh_dot1agCfmMepTable(int);
FindVarMethod var_dot1agCfmLtrTable;
struct dot1agCfmLtrTable_data *dot1agCfmLtrTable_create(void);
struct dot1agCfmLtrTable_data *dot1agCfmLtrTable_duplicate(struct dot1agCfmLtrTable_data *);
int dot1agCfmLtrTable_destroy(struct dot1agCfmLtrTable_data **);
int dot1agCfmLtrTable_add(struct dot1agCfmLtrTable_data *);
int dot1agCfmLtrTable_del(struct dot1agCfmLtrTable_data *);
void parse_dot1agCfmLtrTable(const char *, char *);
SNMPCallback store_dot1agCfmLtrTable;
void refresh_dot1agCfmLtrTable(int);
FindVarMethod var_dot1agCfmMepDbTable;
struct dot1agCfmMepDbTable_data *dot1agCfmMepDbTable_create(void);
struct dot1agCfmMepDbTable_data *dot1agCfmMepDbTable_duplicate(struct dot1agCfmMepDbTable_data *);
int dot1agCfmMepDbTable_destroy(struct dot1agCfmMepDbTable_data **);
int dot1agCfmMepDbTable_add(struct dot1agCfmMepDbTable_data *);
int dot1agCfmMepDbTable_del(struct dot1agCfmMepDbTable_data *);
void parse_dot1agCfmMepDbTable(const char *, char *);
SNMPCallback store_dot1agCfmMepDbTable;
void refresh_dot1agCfmMepDbTable(int);

WriteMethod write_dot1agCfmDefaultMdDefLevel;
WriteMethod write_dot1agCfmDefaultMdDefMhfCreation;
WriteMethod write_dot1agCfmDefaultMdDefIdPermission;
WriteMethod write_dot1agCfmDefaultMdLevel;
WriteMethod write_dot1agCfmDefaultMdMhfCreation;
WriteMethod write_dot1agCfmDefaultMdIdPermission;
WriteMethod write_dot1agCfmVlanPrimaryVid;
WriteMethod write_dot1agCfmVlanRowStatus;
WriteMethod write_dot1agCfmMdFormat;
WriteMethod write_dot1agCfmMdName;
WriteMethod write_dot1agCfmMdMdLevel;
WriteMethod write_dot1agCfmMdMhfCreation;
WriteMethod write_dot1agCfmMdMhfIdPermission;
WriteMethod write_dot1agCfmMdRowStatus;
WriteMethod write_dot1agCfmMaNetFormat;
WriteMethod write_dot1agCfmMaNetName;
WriteMethod write_dot1agCfmMaNetCcmInterval;
WriteMethod write_dot1agCfmMaNetRowStatus;
WriteMethod write_dot1agCfmMaCompPrimaryVlanId;
WriteMethod write_dot1agCfmMaCompMhfCreation;
WriteMethod write_dot1agCfmMaCompIdPermission;
WriteMethod write_dot1agCfmMaCompNumberOfVids;
WriteMethod write_dot1agCfmMaCompRowStatus;
WriteMethod write_dot1agCfmMaMepListRowStatus;
WriteMethod write_dot1agCfmMepIfIndex;
WriteMethod write_dot1agCfmMepDirection;
WriteMethod write_dot1agCfmMepPrimaryVid;
WriteMethod write_dot1agCfmMepActive;
WriteMethod write_dot1agCfmMepCciEnabled;
WriteMethod write_dot1agCfmMepCcmLtmPriority;
WriteMethod write_dot1agCfmMepLowPrDef;
WriteMethod write_dot1agCfmMepFngAlarmTime;
WriteMethod write_dot1agCfmMepFngResetTime;
WriteMethod write_dot1agCfmMepTransmitLbmStatus;
WriteMethod write_dot1agCfmMepTransmitLbmDestMacAddress;
WriteMethod write_dot1agCfmMepTransmitLbmDestMepId;
WriteMethod write_dot1agCfmMepTransmitLbmDestIsMepId;
WriteMethod write_dot1agCfmMepTransmitLbmMessages;
WriteMethod write_dot1agCfmMepTransmitLbmDataTlv;
WriteMethod write_dot1agCfmMepTransmitLbmVlanPriority;
WriteMethod write_dot1agCfmMepTransmitLbmVlanDropEnable;
WriteMethod write_dot1agCfmMepTransmitLtmStatus;
WriteMethod write_dot1agCfmMepTransmitLtmFlags;
WriteMethod write_dot1agCfmMepTransmitLtmTargetMacAddress;
WriteMethod write_dot1agCfmMepTransmitLtmTargetMepId;
WriteMethod write_dot1agCfmMepTransmitLtmTargetIsMepId;
WriteMethod write_dot1agCfmMepTransmitLtmTtl;
WriteMethod write_dot1agCfmMepTransmitLtmEgressIdentifier;
WriteMethod write_dot1agCfmMepRowStatus;
WriteMethod write_dot1agCfmMepPbbTeCanReportPbbTePresence;
WriteMethod write_dot1agCfmMepPbbTransmitLbmLtmReverseVid;
WriteMethod write_dot1agCfmMepPbbTeMismatchAlarm;
WriteMethod write_dot1agCfmMepDbRMepIsActive;
#endif				/* __LOCAL_IEEE8021CFMMIB_H__ */
