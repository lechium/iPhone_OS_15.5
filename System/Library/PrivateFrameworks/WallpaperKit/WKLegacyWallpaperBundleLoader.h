//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSFileManager;
@protocol OS_dispatch_queue;

@interface WKLegacyWallpaperBundleLoader : NSObject
{
    NSObject<OS_dispatch_queue> *__loadingQueue;	// 8 = 0x8
    NSFileManager *__fileManager;	// 16 = 0x10
    NSDictionary *__wallpaperBundleLookup;	// 24 = 0x18
}

+ (id)legacyWallpaperDirectories;	// IMP=0x000000000000224b
+ (id)defaultWallpaperBundleLoader;	// IMP=0x0000000000002048
- (void).cxx_destruct;	// IMP=0x0000000000002fb5
@property(retain, nonatomic) NSDictionary *_wallpaperBundleLookup; // @synthesize _wallpaperBundleLookup=__wallpaperBundleLookup;
@property(retain, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // @synthesize _loadingQueue=__loadingQueue;
- (id)wallpaperBundleForIdentifier:(long long)arg1;	// IMP=0x0000000000002cf7
- (void)_loadAllValidWallpaperBundlesFromLegacyLocation;	// IMP=0x00000000000023d1
- (id)init;	// IMP=0x000000000000209d

@end
