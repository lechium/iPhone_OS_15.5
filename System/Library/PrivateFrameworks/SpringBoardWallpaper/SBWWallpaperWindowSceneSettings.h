//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplicationSceneSettings.h>

@class NSString, SBWWallpaperWindowSceneStyleTransitionState;

@interface SBWWallpaperWindowSceneSettings : UIApplicationSceneSettings
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000029c50
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000029ad9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029aab
@property(readonly, nonatomic) _Bool liveWallpaperInteractive;
@property(readonly, nonatomic) _Bool liveWallpaperTouchActive;
@property(readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property(readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property(readonly, copy, nonatomic) NSString *cachingIdentifier;
@property(readonly, nonatomic) _Bool homescreenStyleChangesDelayed;
@property(readonly, nonatomic) _Bool wallpaperRequired;
@property(readonly, nonatomic) _Bool wallpaperAnimationSuspended;
@property(readonly, nonatomic) _Bool colorSamplingSuspended;
@property(readonly, nonatomic) double lockscreenWallpaperScale;
@property(readonly, nonatomic) double homescreenWallpaperScale;
@property(readonly, nonatomic) _Bool lockscreenWallpaperHidden;
@property(readonly, nonatomic) _Bool homescreenWallpaperHidden;
@property(readonly, nonatomic) _Bool disallowLockscreenRasterization;
@property(readonly, nonatomic) _Bool disallowHomescreenRasterization;
@property(readonly, nonatomic) double lockscreenOnlyWallpaperAlpha;
@property(readonly, nonatomic) double homescreenWallpaperAlpha;
@property(readonly, nonatomic) double lockscreenWallpaperAlpha;
@property(readonly, nonatomic) struct CGRect lockscreenWallpaperContentsRect;
@property(readonly, nonatomic) long long wallpaperVariant;

@end

