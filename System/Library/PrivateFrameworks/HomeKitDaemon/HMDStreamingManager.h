//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/AVCRemoteVideoClientDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAudioStreamInterfaceDelegate-Protocol.h>
#import <HomeKitDaemon/HMDVideoStreamInterfaceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class AVCRemoteVideoClient, HMDAudioStreamInterface, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDVideoStreamInterface, NSNumber, NSObject, NSString;
@protocol HMDStreamingManagerDelegate, OS_dispatch_queue;

@interface HMDStreamingManager : HMFObject <HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging>
{
    NSNumber *_slotIdentifier;	// 8 = 0x8
    NSNumber *_aspectRatio;	// 16 = 0x10
    HMDVideoStreamInterface *_videoStreamInterface;	// 24 = 0x18
    HMDAudioStreamInterface *_audioStreamInterface;	// 32 = 0x20
    HMDCameraStreamSessionID *_sessionID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDStreamingManagerDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 72 = 0x48
    AVCRemoteVideoClient *_avcRemoteVideo;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00000000001df7f4
- (void).cxx_destruct;	// IMP=0x00000000001def57
@property(retain) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDStreamingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(readonly) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property(copy) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
- (void)remoteVideoServerDidDie:(id)arg1;	// IMP=0x00000000001dedc0
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;	// IMP=0x00000000001ded4f
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;	// IMP=0x00000000001dec9e
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000001debed
- (void)videoStreamDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000001deb16
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000001dea3f
- (void)videoStreamDidNetworkImprove:(id)arg1;	// IMP=0x00000000001de968
- (void)videoStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000001de866
- (void)videoStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000001de3f5
- (void)audioStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000001de3ef
- (void)audioStream:(id)arg1 didResume:(id)arg2;	// IMP=0x00000000001de3e9
- (void)audioStream:(id)arg1 didPause:(id)arg2;	// IMP=0x00000000001de3e3
- (void)audioStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000001de2d8
- (void)_callConfigurationUpdated;	// IMP=0x00000000001de15e
- (void)_callNetworkDeteriorated;	// IMP=0x00000000001ddfe4
- (void)_callNetworkImproved;	// IMP=0x00000000001dde6a
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x00000000001ddcbb
- (void)_callRelayStarted;	// IMP=0x00000000001ddb41
- (void)_callReceivedFirstFrame;	// IMP=0x00000000001dd9c7
- (void)_callStreamStarted:(id)arg1;	// IMP=0x00000000001dd818
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dd73c
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000001dd6c0
- (void)_stopStream;	// IMP=0x00000000001dd53a
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x00000000001dd489
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000001dd40d
- (void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000001dcb71
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000001dca95
@property(readonly) unsigned long long audioStreamSetting;
- (id)logIdentifier;	// IMP=0x00000000001dca01
- (void)dealloc;	// IMP=0x00000000001dc9c3
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8;	// IMP=0x00000000001dc61a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
