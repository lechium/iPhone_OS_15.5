//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface WKWallpaperBundleImporter : NSObject
{
    NSObject<OS_dispatch_queue> *__bundleImportQueue;	// 8 = 0x8
    NSArray *__wallpaperTypesOrdering;	// 16 = 0x10
    NSDictionary *__wallpaperTypeToBundleCollection;	// 24 = 0x18
}

+ (id)wallpapersConfigurationFileURL;	// IMP=0x00000000000196bb
+ (id)defaultWallpaperBundleImporter;	// IMP=0x0000000000018e3c
- (void).cxx_destruct;	// IMP=0x000000000001a9b9
@property(retain, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection; // @synthesize _wallpaperTypeToBundleCollection=__wallpaperTypeToBundleCollection;
@property(retain, nonatomic) NSArray *_wallpaperTypesOrdering; // @synthesize _wallpaperTypesOrdering=__wallpaperTypesOrdering;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue; // @synthesize _bundleImportQueue=__bundleImportQueue;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1;	// IMP=0x000000000001a84e
- (void)_loadWallpapersFromDisk;	// IMP=0x000000000001978c
- (id)wallpaperBundleWithIdentifier:(long long)arg1;	// IMP=0x00000000000193c5
- (id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1;	// IMP=0x00000000000191b4
- (unsigned long long)wallpaperTypeAtIndex:(long long)arg1;	// IMP=0x0000000000019005
@property(readonly, nonatomic) long long numberOfWallpaperBundleCollections;
- (id)init;	// IMP=0x0000000000018cd8

@end

