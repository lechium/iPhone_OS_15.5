//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraIDSSessionInitiatorDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraLocalStreamSession, HMDCameraMediaConfigGenerator, HMDCameraStreamMetrics, HMDCameraSupportedConfigurationCache, NSNumber, NSString;

@interface HMDCameraLocalStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    HMDCameraLocalStreamSession *_streamSession;	// 8 = 0x8
    HMDCameraMediaConfigGenerator *_configGenerator;	// 16 = 0x10
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000006ab6e7
- (void).cxx_destruct;	// IMP=0x00000000006aa14f
@property(readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(retain) HMDCameraLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000006a9e12
- (void)_reconfigureStreams;	// IMP=0x00000000006a9cbe
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000006a9ba1
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000006a99ab
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000006a97b5
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000006a971a
- (void)streamingManagerDidStartRelay:(id)arg1;	// IMP=0x00000000006a9708
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000006a96f6
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x00000000006a95ec
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000006a94f8
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000006a930b
- (void)sessionInitiator:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000006a9217
- (void)sessionInitiator:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000006a9037
- (void)_streamStarted;	// IMP=0x00000000006a8f79
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000006a8df1
- (void)_writeStopConfig:(id)arg1;	// IMP=0x00000000006a88b0
- (void)_writeSelectConfig:(id)arg1 reconfigure:(_Bool)arg2;	// IMP=0x00000000006a85c7
- (void)_writeReselectConfig;	// IMP=0x00000000006a844f
- (void)_writeStartConfig;	// IMP=0x00000000006a82da
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000006a816c
- (void)stopStreamWithError:(id)arg1;	// IMP=0x00000000006a80bb
- (void)_reconfigureStream:(id)arg1;	// IMP=0x00000000006a800a
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000006a7f59
- (void)_startStreamingManager;	// IMP=0x00000000006a7951
- (id)_calculateMTU;	// IMP=0x00000000006a767f
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000006a6d29
- (void)_removeServerStreamSession;	// IMP=0x00000000006a6cb2
- (void)_addServerStreamSession;	// IMP=0x00000000006a6c3b
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000006a6b8a
- (_Bool)_validateSetupEndPointReadWithWrite;	// IMP=0x00000000006a67c2
- (void)_handleSetupEndPointRead:(id)arg1;	// IMP=0x00000000006a5fa8
- (void)_sendSetupEndPointRead;	// IMP=0x00000000006a5cf0
- (void)_writeSetupEndPoint;	// IMP=0x00000000006a5255
- (void)_handleSupportedParameters:(id)arg1;	// IMP=0x00000000006a47c6
- (void)_getSupportedConfigurations;	// IMP=0x00000000006a4411
- (void)_negotiateStream;	// IMP=0x00000000006a3d54
- (void)negotiateStream;	// IMP=0x00000000006a3ce3
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a3c07
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000006a3b8b
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000006a3ac4
@property(readonly, getter=isSendingStream) _Bool sendingStream;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x00000000006a37d8
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 supportedConfigCache:(id)arg8 streamSession:(id)arg9;	// IMP=0x00000000006a359b
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 localNetworkConfig:(id)arg10 remoteCapabilities:(id)arg11 supportedConfigCache:(id)arg12 streamPreference:(id)arg13;	// IMP=0x00000000006a3119

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end
