//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSSessionReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDCameraResidentMessageHandler, HMDCameraStreamMetrics, NSNumber, NSString, NSUUID;

@interface HMDCameraRemoteStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    NSUUID *_profileUniqueIdentifier;	// 8 = 0x8
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 16 = 0x10
    HMDCameraMediaConfigGenerator *_configGenerator;	// 24 = 0x18
    HMDCameraRemoteStreamSession *_streamSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000002d7d97
- (void).cxx_destruct;	// IMP=0x00000000002d7177
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000002d6df9
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x00000000002d6bdd
- (void)_reconfigureStreams;	// IMP=0x00000000002d6a4f
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000002d6932
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000002d673c
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000002d6546
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000002d63fc
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000002d63ea
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x00000000002d61dc
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002d60e8
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002d5fd4
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002d5ee0
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002d5ecb
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002d5dd7
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002d5dc2
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000002d5c16
- (void)_sendStopMessageToResident;	// IMP=0x00000000002d5a17
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000002d5896
- (void)stopStreamWithError:(id)arg1;	// IMP=0x00000000002d57e5
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002d56ad
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002d55fc
- (void)_reconfigureStream:(id)arg1;	// IMP=0x00000000002d554b
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000002d549a
- (void)_streamStarted;	// IMP=0x00000000002d53a8
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x00000000002d4e75
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002d47b2
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002d4701
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x00000000002d44a9
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x00000000002d4229
- (void)_setParametersSelected:(id)arg1;	// IMP=0x00000000002d3940
- (void)_negotiateStream;	// IMP=0x00000000002d352c
- (void)negotiateStream;	// IMP=0x00000000002d34bb
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d33df
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000002d3363
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x00000000002d30da
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;	// IMP=0x00000000002d2e62
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;	// IMP=0x00000000002d2a61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

