//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBFWallpaperParallaxSettings
{
    double _overhangX;	// 104 = 0x68
    double _overhangY;	// 112 = 0x70
    double _perspectiveTransform;	// 120 = 0x78
}

+ (id)settingsControllerModule;	// IMP=0x00000000000373f2
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2;	// IMP=0x000000000003739b
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3;	// IMP=0x0000000000037344
+ (struct CGSize)overhangSizeForDeviceType:(long long)arg1;	// IMP=0x00000000000372f5
+ (struct CGSize)overhangSizeForCurrentDevice;	// IMP=0x00000000000372ab
+ (struct CGSize)minimumWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2;	// IMP=0x000000000003722d
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;	// IMP=0x0000000000037159
+ (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(_Bool)arg4;	// IMP=0x000000000003710f
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(_Bool)arg2;	// IMP=0x000000000003703b
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1;	// IMP=0x0000000000036fe5
+ (struct CGSize)_requiredOverhangSizeForDeviceType:(long long)arg1;	// IMP=0x0000000000036f16
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;	// IMP=0x0000000000036ee5
+ (long long)_currentDeviceType;	// IMP=0x0000000000036e82
@property double perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property double overhangY; // @synthesize overhangY=_overhangY;
@property double overhangX; // @synthesize overhangX=_overhangX;
- (void)setDefaultValues;	// IMP=0x0000000000036f5b

@end

