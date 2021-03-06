//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBWallpaperDefaults;

@interface SBWallpaperAggdLogger : NSObject
{
    long long _aggd_lockscreenWallpaperType;	// 8 = 0x8
    long long _aggd_lockscreenWallpaperIdentifier;	// 16 = 0x10
    long long _aggd_homescreenWallpaperType;	// 24 = 0x18
    long long _aggd_homescreenWallpaperIdentifier;	// 32 = 0x20
    long long _aggd_irisWallpaperEnabled;	// 40 = 0x28
    long long _aggd_sharedWallpaper;	// 48 = 0x30
    SBWallpaperDefaults *_wallpaperDefaults;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002a005a
- (void)_resetPlayCountDate;	// IMP=0x00000000002a0006
- (unsigned long long)_bucketedPlayCount;	// IMP=0x000000000029ffb6
- (id)_valueString;	// IMP=0x000000000029ff6b
- (void)_clearAggdKeysForLocations:(long long)arg1;	// IMP=0x000000000029ff39
- (void)incrementIrisPlayCount;	// IMP=0x000000000029fdfb
- (void)saveWallpaperAggdCurrentValues;	// IMP=0x000000000029fd65
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(_Bool)arg2 hasProcedural:(_Bool)arg3 name:(id)arg4;	// IMP=0x000000000029fc8d
- (id)init;	// IMP=0x000000000029fc22

@end

