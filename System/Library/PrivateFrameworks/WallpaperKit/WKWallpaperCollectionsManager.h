//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMapTable, NSMutableArray, NSNotificationCenter;

@interface WKWallpaperCollectionsManager : NSObject
{
    NSFileManager *__fileManager;	// 8 = 0x8
    NSNotificationCenter *__notificationCenter;	// 16 = 0x10
    NSMutableArray *__wallpaperCollections;	// 24 = 0x18
    NSMapTable *__wallpaperCollectionLookupTable;	// 32 = 0x20
}

+ (id)defaultWallpaperCollectionsManager;	// IMP=0x000000000001d6b3
- (void).cxx_destruct;	// IMP=0x000000000001d8d2
@property(retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable; // @synthesize _wallpaperCollectionLookupTable=__wallpaperCollectionLookupTable;
@property(retain, nonatomic) NSMutableArray *_wallpaperCollections; // @synthesize _wallpaperCollections=__wallpaperCollections;
@property(retain, nonatomic) NSNotificationCenter *_notificationCenter; // @synthesize _notificationCenter=__notificationCenter;
@property(retain, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
- (id)wallpaperCollectionWithIdentifier:(id)arg1;	// IMP=0x000000000001d7e3
- (id)wallpaperCollectionAtIndex:(long long)arg1;	// IMP=0x000000000001d784
@property(readonly, nonatomic) long long numberOfWallpaperCollections;
- (void)_loadSystemWallpaperCollections;	// IMP=0x000000000001c849
- (void)_loadCollections;	// IMP=0x000000000001c644
- (id)init;	// IMP=0x000000000001c551

@end
