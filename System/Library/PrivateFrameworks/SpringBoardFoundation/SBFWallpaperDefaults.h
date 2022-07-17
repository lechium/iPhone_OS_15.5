//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject
{
    SBWallpaperDefaults *_defaultsStore;	// 8 = 0x8
}

+ (id)defaults;	// IMP=0x0000000000047330
- (void).cxx_destruct;	// IMP=0x00000000000496b2
@property(readonly, nonatomic) SBWallpaperDefaults *defaultsStore; // @synthesize defaultsStore=_defaultsStore;
- (_Bool)proceduralUserSetForVariant:(long long)arg1;	// IMP=0x0000000000049662
- (void)setProceduralUserSet:(_Bool)arg1 forLocations:(long long)arg2;	// IMP=0x00000000000495a1
- (id)proceduralOptionsForVariant:(long long)arg1;	// IMP=0x000000000004954f
- (void)setProceduralOptions:(id)arg1 forLocations:(long long)arg2;	// IMP=0x000000000004942d
- (id)proceduralIdentifierForVariant:(long long)arg1;	// IMP=0x00000000000493db
- (void)setProceduralIdentifier:(id)arg1 forLocations:(long long)arg2;	// IMP=0x00000000000492b9
- (id)wallpaperGradientDataForVariant:(long long)arg1;	// IMP=0x0000000000049267
- (void)setGradientData:(id)arg1 forLocations:(long long)arg2;	// IMP=0x0000000000049145
- (id)wallpaperColorNameForVariant:(long long)arg1;	// IMP=0x00000000000490f3
- (void)setColorName:(id)arg1 forLocations:(long long)arg2;	// IMP=0x0000000000048fd1
- (id)wallpaperColorDataForVariant:(long long)arg1;	// IMP=0x0000000000048f7f
- (void)setColorData:(id)arg1 forLocations:(long long)arg2;	// IMP=0x0000000000048e5d
- (double)stillTimeInVideoForVariant:(long long)arg1;	// IMP=0x0000000000048e0b
- (double)stillTimeInVideo;	// IMP=0x0000000000048df7
- (void)setStillTimeInVideo:(double)arg1;	// IMP=0x0000000000048d88
- (void)resetStillTimeInVideoDefaults;	// IMP=0x0000000000048d73
- (_Bool)hasVideoForVariant:(long long)arg1;	// IMP=0x0000000000048d2d
- (_Bool)hasVideo;	// IMP=0x0000000000048d19
- (void)setHasVideo:(_Bool)arg1;	// IMP=0x0000000000048cad
- (void)resetHasVideoDefaults;	// IMP=0x0000000000048c99
- (id)imageHashForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048c3e
- (void)setImageHash:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000048b08
- (void)resetImageHashDefaults;	// IMP=0x0000000000048ad3
- (id)nameForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048a78
- (void)setName:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000048942
- (void)resetNameDefaults;	// IMP=0x000000000004890d
- (_Bool)isPortraitForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x00000000000488c9
- (void)setPortrait:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000048802
- (void)resetPortraitDefaults;	// IMP=0x00000000000487ca
- (_Bool)magnifyEnabledForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048786
- (void)setMagnifyEnabled:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x000000000004868a
- (void)resetMagnifyDefaults;	// IMP=0x0000000000048655
- (_Bool)supportsCroppingForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048611
- (void)setSupportsCropping:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000048515
- (struct CGRect)cropRectForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x00000000000484b1
- (void)setCropRect:(struct CGRect)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x00000000000483bc
- (void)resetCroppingDefaults;	// IMP=0x0000000000048322
- (double)zoomScaleForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x00000000000482d2
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000048204
- (void)resetZoomScaleDefaults;	// IMP=0x00000000000481c9
- (double)parallaxFactorForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048179
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x00000000000480ab
- (void)resetParallaxFactorDefaults;	// IMP=0x0000000000048070
- (id)wallpaperKitDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000048020
- (void)setWallpaperKitData:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000047eea
- (void)resetWallpaperKitDataDefaults;	// IMP=0x0000000000047eb5
- (id)_keyForWallpaperMode:(long long)arg1;	// IMP=0x0000000000047e91
- (void)_setDefaultsWithDictionary:(id)arg1 variant:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x0000000000047d17
- (id)_defaultsWrapperForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x0000000000047c26
- (void)_updateDefaultsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 updater:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047b70
- (void)updateDefaultsForLocations:(long long)arg1 updater:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047a94
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;	// IMP=0x00000000000478b0
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;	// IMP=0x00000000000476b8
- (void)resetDefaults;	// IMP=0x0000000000047622
- (id)description;	// IMP=0x0000000000047460
- (id)init;	// IMP=0x0000000000047420
- (id)initWithDefaultsStore:(id)arg1;	// IMP=0x00000000000473b5

@end
