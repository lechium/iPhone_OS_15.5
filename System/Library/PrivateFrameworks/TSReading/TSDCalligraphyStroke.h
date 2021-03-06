//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDCalligraphyStroke
{
}

+ (Class)mutableClass;	// IMP=0x0000000000109347
- (double)horizontalMarginForSwatch;	// IMP=0x0000000000109d40
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;	// IMP=0x0000000000109c40
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;	// IMP=0x000000000010992b
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6;	// IMP=0x0000000000109768
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;	// IMP=0x0000000000109717
- (struct CGAffineTransform)transformInContext:(struct CGContext *)arg1;	// IMP=0x0000000000109527
- (struct CGRect)boundsForPath:(id)arg1;	// IMP=0x000000000010949c
- (struct CGRect)p_superBoundsForPath:(id)arg1;	// IMP=0x0000000000109465
- (_Bool)drawsOutsideStrokeBounds;	// IMP=0x000000000010945d
- (_Bool)drawsInOneStep;	// IMP=0x0000000000109455
- (_Bool)prefersToApplyToShapeRenderableDuringManipulation;	// IMP=0x000000000010944d
- (_Bool)canApplyToShapeRenderable;	// IMP=0x0000000000109445
@property(readonly, nonatomic) _Bool chisel;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double angle;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000109363
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000109358
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;	// IMP=0x00000000001092fe

@end

