//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioLimitExceeded, FTCheckForSpeechResponse, FTClientSetupInfo, FTEndPointCandidate, FTEndPointLikelihood, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTServerEndpointFeatures, FTUpdatedAcousticProfile;

__attribute__((visibility("hidden")))
@interface FTMutableRecognitionStreamingResponse
{
}

@property(copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property(copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property(copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(copy, nonatomic) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property(copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property(copy, nonatomic) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property(copy, nonatomic) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property(copy, nonatomic) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property(copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012400f
- (id)init;	// IMP=0x0000000000123f81

@end
