//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDAVConferenceConfiguration, NSDate, NSDictionary, NSError, NSNumber, NSString;
@protocol CSDAVConferenceDelegate, CSDAVConferenceProvider, OS_dispatch_queue;

@interface CSDAVConference : NSObject
{
    _Bool _hasReceivedFirstRemoteFrame;	// 8 = 0x8
    _Bool _remoteVideoPaused;	// 9 = 0x9
    _Bool _capturingLocalVideo;	// 10 = 0xa
    int _state;	// 12 = 0xc
    unsigned int _remoteVideoPresentationState;	// 16 = 0x10
    id <CSDAVConferenceDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    double _connectionTimeout;	// 40 = 0x28
    NSDate *_dateConnected;	// 48 = 0x30
    NSDate *_dateEnded;	// 56 = 0x38
    NSDate *_dateStartedConnecting;	// 64 = 0x40
    NSNumber *_sendingVideoExpected;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSDictionary *_localInviteDictionary;	// 88 = 0x58
    long long _endedReason;	// 96 = 0x60
    NSError *_endedError;	// 104 = 0x68
    CSDAVConferenceConfiguration *_configuration;	// 112 = 0x70
    id <CSDAVConferenceProvider> _conferenceProvider;	// 120 = 0x78
    CDUnknownBlockType _conferenceProviderCreationBlock;	// 128 = 0x80
    struct CGSize _remoteVideoPresentationSize;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x002000000001104c
@property(copy, nonatomic) CDUnknownBlockType conferenceProviderCreationBlock; // @synthesize conferenceProviderCreationBlock=_conferenceProviderCreationBlock;
@property(retain, nonatomic) id <CSDAVConferenceProvider> conferenceProvider; // @synthesize conferenceProvider=_conferenceProvider;
@property(retain, nonatomic) CSDAVConferenceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool capturingLocalVideo; // @synthesize capturingLocalVideo=_capturingLocalVideo;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) _Bool hasReceivedFirstRemoteFrame; // @synthesize hasReceivedFirstRemoteFrame=_hasReceivedFirstRemoteFrame;
@property(retain, nonatomic) NSError *endedError; // @synthesize endedError=_endedError;
@property(nonatomic) long long endedReason; // @synthesize endedReason=_endedReason;
@property(copy, nonatomic) NSDictionary *localInviteDictionary; // @synthesize localInviteDictionary=_localInviteDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CSDAVConferenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)conferenceProvider:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x0000000000010e51
- (void)serverDiedForConferenceProvider:(id)arg1;	// IMP=0x0010000000010d42
- (void)conferenceProvider:(id)arg1 remoteMediaStalled:(_Bool)arg2;	// IMP=0x0010000000010c1d
- (void)conferenceProvider:(id)arg1 remoteVideoPaused:(_Bool)arg2;	// IMP=0x0010000000010ae8
- (void)conferenceProviderReceivedFirstRemoteFrame:(id)arg1;	// IMP=0x00100000000109eb
- (void)conferenceProvider:(id)arg1 didPauseVideo:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000010706
- (void)conferenceProvider:(id)arg1 didPauseAudio:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000001059c
- (void)conferenceProvider:(id)arg1 updateOutputLevel:(float)arg2;	// IMP=0x00100000000104fe
- (void)conferenceProvider:(id)arg1 updateInputLevel:(float)arg2;	// IMP=0x0010000000010460
- (void)conferenceProvider:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x0010000000010391
- (void)conferenceProvider:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00100000000102c2
- (void)connectionClosedForConferenceProvider:(id)arg1;	// IMP=0x00100000000101da
- (void)conferenceProvider:(id)arg1 didStopWithError:(id)arg2 callMetadata:(id)arg3;	// IMP=0x001000000000fe98
- (void)conferenceProvider:(id)arg1 didStartSession:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000000fb25
- (long long)_endedReasonForDidStopError:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000faa3
- (void)_sendDelegateReceivedData:(id)arg1 forCallID:(long long)arg2;	// IMP=0x001000000000f9a0
- (void)_sendDelegateBytesOfDataUsageChanged:(long long)arg1;	// IMP=0x001000000000f8e7
- (void)_sendDelegateOutputLevelChanged:(float)arg1;	// IMP=0x001000000000f82e
- (void)_sendDelegateInputLevelChanged:(float)arg1;	// IMP=0x001000000000f775
- (void)_sendDelegateOutputFrequencyLevelChanged:(id)arg1;	// IMP=0x001000000000f67d
- (void)_sendDelegateInputFrequencyLevelChanged:(id)arg1;	// IMP=0x001000000000f585
- (void)_sendDelegateRemoteMediaStalled:(_Bool)arg1;	// IMP=0x001000000000f4cc
- (void)_sendDelegateRemoteVideoPaused;	// IMP=0x001000000000f41e
- (void)_sendDelegateReceivedFirstRemoteFrame;	// IMP=0x001000000000f370
- (void)_sendDelegateSendingAudioChanged;	// IMP=0x001000000000f2c2
- (void)_sendDelegateMutedChanged;	// IMP=0x001000000000f214
- (void)_sendDelegateConnectionClosed;	// IMP=0x001000000000f166
- (void)_sendDelegateEndedWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x001000000000f063
- (void)_sendDelegateStarted;	// IMP=0x001000000000efb5
- (void)_sendDelegateFinishedPreparing;	// IMP=0x001000000000ef07
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ee0c
- (void)stoppedCapturingLocalVideo:(id)arg1;	// IMP=0x001000000000ed77
- (void)startedCapturingLocalVideo:(id)arg1;	// IMP=0x001000000000ecdf
@property(nonatomic) int deviceRole;
- (void)_setUpDidStartTimeout;	// IMP=0x001000000000e799
@property(nonatomic) unsigned int remoteVideoPresentationState; // @synthesize remoteVideoPresentationState=_remoteVideoPresentationState;
@property(nonatomic) struct CGSize remoteVideoPresentationSize; // @synthesize remoteVideoPresentationSize=_remoteVideoPresentationSize;
- (void)updateCapabilities:(id)arg1;	// IMP=0x001000000000de6c
@property(retain, nonatomic, getter=isSendingVideoExpected) NSNumber *sendingVideoExpected; // @synthesize sendingVideoExpected=_sendingVideoExpected;
- (id)_isSendingVideoExpected;	// IMP=0x001000000000ddb2
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo;
- (_Bool)_isSendingVideo;	// IMP=0x001000000000d77b
@property(nonatomic, getter=isSendingAudioData) _Bool sendingAudioData;
- (_Bool)_isSendingAudioData;	// IMP=0x001000000000d37b
@property(nonatomic, getter=isSendingAudio) _Bool sendingAudio;
- (_Bool)_isSendingAudio;	// IMP=0x001000000000d059
@property(nonatomic, getter=isMuted) _Bool muted;
- (_Bool)_isMuted;	// IMP=0x001000000000cd65
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *dateStartedConnecting; // @synthesize dateStartedConnecting=_dateStartedConnecting;
@property(retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(retain, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, getter=isCaller) _Bool caller;
@property(readonly, nonatomic) long long callID;
@property(copy, nonatomic) NSDictionary *remoteInviteDictionary;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
- (void)_setEndedWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x001000000000bace
- (void)setRemoteIDSDestinationURI:(id)arg1 crossDeviceIdentifier:(id)arg2;	// IMP=0x001000000000b99d
- (void)sendData:(id)arg1;	// IMP=0x001000000000b89b
- (void)cancel;	// IMP=0x001000000000b6bc
- (void)_stop;	// IMP=0x001000000000b352
- (void)stop;	// IMP=0x001000000000b2cb
- (void)startConnectionWithTransport:(id)arg1;	// IMP=0x001000000000acae
- (void)prepareWithConfiguration:(id)arg1;	// IMP=0x001000000000a4d0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000a3f9
- (id)init;	// IMP=0x001000000000a1f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

