//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VMConfiguration : NSObject
{
}

+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg1;	// IMP=0x0000000000009dd6
+ (id)confidenceThresholdFromAssetForKey:(id)arg1;	// IMP=0x0000000000009ab3
+ (id)confidenceSegmentThresholdFromAsset;	// IMP=0x0000000000009a9a
+ (id)confidenceLowQualityThresholdFromAsset;	// IMP=0x0000000000009a81
+ (id)confidenceThresholdFromAsset;	// IMP=0x0000000000009a68
+ (id)confidenceThresholdFromDefaultsForKey:(id)arg1;	// IMP=0x0000000000009a1f
+ (float)confidenceSegmentThreshold;	// IMP=0x00000000000098bb
+ (float)confidenceLowQualityThreshold;	// IMP=0x0000000000009757
+ (float)confidenceThreshold;	// IMP=0x00000000000095f3
+ (id)localeForTranscriptionLanguage;	// IMP=0x00000000000094c5

@end

