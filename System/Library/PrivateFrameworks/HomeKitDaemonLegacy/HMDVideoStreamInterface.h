//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/AVCVideoStreamDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDVideoStreamReconfigureDelegate-Protocol.h>

@class AVCVideoStream, HMDVideoStreamReconfigure, HMFOSTransaction, NSNumber, NSObject, NSString;
@protocol HMDVideoStreamInterfaceDelegate, HMDVideoStreamLastDecodedFrameDelegate, OS_dispatch_queue;

@interface HMDVideoStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate>
{
    HMDVideoStreamReconfigure *_videoStreamReconfigure;	// 8 = 0x8
    AVCVideoStream *_videoStream;	// 16 = 0x10
    id <HMDVideoStreamInterfaceDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lastFrameDelegateQueue;	// 32 = 0x20
    id <HMDVideoStreamLastDecodedFrameDelegate> _lastFrameDelegate;	// 40 = 0x28
    HMFOSTransaction *_snapshotDataTrasaction;	// 48 = 0x30
    double _rtcpSendIntervalSec;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00000000001d544d
- (void).cxx_destruct;	// IMP=0x00000000001d47db
@property(nonatomic) double rtcpSendIntervalSec; // @synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec;
@property(retain, nonatomic) HMFOSTransaction *snapshotDataTrasaction; // @synthesize snapshotDataTrasaction=_snapshotDataTrasaction;
@property __weak id <HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate; // @synthesize lastFrameDelegate=_lastFrameDelegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue; // @synthesize lastFrameDelegateQueue=_lastFrameDelegateQueue;
@property(readonly) __weak id <HMDVideoStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCVideoStream *videoStream; // @synthesize videoStream=_videoStream;
@property(readonly, nonatomic) HMDVideoStreamReconfigure *videoStreamReconfigure; // @synthesize videoStreamReconfigure=_videoStreamReconfigure;
- (void)videoStreamReconfigureDidNetworkImprove:(id)arg1;	// IMP=0x00000000001d46f1
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000001d46df
- (void)streamDidRTCPTimeOut:(id)arg1;	// IMP=0x00000000001d466e
- (void)streamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000001d45fd
- (void)streamDidServerDie:(id)arg1;	// IMP=0x00000000001d458c
- (void)streamDidStop:(id)arg1;	// IMP=0x00000000001d451b
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;	// IMP=0x00000000001d446a
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x00000000001d43b9
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001d4302
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001d424b
- (void)setRtcpSendInterval:(double)arg1;	// IMP=0x00000000001d41ac
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)_callDidGetLastDecodedFrame:(id)arg1;	// IMP=0x00000000001d3be5
- (void)_callDidUpdateConfiguration;	// IMP=0x00000000001d3a6b
- (void)_callNetworkDeteriorated;	// IMP=0x00000000001d38f1
- (void)_callNetworkImproved;	// IMP=0x00000000001d3777
- (void)_callStopped:(id)arg1;	// IMP=0x00000000001d35b3
- (void)_callStarted:(id)arg1;	// IMP=0x00000000001d33ef
- (void)captureSnapshot;	// IMP=0x00000000001d337e
- (void)setSnapshotDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x00000000001d32a2
- (void)stopStream;	// IMP=0x00000000001d3231
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x00000000001d3180
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000001d3104
- (void)_startStreamWithConfig:(id)arg1;	// IMP=0x00000000001d2d84
- (void)startStreamWithConfig:(id)arg1;	// IMP=0x00000000001d2cd3
- (_Bool)_initializeLocalStreamWithLocalNetworkConfig:(id)arg1;	// IMP=0x00000000001d28f0
- (_Bool)_initializeStreamRemoteSender:(id)arg1 localNetworkConfig:(id)arg2;	// IMP=0x00000000001d26c5
- (_Bool)_initializeStreamRemoteSocketReceiver:(id)arg1;	// IMP=0x00000000001d2309
- (_Bool)_initializeStreamRemoteDestinationReceiver:(id)arg1;	// IMP=0x00000000001d200c
- (_Bool)_createLocalSocketWithNetworkConfig:(id)arg1;	// IMP=0x00000000001d1e8f
@property(readonly, nonatomic) NSNumber *streamToken;
@property(readonly, nonatomic) NSNumber *syncSource;
- (void)dealloc;	// IMP=0x00000000001d1ca1
- (id)logIdentifier;	// IMP=0x00000000001d1c51
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;	// IMP=0x00000000001d1b0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

