//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFSimpleItemManager
{
    CDUnknownBlockType _homeCreator;	// 8 = 0x8
    CDUnknownBlockType _itemModuleCreator;	// 16 = 0x10
    CDUnknownBlockType _itemProviderCreator;	// 24 = 0x18
    CDUnknownBlockType _itemComparator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011f0f4
@property(copy, nonatomic) CDUnknownBlockType itemComparator; // @synthesize itemComparator=_itemComparator;
@property(copy, nonatomic) CDUnknownBlockType itemProviderCreator; // @synthesize itemProviderCreator=_itemProviderCreator;
@property(copy, nonatomic) CDUnknownBlockType itemModuleCreator; // @synthesize itemModuleCreator=_itemModuleCreator;
@property(copy, nonatomic) CDUnknownBlockType homeCreator; // @synthesize homeCreator=_homeCreator;
- (id)_homeFuture;	// IMP=0x000000000011efc2
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;	// IMP=0x000000000011ef29
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000011ee8b
- (id)_buildItemModulesForHome:(id)arg1;	// IMP=0x000000000011ede1
- (id)initWithDelegate:(id)arg1 itemProvidersCreator:(CDUnknownBlockType)arg2;	// IMP=0x000000000011edca
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;	// IMP=0x000000000011ed44

@end
