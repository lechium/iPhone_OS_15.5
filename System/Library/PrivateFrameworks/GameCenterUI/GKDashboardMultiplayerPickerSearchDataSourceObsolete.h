//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, UISearchBar;

@interface GKDashboardMultiplayerPickerSearchDataSourceObsolete
{
    _Bool _searching;	// 8 = 0x8
    NSMutableDictionary *_playerStates;	// 16 = 0x10
    UISearchBar *_searchBar;	// 24 = 0x18
    NSArray *_allPlayers;	// 32 = 0x20
    NSArray *_searchPlayers;	// 40 = 0x28
    long long _maxSelectable;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000bbde2
@property(readonly, nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property(copy, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(copy, nonatomic) NSArray *allPlayers; // @synthesize allPlayers=_allPlayers;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000bbc86
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bb973
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bb85f
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000bb842
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bb5fd
- (long long)itemCount;	// IMP=0x00000000000bb5b9
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000bb5a7
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000bb59c
- (id)searchKeyForSection:(long long)arg1;	// IMP=0x00000000000bb58f
- (void)searchTextHasChanged;	// IMP=0x00000000000bb2be
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (double)preferredCollectionHeight;	// IMP=0x00000000000bb006
- (void)setupCollectionView:(id)arg1;	// IMP=0x00000000000baf6e
- (id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2;	// IMP=0x00000000000baee2

@end

