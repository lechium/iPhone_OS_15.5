//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioStream, MISSING_TYPE, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSXPCClient : NSObject
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;	// 8 = 0x8
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;	// 16 = 0x10
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;	// 24 = 0x18
    id <CSXPCClientDelegate> _delegate;	// 32 = 0x20
    NSString *_UUID;	// 40 = 0x28
    NSObject<OS_xpc_object> *_xpcConnection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_targetQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_xpcReplyQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_xpcClientQueue;	// 72 = 0x48
    CSAudioStream *_audioStream;	// 80 = 0x50
    NSMutableSet *_activationAssertions;	// 88 = 0x58
    NSHashTable *_audioSessionInfoObservers;	// 96 = 0x60
    unsigned long long _xpcClientType;	// 104 = 0x68
}

+ (id)createStopAudioStreamMessage;	// IMP=0x0020000000029401
+ (id)createStartAudioStreamMessageWithOption:(id)arg1;	// IMP=0x0010000000029195
+ (id)createPrepareAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x0010000000028e1c
+ (id)createAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x0010000000028207
- (void).cxx_destruct;	// IMP=0x002000000002e07f
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // @synthesize xpcClientQueue=_xpcClientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcReplyQueue; // @synthesize xpcReplyQueue=_xpcReplyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (MISSING_TYPE *)_handleStreamProvidingDelegateHardwareConfigChange: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002de52
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;	// IMP=0x001000000002dd64
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;	// IMP=0x001000000002dc76
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;	// IMP=0x001000000002dbc0
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002db02
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;	// IMP=0x001000000002d942
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;	// IMP=0x001000000002d782
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;	// IMP=0x001000000002d517
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;	// IMP=0x001000000002d2ac
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002d166
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;	// IMP=0x001000000002d0af
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;	// IMP=0x001000000002cff8
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;	// IMP=0x001000000002cf41
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;	// IMP=0x001000000002ce8a
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;	// IMP=0x001000000002cded
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;	// IMP=0x001000000002cc49
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;	// IMP=0x001000000002cbac
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002ca2c
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;	// IMP=0x001000000002c8b7
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002c7b5
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x001000000002c6aa
- (void)_handleListenerError:(id)arg1;	// IMP=0x001000000002c578
- (void)_handleListenerMessage:(id)arg1;	// IMP=0x001000000002c458
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x001000000002c3af
- (_Bool)sendMessageAndReplySync:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c167
- (id)_decodeError:(id)arg1;	// IMP=0x001000000002c09d
- (void)_sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bec9
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bdf0
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000002bcc5
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;	// IMP=0x001000000002b9d1
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;	// IMP=0x001000000002b6dd
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x001000000002b3fa
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000002b3dd
- (void)registerObserver:(id)arg1;	// IMP=0x001000000002b3c0
- (void)attachTandemStream:(id)arg1 toPrimaryStream:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b38e
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x001000000002b35c
- (_Bool)isRecording;	// IMP=0x001000000002b328
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x001000000002b2f6
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000002b2c2
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x001000000002b290
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x001000000002b25e
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x001000000002b22a
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x001000000002b1f6
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x001000000002b1c2
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x001000000002b18e
- (unsigned long long)audioStreamId;	// IMP=0x001000000002b15a
- (id)playbackRoute;	// IMP=0x001000000002aed8
- (_Bool)isNarrowBand;	// IMP=0x001000000002acb2
- (id)recordSettings;	// IMP=0x001000000002aa02
- (id)audioDeviceInfo;	// IMP=0x001000000002a771
- (id)recordDeviceInfo;	// IMP=0x001000000002a4d9
- (id)recordRoute;	// IMP=0x001000000002a257
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029bfe
- (void)acousticSLResultForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029609
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000294e0
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000292bf
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028f46
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002890d
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028331
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000027c78
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027863
- (id)audioMetric;	// IMP=0x001000000002741c
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000027135
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000026e4e
- (void)updateMeters;	// IMP=0x0010000000026d55
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x0010000000026c3a
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x0010000000026af3
- (unsigned long long)alertStartTime;	// IMP=0x00100000000267cb
- (_Bool)playRecordStartingAlertAndResetEndpointer;	// IMP=0x00100000000266c6
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x00100000000265a5
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x00100000000263eb
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x00100000000263d9
- (void)reportsDynamicActivityAttribute:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0010000000026274
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x0010000000026262
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0010000000026141
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x0010000000026020
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0010000000025eff
- (_Bool)duckOthersOption;	// IMP=0x0010000000025e00
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000025cd2
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000025b35
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x0010000000025a2d
- (void)pingpong:(CDUnknownBlockType)arg1;	// IMP=0x00100000000258f3
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000002571d
- (void)_sendXPCClientType;	// IMP=0x00100000000255bb
- (void)dealloc;	// IMP=0x001000000002557d
- (void)_disconnect;	// IMP=0x0010000000025531
- (void)disconnect;	// IMP=0x00100000000254d0
- (void)connect;	// IMP=0x00100000000252a0
- (_Bool)isConnected;	// IMP=0x00100000000251f4
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0010000000025090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

