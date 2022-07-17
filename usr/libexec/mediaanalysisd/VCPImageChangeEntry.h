//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPImageChangeEntry : NSObject
{
    short _audioClassification;	// 8 = 0x8
    float _autoplayScore;	// 12 = 0xc
    PHAsset *_asset;	// 16 = 0x10
    unsigned long long _faceCount;	// 24 = 0x18
    unsigned long long _loopSuggestionState;	// 32 = 0x20
    unsigned long long _longExposureSuggestionState;	// 40 = 0x28
    NSDictionary *_humanActions;	// 48 = 0x30
    CDStruct_1b6d18a9 _keyFrameTime;	// 56 = 0x38
    struct CGRect _bestPlaybackRect;	// 80 = 0x50
    CDStruct_e83c9415 _summaryTimeRange;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000080141
@property(retain, nonatomic) NSDictionary *humanActions; // @synthesize humanActions=_humanActions;
@property(nonatomic) struct CGRect bestPlaybackRect; // @synthesize bestPlaybackRect=_bestPlaybackRect;
@property(nonatomic) short audioClassification; // @synthesize audioClassification=_audioClassification;
@property(nonatomic) CDStruct_1b6d18a9 keyFrameTime; // @synthesize keyFrameTime=_keyFrameTime;
@property(nonatomic) unsigned long long longExposureSuggestionState; // @synthesize longExposureSuggestionState=_longExposureSuggestionState;
@property(nonatomic) unsigned long long loopSuggestionState; // @synthesize loopSuggestionState=_loopSuggestionState;
@property(nonatomic) float autoplayScore; // @synthesize autoplayScore=_autoplayScore;
@property(nonatomic) CDStruct_e83c9415 summaryTimeRange; // @synthesize summaryTimeRange=_summaryTimeRange;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (_Bool)canPublishLivePhotoVariationSuggestion;	// IMP=0x001000000007ff8e
- (void)publish;	// IMP=0x001000000007f896

@end
