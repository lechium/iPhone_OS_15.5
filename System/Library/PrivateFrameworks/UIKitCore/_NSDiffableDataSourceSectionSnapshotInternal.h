//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _NSDiffableDataSourceSectionSnapshotInternal
{
}

- (id)parentOfChild:(id)arg1;	// IMP=0x00000000006c44f5
- (id)childrenOfParent:(id)arg1;	// IMP=0x00000000006c44b7
- (id)childrenOfParent:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x00000000006c4479
- (id)visibleItems;	// IMP=0x00000000006c443b
- (id)items;	// IMP=0x00000000006c43fd
- (_Bool)isExpanded:(id)arg1;	// IMP=0x00000000006c43ce
- (_Bool)containsItem:(id)arg1;	// IMP=0x00000000006c439f
- (void)collapseItems:(id)arg1;	// IMP=0x00000000006c4370
- (void)expandItems:(id)arg1;	// IMP=0x00000000006c4341
- (void)deleteItems:(id)arg1;	// IMP=0x00000000006c4312
- (void)insertItems:(id)arg1 afterItem:(id)arg2;	// IMP=0x00000000006c42e3
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;	// IMP=0x00000000006c42b4
- (void)appendItems:(id)arg1 intoParent:(id)arg2;	// IMP=0x00000000006c4285
- (void)appendItems:(id)arg1;	// IMP=0x00000000006c4256

@end

