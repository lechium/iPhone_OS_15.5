//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSRTriggerPhraseDetectorNDAPI, SSRTriggerPhraseDetectorQuasar;

@interface SSRTriggerPhraseDetector : NSObject
{
    float _recognizerScoreScaleFactor;	// 8 = 0x8
    SSRTriggerPhraseDetectorNDAPI *_detectorNDAPI;	// 16 = 0x10
    SSRTriggerPhraseDetectorQuasar *_detectorQuasar;	// 24 = 0x18
}

+ (id)filterVTAudioFiles:(id)arg1 withLocale:(id)arg2 withAsset:(id)arg3;	// IMP=0x000000000000cea5
- (void).cxx_destruct;	// IMP=0x000000000000e2fc
@property(nonatomic) float recognizerScoreScaleFactor; // @synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor;
@property(retain, nonatomic) SSRTriggerPhraseDetectorQuasar *detectorQuasar; // @synthesize detectorQuasar=_detectorQuasar;
@property(retain, nonatomic) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI; // @synthesize detectorNDAPI=_detectorNDAPI;
- (void)computeTriggerConfidenceForAudio:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d751
- (id)initWithLocale:(id)arg1 asset:(id)arg2;	// IMP=0x000000000000d523

@end
