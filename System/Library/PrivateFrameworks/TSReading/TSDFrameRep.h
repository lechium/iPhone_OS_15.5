//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSArray, TSDBitmapImageProvider, TSDFrame;

@interface TSDFrameRep : NSObject
{
    TSDFrame *mFrame;	// 8 = 0x8
    NSArray *mImages;	// 16 = 0x10
    NSArray *mMasks;	// 24 = 0x18
    TSDBitmapImageProvider *mAdornment;	// 32 = 0x20
    CALayer *mMaskLayer;	// 40 = 0x28
    _Bool mShouldEnableBlendMode;	// 48 = 0x30
}

- (void)p_adjustRepeatingLayer:(id)arg1 withImageRect:(struct CGRect)arg2 start:(double)arg3 end:(double)arg4 vertical:(_Bool)arg5;	// IMP=0x00000000001d00f2
- (void)p_setRepeatingLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4 start:(double)arg5 end:(double)arg6;	// IMP=0x00000000001d0010
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4;	// IMP=0x00000000001cfead
- (id)p_createRepeatingLayerWithImage:(struct CGImage *)arg1 vertical:(_Bool)arg2 screenScale:(double)arg3;	// IMP=0x00000000001cfcee
- (void)p_addEdgeLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;	// IMP=0x00000000001cfb7e
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;	// IMP=0x00000000001cf912
- (void)p_drawTiles:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 start:(double)arg4 end:(double)arg5 vertical:(_Bool)arg6;	// IMP=0x00000000001cf5e9
- (void)p_drawFrameIntoRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withImages:(id)arg3 atViewScale:(double)arg4 isMask:(_Bool)arg5;	// IMP=0x00000000001cee66
- (struct CGImage *)p_newRenderedFrameForMask:(_Bool)arg1 size:(struct CGSize)arg2 forCALayer:(_Bool)arg3 viewScale:(double)arg4;	// IMP=0x00000000001ce861
- (struct CGImage *)p_newFrameForMask:(_Bool)arg1 size:(struct CGSize)arg2 forCALayer:(_Bool)arg3 viewScale:(double)arg4;	// IMP=0x00000000001ce771
- (void)updateCALayer:(id)arg1 toRect:(struct CGRect)arg2 withRepLayer:(id)arg3 maskLayer:(id)arg4 viewScale:(double)arg5 maskLayerTransform:(struct CGAffineTransform)arg6;	// IMP=0x00000000001cd2ef
- (id)applyToCALayer:(id)arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(double)arg4;	// IMP=0x00000000001cd01b
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg1;	// IMP=0x00000000001ccffd
- (void)applyMaskForRectWithCoverage:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;	// IMP=0x00000000001ccef7
- (void)frameRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withTotalScale:(double)arg3;	// IMP=0x00000000001ccce8
- (id)frame;	// IMP=0x00000000001cccde
- (void)dealloc;	// IMP=0x00000000001ccc23
- (id)initWithTSDFrame:(id)arg1;	// IMP=0x00000000001cc828

@end

