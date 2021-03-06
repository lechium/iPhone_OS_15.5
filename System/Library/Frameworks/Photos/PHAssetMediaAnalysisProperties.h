//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate;

@interface PHAssetMediaAnalysisProperties
{
    short _audioClassification;	// 16 = 0x10
    short _probableRotationDirection;	// 18 = 0x12
    short _screenTimeDeviceImageSensitivity;	// 20 = 0x14
    unsigned short _syndicationProcessingValue;	// 22 = 0x16
    float _blurrinessScore;	// 24 = 0x18
    float _exposureScore;	// 28 = 0x1c
    float _autoplaySuggestionScore;	// 32 = 0x20
    float _videoScore;	// 36 = 0x24
    float _activityScore;	// 40 = 0x28
    float _probableRotationDirectionConfidence;	// 44 = 0x2c
    NSDate *_mediaAnalysisTimeStamp;	// 48 = 0x30
    unsigned long long _mediaAnalysisVersion;	// 56 = 0x38
    unsigned long long _faceCount;	// 64 = 0x40
    NSData *_colorNormalizationData;	// 72 = 0x48
    unsigned long long _syndicationProcessingVersion;	// 80 = 0x50
    CDStruct_1b6d18a9 _bestKeyFrameTime;	// 88 = 0x58
    struct CGRect _bestPlaybackRect;	// 112 = 0x70
    CDStruct_e83c9415 _bestVideoTimeRange;	// 144 = 0x90
}

+ (id)additionalPropertiesToFetchOnPrimaryObject;	// IMP=0x00000000001077b7
+ (id)propertiesToFetch;	// IMP=0x0000000000107793
+ (id)entityName;	// IMP=0x0000000000107786
+ (id)keyPathToPrimaryObject;	// IMP=0x0000000000107779
+ (id)keyPathFromPrimaryObject;	// IMP=0x000000000010776c
+ (id)propertySetName;	// IMP=0x000000000010775f
- (void).cxx_destruct;	// IMP=0x000000000010772e
@property(readonly, nonatomic) unsigned long long syndicationProcessingVersion; // @synthesize syndicationProcessingVersion=_syndicationProcessingVersion;
@property(readonly, nonatomic) unsigned short syndicationProcessingValue; // @synthesize syndicationProcessingValue=_syndicationProcessingValue;
@property(readonly, nonatomic) short screenTimeDeviceImageSensitivity; // @synthesize screenTimeDeviceImageSensitivity=_screenTimeDeviceImageSensitivity;
@property(readonly, nonatomic) NSData *colorNormalizationData; // @synthesize colorNormalizationData=_colorNormalizationData;
@property(readonly, nonatomic) float probableRotationDirectionConfidence; // @synthesize probableRotationDirectionConfidence=_probableRotationDirectionConfidence;
@property(readonly, nonatomic) short probableRotationDirection; // @synthesize probableRotationDirection=_probableRotationDirection;
@property(readonly, nonatomic) short audioClassification; // @synthesize audioClassification=_audioClassification;
@property(readonly, nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(readonly, nonatomic) float activityScore; // @synthesize activityScore=_activityScore;
@property(readonly, nonatomic) float videoScore; // @synthesize videoScore=_videoScore;
@property(readonly, nonatomic) float autoplaySuggestionScore; // @synthesize autoplaySuggestionScore=_autoplaySuggestionScore;
@property(readonly, nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(readonly, nonatomic) float blurrinessScore; // @synthesize blurrinessScore=_blurrinessScore;
@property(readonly, nonatomic) unsigned long long mediaAnalysisVersion; // @synthesize mediaAnalysisVersion=_mediaAnalysisVersion;
@property(readonly, nonatomic) NSDate *mediaAnalysisTimeStamp; // @synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp;
@property(readonly, nonatomic) struct CGRect bestPlaybackRect; // @synthesize bestPlaybackRect=_bestPlaybackRect;
@property(readonly, nonatomic) CDStruct_e83c9415 bestVideoTimeRange; // @synthesize bestVideoTimeRange=_bestVideoTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 bestKeyFrameTime; // @synthesize bestKeyFrameTime=_bestKeyFrameTime;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x0000000000106a63
- (void)initWithDefaultValues;	// IMP=0x0000000000106930

@end

