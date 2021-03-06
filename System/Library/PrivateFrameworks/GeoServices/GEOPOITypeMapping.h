//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManager, GEOResourceManifestManager, NSDictionary, NSSet, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSSet *_alwaysVisibleTypes;	// 8 = 0x8
    NSDictionary *_categoryToTypeMapping;	// 16 = 0x10
    NSDictionary *_typeToCategoryMapping;	// 24 = 0x18
    geo_isolater *_accessLock;	// 32 = 0x20
    GEOResourceManifestManager *_manifestManager;	// 40 = 0x28
    GEOResourceManager *_resourceManager;	// 48 = 0x30
}

+ (id)sharedMapping;	// IMP=0x000000000124e5ca
- (void).cxx_destruct;	// IMP=0x000000000124ff05
- (void)clearCachedValues;	// IMP=0x000000000124fe6a
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000124fe58
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000124fe46
- (id)typeToCategoryMapping;	// IMP=0x000000000124fd0b
- (id)categoryToTypeMapping;	// IMP=0x000000000124fbd0
- (id)alwaysVisibleTypes;	// IMP=0x000000000124fa70
- (_Bool)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id *)arg2 POITypeToCategory:(id *)arg3;	// IMP=0x000000000124f413
- (id)parseVisiblePOITypesJSON:(id)arg1;	// IMP=0x000000000124f188
- (void)parsePOICategoriesJSON:(id)arg1;	// IMP=0x000000000124ed9f
- (void)loadPOICategoriesJSON;	// IMP=0x000000000124eaf5
- (id)typesForPOICategories:(id)arg1;	// IMP=0x000000000124e90f
- (id)categoryForPOIType:(int)arg1;	// IMP=0x000000000124e888
- (_Bool)isAlwaysVisiblePOIType:(int)arg1;	// IMP=0x000000000124e80d
- (void)_tearDown;	// IMP=0x000000000124e7d8
- (void)dealloc;	// IMP=0x000000000124e79a
- (id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2;	// IMP=0x000000000124e6be
- (id)init;	// IMP=0x000000000124e694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

