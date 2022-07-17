//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAudioLimitExceeded, FTClientSetupInfo, FTFinalBlazarResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTServerEndpointFeatures, FTSpeechTranslationFinalRecognitionResponse, FTSpeechTranslationMtResponse, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationServerEndpointFeatures, FTSpeechTranslationTextToSpeechResponse, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dd911
- (id)flatbuffData;	// IMP=0x00000000000dd799
- (Offset_3523418e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000dd158
@property(readonly, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property(readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property(readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property(readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property(readonly, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property(readonly, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc63f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000dc471
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingResponse *)arg2;	// IMP=0x00000000000dc45b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000dc440
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000dc428

@end
