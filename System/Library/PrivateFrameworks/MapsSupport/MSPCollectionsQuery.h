//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSPFavoritesContainer, NSArray, NewMSPQuery;

@interface MSPCollectionsQuery
{
    MSPFavoritesContainer *_itemContainer;	// 88 = 0x58
    NewMSPQuery *_itemQuery;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000191dd
@property(retain, nonatomic) NewMSPQuery *itemQuery; // @synthesize itemQuery=_itemQuery;
@property(retain, nonatomic) MSPFavoritesContainer *itemContainer; // @synthesize itemContainer=_itemContainer;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;	// IMP=0x0000000000019181
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018735
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017eb0
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016b0a
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016a44
- (void)setCachedContents:(id)arg1;	// IMP=0x00000000000169bb
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000162b4
@property(readonly) NSArray *contents;
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001603c
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015f69
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000015f54

@end
