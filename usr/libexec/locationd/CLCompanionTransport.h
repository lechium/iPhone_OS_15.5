//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, NSString;

@interface CLCompanionTransport : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    IDSDevice *_pairedDevice;	// 16 = 0x10
    double _pairedDeviceLastSeenTimestamp;	// 24 = 0x18
    CDUnknownBlockType _receivedMessageHandler;	// 32 = 0x20
    CDUnknownBlockType _connectionUpdateHandler;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
}

+ (id)computeMD5:(id)arg1;	// IMP=0x002000000047a67a
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property(copy) CDUnknownBlockType connectionUpdateHandler; // @synthesize connectionUpdateHandler=_connectionUpdateHandler;
@property(copy) CDUnknownBlockType receivedMessageHandler; // @synthesize receivedMessageHandler=_receivedMessageHandler;
@property double pairedDeviceLastSeenTimestamp; // @synthesize pairedDeviceLastSeenTimestamp=_pairedDeviceLastSeenTimestamp;
@property(retain) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x001000000047a56e
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000047a3d8
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x001000000047a3d2
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000047a3c0
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000047a234
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000047a128
- (void)handleContextConfigurationUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000047a0d0
- (void)handleVO2MaxCloudKitDailyStats:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000047a078
- (void)handleCompanionPingDataForAbsoluteAltitude:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000047a020
- (void)handlePredictedWalkDistanceBout:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479fc8
- (void)handleAbsoluteAltitudeSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479f70
- (void)handleAbsoluteAltitudeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479f18
- (void)handleRemoteAppLaunch:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479ec0
- (void)handleMotionStateUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479e68
- (void)handleCompanionPingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479e10
- (void)handleMotionCalsUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479db8
- (void)handleOdometerCoarseElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479d60
- (void)handleOdometerCoarseElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479d24
- (void)handleOdometerCoarseElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479ce8
- (void)handleStrideCalDataUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479cac
- (void)handleStrideCalDataSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479c54
- (void)handleOdometerElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479bfc
- (void)handleOdometerElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479bc0
- (void)handleOdometerElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479b84
- (void)handleOdometerCyclingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479b2c
- (void)handleOdometerCyclingUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479af0
- (void)handleOdometerCyclingSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479ab7
- (void)handleKappaUpload:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479a5f
- (void)handleKappaTrigger:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479a07
- (void)handleKappaStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004799cb
- (void)handleKappaCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000479973
- (void)receivedMessage:(unsigned short)arg1 data:(id)arg2 identifierString:(id)arg3;	// IMP=0x001000000047966e
- (void)sendMessage:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 fireAndForget:(_Bool)arg4 encrypt:(_Bool)arg5 bypassConnectionCheck:(_Bool)arg6 timeout:(double)arg7 nonWaking:(_Bool)arg8;	// IMP=0x00100000004791a2
- (void)updateIDSStatusAndNotify;	// IMP=0x0010000000478f96
- (void)updateIDSStatus;	// IMP=0x0010000000478b67
- (void)dealloc;	// IMP=0x0010000000478b0f
- (id)initWithSilo:(id)arg1 iDSService:(id)arg2;	// IMP=0x0010000000478690

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

