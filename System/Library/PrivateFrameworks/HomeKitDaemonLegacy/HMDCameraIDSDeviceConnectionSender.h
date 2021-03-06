//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraRemoteStreamSenderProtocol-Protocol.h>

@class AVCPacketRelay, HMDDevice, HMFOSTransaction, NSNumber, NSObject, NSString;
@protocol HMDCameraIDSDeviceConnectionSenderDelegate, OS_dispatch_queue;

@interface HMDCameraIDSDeviceConnectionSender <HMDCameraRemoteStreamSenderProtocol>
{
    id <HMDCameraIDSDeviceConnectionSenderDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDDevice *_device;	// 24 = 0x18
    AVCPacketRelay *_videoPacketRelay;	// 32 = 0x20
    AVCPacketRelay *_audioPacketRelay;	// 40 = 0x28
    HMFOSTransaction *_packetRelayTransaction;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000068ebfd
- (void).cxx_destruct;	// IMP=0x000000000068ea9e
@property(retain) HMFOSTransaction *packetRelayTransaction; // @synthesize packetRelayTransaction=_packetRelayTransaction;
@property(retain) AVCPacketRelay *audioPacketRelay; // @synthesize audioPacketRelay=_audioPacketRelay;
@property(retain) AVCPacketRelay *videoPacketRelay; // @synthesize videoPacketRelay=_videoPacketRelay;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraIDSDeviceConnectionSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000068e985
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x000000000068e7c9
- (void)_socketOpenedWithError:(id)arg1;	// IMP=0x000000000068e60d
- (void)_startAudioPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;	// IMP=0x000000000068e0cf
- (void)_startVideoPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;	// IMP=0x000000000068db91
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;	// IMP=0x000000000068da1e
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;	// IMP=0x000000000068d91e
- (void)_startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;	// IMP=0x000000000068d237
- (void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;	// IMP=0x000000000068d178
@property(readonly, nonatomic) NSNumber *mtu;
- (void)openRelaySession;	// IMP=0x000000000068d097
- (void)dealloc;	// IMP=0x000000000068cf4e
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 idsProxyStreamService:(id)arg6;	// IMP=0x000000000068cd8c
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x000000000068cc7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

