//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/VSSpeechConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID, VSSpeechConnection;
@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    NSString *_clientBundleIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    VSSpeechConnection *_xpcConnection;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    struct {
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegateSuccessWithInstrumentMetrics:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateStreamSynthesisAudioData:1;
        unsigned int willUseInput:1;
        unsigned int delegateDidStartPreviewRequest:1;
    } _synthesizerFlags;	// 48 = 0x30
    float _rate;	// 52 = 0x34
    float _pitch;	// 56 = 0x38
    float _volume;	// 60 = 0x3c
    id <VSSpeechSynthesizerDelegate> _delegate;	// 64 = 0x40
    NSString *_voice;	// 72 = 0x48
    NSString *_language;	// 80 = 0x50
    NSUUID *_accessoryID;	// 88 = 0x58
    NSMutableDictionary *_durationRequests;	// 96 = 0x60
}

+ (id)characterClassCountForUtterance:(id)arg1 language:(id)arg2;	// IMP=0x00000000000326bd
+ (id)sharedInstance;	// IMP=0x0000000000030211
+ (void)stopPlayingVoicePreview;	// IMP=0x000000000002fda2
+ (_Bool)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002fb20
+ (id)validateAudioCachingRequest:(id)arg1;	// IMP=0x000000000002f879
+ (id)validateAudioRequest:(id)arg1;	// IMP=0x000000000002f6d8
+ (id)validateRequest:(id)arg1;	// IMP=0x000000000002f58d
+ (id)validatePrewarmRequest:(id)arg1;	// IMP=0x000000000002f3d4
+ (id)errorWithReason:(id)arg1;	// IMP=0x000000000002f2f5
- (void).cxx_destruct;	// IMP=0x00000000000361bf
@property(retain, nonatomic) NSMutableDictionary *durationRequests; // @synthesize durationRequests=_durationRequests;
@property(copy, nonatomic) NSUUID *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;	// IMP=0x00000000000360e9
- (id)availableLanguageCodes;	// IMP=0x00000000000360aa
- (id)availableVoicesForLanguageCode:(id)arg1;	// IMP=0x0000000000036094
- (void)getVoiceInfoForLanguageCode:(id)arg1 name:(id)arg2 footprint:(long long)arg3 gender:(long long)arg4 type:(long long)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000003607e
- (void)getAllAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036068
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036044
- (void)triggerCellularDownloadedVoiceAssets:(id)arg1;	// IMP=0x0000000000035d0c
- (void)setAutoDownloadedVoiceAssets:(id)arg1;	// IMP=0x00000000000352e9
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000352d3
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;	// IMP=0x00000000000352bd
- (void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000352a7
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;	// IMP=0x000000000003528c
- (void)cleanUnusedAssets:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035276
- (void)endAudioPowerUpdate;	// IMP=0x00000000000351ff
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035167
- (void)killDaemon;	// IMP=0x0000000000035151
- (void)invokeDaemon:(CDUnknownBlockType)arg1;	// IMP=0x000000000003513b
- (void)forwardStreamObject:(id)arg1;	// IMP=0x0000000000035125
- (void)connection:(id)arg1 invalidatedWithError:(id)arg2;	// IMP=0x000000000003500d
- (void)connection:(id)arg1 previewRequestDidStartPlaying:(id)arg2;	// IMP=0x0000000000034e96
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;	// IMP=0x0000000000034d41
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000034bad
- (void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;	// IMP=0x0000000000034ab6
- (void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;	// IMP=0x0000000000034694
- (void)connection:(id)arg1 speechRequest:(id)arg2 didGenerateAudioChunk:(id)arg3;	// IMP=0x00000000000344c9
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000003433a
- (void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;	// IMP=0x0000000000034140
- (void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;	// IMP=0x0000000000033f75
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;	// IMP=0x0000000000033b62
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;	// IMP=0x00000000000339eb
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;	// IMP=0x000000000003382a
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;	// IMP=0x00000000000336b3
- (void)textToPhonemesWithRequest:(id)arg1 phonemeSystem:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003323b
- (void)estimateDurationOfRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032eda
- (double)estimateDurationOfRequest:(id)arg1;	// IMP=0x0000000000032aac
- (id)_continueSpeakingRequest;	// IMP=0x000000000003258c
- (float)maximumRate;	// IMP=0x000000000003257e
- (float)minimumRate;	// IMP=0x0000000000032570
- (id)speechString;	// IMP=0x00000000000323e1
- (_Bool)isSystemSpeaking;	// IMP=0x0000000000032323
- (_Bool)isSpeaking;	// IMP=0x0000000000032265
- (_Bool)continueSpeakingWithError:(id *)arg1;	// IMP=0x0000000000032160
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000003204c
- (_Bool)stopSpeakingPresynthesizedAudioSynchronously:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000031ec2
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000031d0b
- (void)cancelAudioRequest:(id)arg1;	// IMP=0x0000000000031b39
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000031965
- (id)cachePresynthesizedAudioRequest:(id)arg1;	// IMP=0x0000000000031751
- (id)startSpeakingPresynthesizedAudioRequest:(id)arg1;	// IMP=0x00000000000314cd
- (id)startSpeakingRequest:(id)arg1;	// IMP=0x0000000000031208
- (id)startSynthesizingRequest:(id)arg1;	// IMP=0x0000000000030f90
- (id)_pauseSpeakingRequestAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2;	// IMP=0x0000000000030c5e
- (id)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3;	// IMP=0x00000000000309d3
- (id)_stopSpeakingPresynthesizedAudioRequest:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x00000000000307bb
- (void)_setDelegate:(id)arg1;	// IMP=0x000000000003063b
- (_Bool)queryPhaticCapability:(id)arg1;	// IMP=0x0000000000030625
- (id)prewarmIfNeededWithRequest:(id)arg1;	// IMP=0x0000000000030282
- (id)initForInputFeedback;	// IMP=0x0000000000030266
- (id)initWithAccessoryID:(id)arg1;	// IMP=0x000000000002fe58
- (id)init;	// IMP=0x000000000002fe44
- (void)stopPlayingVoicePreview;	// IMP=0x000000000002fddf
- (void)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002fc28

@end
