//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, MISSING_TYPE, NSArray, NSMutableDictionary;

@interface FREditorialItemEntryManager : NSObject
{
    MISSING_TYPE *_editorialItemsByID;	// 8 = 0x8
    NSArray *_orderedEditorialItemIDs;	// 16 = 0x10
    FCKeyValueStore *_localStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000eff4f
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSArray *orderedEditorialItemIDs; // @synthesize orderedEditorialItemIDs=_orderedEditorialItemIDs;
@property(retain, nonatomic) NSMutableDictionary *editorialItemsByID; // @synthesize editorialItemsByID=_editorialItemsByID;
- (id)cachedArticleIDs;	// IMP=0x00100000000efd96
- (id)_editorialEntryIDForIdentifier:(id)arg1;	// IMP=0x00100000000efd67
- (void)addOrderedEditorialItemIDs:(id)arg1;	// IMP=0x00100000000efcb4
- (void)removeItemWithIdentifier:(id)arg1;	// IMP=0x00100000000efbd7
- (void)addEditorialItem:(id)arg1;	// IMP=0x00100000000efabc
- (void)loadLocalCachesFromStore;	// IMP=0x00100000000ef621
- (id)initWithLocalStore:(id)arg1;	// IMP=0x00100000000ef5b6

@end
