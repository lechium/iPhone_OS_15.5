//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SearchDotPlacesItemSource
{
    _Bool _shouldHideSearchDotPlaces;	// 8 = 0x8
    NSArray *_allItems;	// 16 = 0x10
    NSArray *_searchDotPlaces;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lockQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000860dd0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(nonatomic) _Bool shouldHideSearchDotPlaces; // @synthesize shouldHideSearchDotPlaces=_shouldHideSearchDotPlaces;
@property(copy, nonatomic) NSArray *searchDotPlaces; // @synthesize searchDotPlaces=_searchDotPlaces;
- (id)allItems;	// IMP=0x001000000086084c
- (id)init;	// IMP=0x00100000008607c3

@end
