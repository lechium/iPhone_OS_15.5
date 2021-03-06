//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

@class UIColor, _UILegibilitySettings;

@interface SBWMutableWallpaperWindowSceneClientSettings : UIMutableApplicationSceneClientSettings
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000021b5c
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000021afd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021acf
@property(nonatomic) long long liveWallpaperPlaybackState;
@property(nonatomic, getter=isLockscreenContentLiveWallpaper) _Bool lockscreenContentLiveWallpaper;
@property(nonatomic, getter=isLockscreenContentStatic) _Bool lockscreenContentStatic;
@property(nonatomic, getter=isHomescreenContentStatic) _Bool homescreenContentStatic;
@property(nonatomic) double lockscreenZoomFactor;
@property(nonatomic) double homescreenZoomFactor;
@property(nonatomic) _Bool lockscreenParallaxEnabled;
@property(nonatomic) _Bool homescreenParallaxEnabled;
@property(nonatomic) double lockscreenParallaxFactor;
@property(nonatomic) double homescreenParallaxFactor;
@property(nonatomic) double lockscreenContrast;
@property(nonatomic) double homescreenContrast;
@property(copy, nonatomic) UIColor *lockscreenAverageColor;
@property(copy, nonatomic) UIColor *homescreenAverageColor;
@property(copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property(copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property(nonatomic) double lockscreenMinimumWallpaperScale;
@property(nonatomic) double homescreenMinimumWallpaperScale;

@end

