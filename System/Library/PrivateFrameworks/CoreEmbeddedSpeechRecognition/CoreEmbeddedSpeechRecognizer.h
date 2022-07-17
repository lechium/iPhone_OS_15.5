//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreEmbeddedSpeechRecognition/CESRSpeechServiceDelegate-Protocol.h>
#import <CoreEmbeddedSpeechRecognition/CoreEmbeddedSpeechRecognizerProvider-Protocol.h>

@class NSData, NSError, NSString, NSXPCConnection;
@protocol CoreEmbeddedSpeechRecognizerDelegate, OS_dispatch_queue;

@interface CoreEmbeddedSpeechRecognizer : NSObject <CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider>
{
    _Bool _recognitionActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_esConnection;	// 24 = 0x18
    _Bool _hasRecognizedAnything;	// 32 = 0x20
    unsigned char _instanceUUID[16];	// 33 = 0x21
    NSString *_currentLanguage;	// 56 = 0x38
    NSError *_recognitionError;	// 64 = 0x40
    NSString *_preheatedProfileAssetPath;	// 72 = 0x48
    NSData *_preheatedProfile;	// 80 = 0x50
    id <CoreEmbeddedSpeechRecognizerDelegate> _delegate;	// 88 = 0x58
}

+ (id)offlineDictationStatusIgnoringCache:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000042df0
+ (void)setAssetsPurgeabilityExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0000000000042af0
+ (_Bool)purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000042580
+ (id)purgeInstalledAssetsExceptLanguages:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041fb0
+ (id)installedAssetSizeWithError:(id *)arg1;	// IMP=0x0000000000041a40
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id *)arg2;	// IMP=0x00000000000401e0
+ (id)profilePathForLanguage:(id)arg1 errorOut:(id *)arg2;	// IMP=0x0000000000040080
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;	// IMP=0x000000000003ff50
+ (void)resetCacheAndCompileAllAssets;	// IMP=0x000000000003ab30
- (void).cxx_destruct;	// IMP=0x0000000000044e30
@property(readonly, nonatomic) __weak id <CoreEmbeddedSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidateUaapLM;	// IMP=0x0000000000044bd0
- (void)removePersonalizedLMForFidesOnly:(_Bool)arg1;	// IMP=0x00000000000448f0
- (void)invalidatePersonalizedLM;	// IMP=0x00000000000446c0
- (void)startMissingAssetDownload;	// IMP=0x00000000000445a0
- (void)fetchUserDataForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044230
- (oneway void)speechServiceDidProduceLoggablePackage:(id)arg1;	// IMP=0x0000000000044180
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6;	// IMP=0x0000000000044080
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;	// IMP=0x0000000000043ea0
- (oneway void)speechServiceDidRecognizePackage:(id)arg1;	// IMP=0x0000000000043b80
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;	// IMP=0x0000000000043b00
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;	// IMP=0x0000000000043ab0
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;	// IMP=0x0000000000043a30
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(id)arg1;	// IMP=0x0000000000043980
- (unsigned char (*)[16])instanceUUID;	// IMP=0x0000000000043960
- (void)deleteAllDESRecordsForDictationPersonalization;	// IMP=0x0000000000043610
- (void)writeDESRecord;	// IMP=0x0000000000043470
- (void)invalidate;	// IMP=0x0000000000043380
- (void)finishAudio;	// IMP=0x0000000000041960
- (void)addAudioPacket:(id)arg1;	// IMP=0x0000000000041820
- (id)modelPropertiesForAssetConfig:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041110
- (void)fetchAssetsForAssetConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040cd0
- (void)fetchAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000408d0
- (void)resetDESWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040470
- (void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003fa90
- (void)runEvaluationWithDESRecordDatas:(id)arg1 language:(id)arg2 recipe:(id)arg3 fidesPersonalizedLMPath:(id)arg4 fidesPersonalizedLMTrainingAsset:(id)arg5 scrubResult:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000003f920
- (void)runEvaluationWithDESRecordDatas:(id)arg1 language:(id)arg2 recipe:(id)arg3 attachments:(id)arg4 fidesPersonalizedLMPath:(id)arg5 fidesPersonalizedLMTrainingAsset:(id)arg6 scrubResult:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000003f1c0
- (void)runCorrectedTextEvaluationWithAudioDatas:(id)arg1 recordDatas:(id)arg2 language:(id)arg3 samplingRate:(unsigned long long)arg4 caseSensitive:(_Bool)arg5 skipLME:(_Bool)arg6 wordSenseAccessListSet:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000003e940
- (void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003e2c0
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e260
- (void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e010
- (void)getOfflineAssetStatusIgnoringCache:(_Bool)arg1 assetType:(unsigned long long)arg2 withDetailedStatus:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003dd70
- (void)getOfflineAssetStatusIgnoringCache:(_Bool)arg1 assetType:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003db00
- (void)updateSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c970
- (void)createSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c540
- (void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x000000000003c200
- (void)startSpeechRecognitionWithParameters:(id)arg1 didStartHandlerWithInfo:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b1a0
- (void)startSpeechRecognitionWithParameters:(id)arg1 didStartHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003afa0
- (void)preheatSpeechRecognitionWithAssetConfig:(id)arg1 modelOverrideURL:(id)arg2;	// IMP=0x000000000003a550
- (void)preheatSpeechRecognitionWithLanguage:(id)arg1 modelOverrideURL:(id)arg2;	// IMP=0x0000000000039f10
- (id)_synchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039df0
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039ae0
- (id)_service;	// IMP=0x0000000000039a70
- (id)_connection;	// IMP=0x0000000000039490
- (id)_newConnection;	// IMP=0x0000000000039340
- (void)dealloc;	// IMP=0x0000000000039240
- (id)init;	// IMP=0x0000000000039210
- (id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char [16])arg2;	// IMP=0x0000000000039100

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
