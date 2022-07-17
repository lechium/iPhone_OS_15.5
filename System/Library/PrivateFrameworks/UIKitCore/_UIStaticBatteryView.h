//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UIStaticBatteryView
{
    long long _inflightBoltAnimationCount;	// 8 = 0x8
}

+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(struct CGSize)arg4 inRect:(struct CGRect)arg5 boltFlipped:(_Bool)arg6;	// IMP=0x000000000072bbdb
+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3;	// IMP=0x000000000072b9ff
+ (id)_batteryBoltMaskImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;	// IMP=0x000000000072b814
+ (id)_batteryBoltImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;	// IMP=0x000000000072b61b
+ (id)_batteryPinImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 complexPinPath:(_Bool)arg3;	// IMP=0x000000000072b45e
+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(struct CGSize)arg6 inRect:(struct CGRect)arg7 boltFlipped:(_Bool)arg8;	// IMP=0x000000000072b148
+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5;	// IMP=0x000000000072af35
+ (id)_renderedImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withActions:(CDUnknownBlockType)arg3;	// IMP=0x000000000072adc8
+ (id)_imageByPunchingImage:(id)arg1 inRect:(struct CGRect)arg2 flippedHorizontally:(_Bool)arg3 outOfImage:(id)arg4 inRect:(struct CGRect)arg5 size:(struct CGSize)arg6 scale:(double)arg7;	// IMP=0x000000000072abfd
+ (id)_imageWithRenderedBezierPath:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(_Bool)arg5;	// IMP=0x000000000072aad2
- (void)_didFinishAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x000000000072aa51
- (void)_willBeginAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x000000000072a9d0
- (_Bool)_useImagesWithCutoutsForBolt;	// IMP=0x000000000072a9ac
- (double)_batteryPathScaleFactor;	// IMP=0x000000000072a945
- (double)_batteryBoltSmallScaleFactor;	// IMP=0x000000000072a937
- (double)_batteryBoltLargeScaleFactor;	// IMP=0x000000000072a929
- (void)_updateBatteryFillColor;	// IMP=0x000000000072a8a2
- (void)_updateBodyColors;	// IMP=0x000000000072a73e
- (void)_updateFillLayer;	// IMP=0x000000000072a438
- (struct CGRect)_updateBodyLayers;	// IMP=0x0000000000729f08
- (struct CGRect)_boltRectForTraitCollection:(id)arg1 boltSize:(struct CGSize)arg2;	// IMP=0x0000000000729e15
- (struct CGSize)_boltPathSize;	// IMP=0x0000000000729d78
- (void)_createBoltLayersWithSize:(struct CGSize)arg1;	// IMP=0x0000000000729ad1
- (void)_createFillLayer;	// IMP=0x00000000007299fb
- (void)_createBodyLayers;	// IMP=0x00000000007298c2

@end
