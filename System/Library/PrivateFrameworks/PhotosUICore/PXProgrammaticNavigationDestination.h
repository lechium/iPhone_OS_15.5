//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollection, PXDisplayCollectionList;

@interface PXProgrammaticNavigationDestination : NSObject
{
    _Bool _renderAlbumAssetsWithDeferredProcessing;	// 8 = 0x8
    id <PXDisplayAsset> _asset;	// 16 = 0x10
    id <PXDisplayAssetCollection> _assetCollection;	// 24 = 0x18
    id <PXDisplayCollectionList> _collectionList;	// 32 = 0x20
    id <PXDisplayCollection> _collection;	// 40 = 0x28
    NSArray *_collectionHierarchy;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    long long _revealMode;	// 64 = 0x40
    NSString *_source;	// 72 = 0x48
    NSString *_assetUUID;	// 80 = 0x50
    NSString *_assetLocalIdentifier;	// 88 = 0x58
    NSString *_assetCollectionUUID;	// 96 = 0x60
    NSString *_assetCollectionLocalIdentifier;	// 104 = 0x68
    long long _assetCollectionType;	// 112 = 0x70
    long long _assetCollectionSubtype;	// 120 = 0x78
    NSString *_collectionListUUID;	// 128 = 0x80
    long long _collectionListType;	// 136 = 0x88
    long long _collectionListSubtype;	// 144 = 0x90
    NSString *_importSourceUUID;	// 152 = 0x98
    PXProgrammaticNavigationDestination *_sidebarBackNavigationRootDestination;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000481f94
@property(readonly, nonatomic) _Bool renderAlbumAssetsWithDeferredProcessing; // @synthesize renderAlbumAssetsWithDeferredProcessing=_renderAlbumAssetsWithDeferredProcessing;
@property(readonly, copy, nonatomic) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination; // @synthesize sidebarBackNavigationRootDestination=_sidebarBackNavigationRootDestination;
@property(readonly, copy, nonatomic) NSString *importSourceUUID; // @synthesize importSourceUUID=_importSourceUUID;
@property(readonly, nonatomic) long long collectionListSubtype; // @synthesize collectionListSubtype=_collectionListSubtype;
@property(readonly, nonatomic) long long collectionListType; // @synthesize collectionListType=_collectionListType;
@property(readonly, copy, nonatomic) NSString *collectionListUUID; // @synthesize collectionListUUID=_collectionListUUID;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
@property(readonly, copy, nonatomic) NSString *assetCollectionLocalIdentifier; // @synthesize assetCollectionLocalIdentifier=_assetCollectionLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *assetCollectionUUID; // @synthesize assetCollectionUUID=_assetCollectionUUID;
@property(readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) long long revealMode; // @synthesize revealMode=_revealMode;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *publicDescription;
- (id)description;	// IMP=0x0000000000481b44
- (unsigned long long)hash;	// IMP=0x00000000004819db
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000481974
- (_Bool)isEqualToNavigationDestination:(id)arg1;	// IMP=0x00000000004815f7
@property(readonly, copy, nonatomic) NSArray *collectionHierarchy; // @synthesize collectionHierarchy=_collectionHierarchy;
@property(readonly, nonatomic) id <PXDisplayCollection> collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) id <PXDisplayCollectionList> collectionList; // @synthesize collectionList=_collectionList;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (id)initWithImportSourceUUID:(id)arg1 revealMode:(long long)arg2;	// IMP=0x0000000000480de7
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 asset:(id)arg3 assetCollection:(id)arg4;	// IMP=0x0000000000480d47
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4;	// IMP=0x0000000000480c8c
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2;	// IMP=0x0000000000480c74
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2 sidebarNavigationBackButtonRootDestination:(id)arg3;	// IMP=0x0000000000480897
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2;	// IMP=0x0000000000480882
- (id)initWithURL:(id)arg1;	// IMP=0x000000000047fdc0

@end

