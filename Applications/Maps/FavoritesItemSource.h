//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, _TtC8MapsSync32MapsSyncCollectionPlaceItemQuery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FavoritesItemSource
{
    _TtC8MapsSync32MapsSyncCollectionPlaceItemQuery *_placesQuery;	// 8 = 0x8
    NSArray *_queryContents;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_updateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lockQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_placesQueryQueue;	// 40 = 0x28
    NSArray *_allItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000010f0c4
- (void)_reloadFavorites;	// IMP=0x001000000010eb75
- (id)allItems;	// IMP=0x001000000010ea4f
- (void)userDefaultsDidChange:(id)arg1;	// IMP=0x001000000010e98a
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x001000000010e7b4
- (id)init;	// IMP=0x001000000010e495

@end

