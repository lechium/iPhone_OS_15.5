//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PXMediaProvider;
@protocol PXDisplayAsset;

@interface PXGridInlinePlaybackRecord : NSObject
{
    _Bool _isInvalid;	// 8 = 0x8
    float _videoScore;	// 12 = 0xc
    float _curationScore;	// 16 = 0x10
    id <PXDisplayAsset> _displayAsset;	// 24 = 0x18
    PXMediaProvider *_mediaProvider;	// 32 = 0x20
    id _geometryReference;	// 40 = 0x28
    long long _desiredPlayState;	// 48 = 0x30
    long long _visibilityScore;	// 56 = 0x38
    double _distanceToCenterScore;	// 64 = 0x40
    double _cellSizeScore;	// 72 = 0x48
    NSString *_diagnosticLog;	// 80 = 0x50
    CDStruct_e83c9415 _bestVideoTimeRange;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000069b88c
@property(copy) NSString *diagnosticLog; // @synthesize diagnosticLog=_diagnosticLog;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) double cellSizeScore; // @synthesize cellSizeScore=_cellSizeScore;
@property(nonatomic) double distanceToCenterScore; // @synthesize distanceToCenterScore=_distanceToCenterScore;
@property(nonatomic) long long visibilityScore; // @synthesize visibilityScore=_visibilityScore;
@property(readonly, nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) float videoScore; // @synthesize videoScore=_videoScore;
@property(readonly, nonatomic) CDStruct_e83c9415 bestVideoTimeRange; // @synthesize bestVideoTimeRange=_bestVideoTimeRange;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(readonly, nonatomic) id geometryReference; // @synthesize geometryReference=_geometryReference;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> displayAsset; // @synthesize displayAsset=_displayAsset;
- (id)description;	// IMP=0x000000000069b6bd
@property(readonly, copy) NSString *diagnosticScoresDescription;
- (void)prepareForInvisible;	// IMP=0x000000000069b599
- (void)prepareForVisible;	// IMP=0x000000000069b593
@property(readonly, nonatomic) _Bool isPlaying;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;	// IMP=0x000000000069b220

@end
