//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioInjectionDevice, CSAudioInjectionEngine, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProvider
{
    float _didStartDelayInSeconds;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSMutableArray *_connectedDevices;	// 40 = 0x28
    CSAudioInjectionDevice *_builtInDevice;	// 48 = 0x30
    CSAudioInjectionDevice *_bundleTvRemote;	// 56 = 0x38
    CSAudioInjectionEngine *_builtInAudioInjectionEngine;	// 64 = 0x40
    NSMutableDictionary *_audioInjectionEngines;	// 72 = 0x48
    unsigned long long _latestPluginStreamId;	// 80 = 0x50
    unsigned long long _activateStartTime;	// 88 = 0x58
    unsigned long long _activateEndTime;	// 96 = 0x60
    unsigned long long _deactivateStartTime;	// 104 = 0x68
    unsigned long long _deactivateEndTime;	// 112 = 0x70
    NSString *_atvRemoteDeviceID;	// 120 = 0x78
}

+ (void)createSharedAudioSession;	// IMP=0x0020000000076ad9
+ (id)defaultInjectionProvider;	// IMP=0x0010000000073f75
- (void).cxx_destruct;	// IMP=0x00200000000775d0
@property(retain, nonatomic) NSString *atvRemoteDeviceID; // @synthesize atvRemoteDeviceID=_atvRemoteDeviceID;
@property(nonatomic) unsigned long long deactivateEndTime; // @synthesize deactivateEndTime=_deactivateEndTime;
@property(nonatomic) unsigned long long deactivateStartTime; // @synthesize deactivateStartTime=_deactivateStartTime;
@property(nonatomic) unsigned long long activateEndTime; // @synthesize activateEndTime=_activateEndTime;
@property(nonatomic) unsigned long long activateStartTime; // @synthesize activateStartTime=_activateStartTime;
@property(nonatomic) unsigned long long latestPluginStreamId; // @synthesize latestPluginStreamId=_latestPluginStreamId;
@property(retain, nonatomic) NSMutableDictionary *audioInjectionEngines; // @synthesize audioInjectionEngines=_audioInjectionEngines;
@property(retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine; // @synthesize builtInAudioInjectionEngine=_builtInAudioInjectionEngine;
@property(retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote; // @synthesize bundleTvRemote=_bundleTvRemote;
@property(retain, nonatomic) CSAudioInjectionDevice *builtInDevice; // @synthesize builtInDevice=_builtInDevice;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) float didStartDelayInSeconds; // @synthesize didStartDelayInSeconds=_didStartDelayInSeconds;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0010000000077188
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000076fc8
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x0010000000076cf4
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000076adf
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000076ad3
- (id)metrics;	// IMP=0x0010000000076890
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x001000000007688a
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000076882
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x001000000007687a
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000076871
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000076868
- (void)updateMeters;	// IMP=0x0010000000076862
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x001000000007685c
- (unsigned long long)alertStartTime;	// IMP=0x0010000000076854
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x001000000007684c
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x0010000000076844
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x001000000007683c
- (id)playbackRoute;	// IMP=0x001000000007682f
- (_Bool)duckOthersOption;	// IMP=0x0010000000076827
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0010000000076821
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000076819
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000007678c
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000766ff
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000007667e
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000007661a
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000076612
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000765f9
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000076500
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x0010000000076425
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000760c9
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000075da7
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000075bea
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000759a1
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007563e
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000075636
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000007562e
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075250
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x001000000007524a
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x0010000000075244
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000007518d
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000750d6
- (void)willDestroy;	// IMP=0x00100000000750d0
- (void)disconnectDevice:(id)arg1;	// IMP=0x0010000000074dcb
- (void)connectDevice:(id)arg1;	// IMP=0x0010000000074cae
- (id)primaryInputDevice;	// IMP=0x0010000000074c7a
- (void)stop;	// IMP=0x00100000000747ca
- (void)_createSpeechDetectionVADIfNeeded;	// IMP=0x0010000000074697
- (void)_tearDownSpeechDetectionVADIfNeeded;	// IMP=0x001000000007461b
- (void)_connectPluginDevice:(id)arg1;	// IMP=0x0010000000074501
- (void)start;	// IMP=0x00100000000742ab
- (void)dealloc;	// IMP=0x00100000000741f1
- (id)init;	// IMP=0x0010000000073fca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
