//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXDisplayAssetFetchResult, PXStoryClipComposition, PXStoryDisplayAssetCroppingContext, PXStoryTimelineSpec;

@interface PXStoryClipKenBurnsEffectFactory : NSObject
{
    struct CGRect _bounds;	// 8 = 0x8
    long long _clipCount;	// 40 = 0x28
    long long _clipCapacity;	// 48 = 0x30
    struct CGRect *_clipFrames;	// 56 = 0x38
    struct UIEdgeInsets *_clipSafeAreaInsets;	// 64 = 0x40
    struct CGSize *_clipAssetSizes;	// 72 = 0x48
    struct CGRect *_clipSuggestedCrops;	// 80 = 0x50
    struct CGAffineTransform *_clipSourceTransforms;	// 88 = 0x58
    struct CGAffineTransform *_clipTargetTransforms;	// 96 = 0x60
    _Bool _shouldFitSourceAndTargetIndependently;	// 104 = 0x68
    long long _assetCapacity;	// 112 = 0x70
    CDStruct_4cef5b45 *_assetContentInfos;	// 120 = 0x78
    long long *_assetPlaybackStyles;	// 128 = 0x80
    id <PXStoryTimelineSpec> _spec;	// 136 = 0x88
    id <PXStoryClipComposition> _clipComposition;	// 144 = 0x90
    id <PXDisplayAssetFetchResult> _displayAssets;	// 152 = 0x98
    id <PXStoryDisplayAssetCroppingContext> _croppingContext;	// 160 = 0xa0
    unsigned long long _croppingOptions;	// 168 = 0xa8
    long long _numberOfParameters;	// 176 = 0xb0
}

+ (void)factoryForSpec:(id)arg1 clipComposition:(id)arg2 displayAssets:(id)arg3 croppingContext:(id)arg4 croppingOptions:(unsigned long long)arg5 assetContentInfos:(const CDStruct_4cef5b45 *)arg6 playbackStyles:(const long long *)arg7 separatorEffectParameters:(const CDStruct_5eb12be8 *)arg8 handler:(CDUnknownBlockType)arg9;	// IMP=0x0000000000496840
- (void).cxx_destruct;	// IMP=0x0000000000496069
@property(readonly, nonatomic) long long numberOfParameters; // @synthesize numberOfParameters=_numberOfParameters;
@property(readonly, nonatomic) unsigned long long croppingOptions; // @synthesize croppingOptions=_croppingOptions;
@property(readonly, nonatomic) id <PXStoryDisplayAssetCroppingContext> croppingContext; // @synthesize croppingContext=_croppingContext;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> displayAssets; // @synthesize displayAssets=_displayAssets;
@property(readonly, nonatomic) id <PXStoryClipComposition> clipComposition; // @synthesize clipComposition=_clipComposition;
@property(readonly, nonatomic) id <PXStoryTimelineSpec> spec; // @synthesize spec=_spec;
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forRotationWithAngle:(double)arg2 scale:(double)arg3 relativeTransformOrigin:(struct CGPoint)arg4;	// IMP=0x0000000000495fbb
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forRotationWithAngle:(double)arg2 scale:(double)arg3;	// IMP=0x0000000000495f9b
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forSplitAssetOppositePansWithDistance:(double)arg2;	// IMP=0x00000000004957fc
- (void)_configureClipAtIndex:(long long)arg1 forPanWithCameraMovingTowardsEdge:(unsigned int)arg2 distance:(double)arg3;	// IMP=0x00000000004956e9
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forParallelPansWithDistance:(double)arg2;	// IMP=0x00000000004955fd
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forOppositePansWithDistance:(double)arg2;	// IMP=0x0000000000495511
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forPanWithCameraMovingTowardsEdge:(unsigned int)arg2 distance:(double)arg3;	// IMP=0x000000000049541c
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forZoomWithScale:(double)arg2 relativeTransformOrigin:(struct CGPoint)arg3;	// IMP=0x00000000004953c1
- (void)getParameters:(out CDStruct_f7388bc9 *)arg1 forZoomWithScale:(double)arg2;	// IMP=0x00000000004953a4
- (void)getParametersForNoEffect:(out CDStruct_f7388bc9 *)arg1;	// IMP=0x0000000000495358
- (void)_getParameters:(out CDStruct_f7388bc9 *)arg1 forConfiguration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000494126
- (void)_configureWithSpec:(id)arg1 clipComposition:(id)arg2 displayAssets:(id)arg3 croppingContext:(id)arg4 croppingOptions:(unsigned long long)arg5 assetContentInfos:(const CDStruct_4cef5b45 *)arg6 playbackStyles:(const long long *)arg7 separatorEffectParameters:(const CDStruct_5eb12be8 *)arg8;	// IMP=0x0000000000493c05
- (void)dealloc;	// IMP=0x0000000000493b89
- (id)_init;	// IMP=0x0000000000493b5a
- (id)init;	// IMP=0x0000000000493ae0

@end
