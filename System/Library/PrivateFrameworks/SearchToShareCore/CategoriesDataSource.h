//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchToShareCore/PopUpDataSource-Protocol.h>
#import <SearchToShareCore/PopUpDelegate-Protocol.h>
#import <SearchToShareCore/UICollectionViewDataSource-Protocol.h>
#import <SearchToShareCore/UICollectionViewDelegate-Protocol.h>
#import <SearchToShareCore/UIScrollViewDelegate-Protocol.h>
#import <SearchToShareCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString, STSSearchModel;
@protocol STSCategorySelectionDelegate, STSSearchModelUpdateDelegate;

@interface CategoriesDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, PopUpDataSource, PopUpDelegate>
{
    _Bool _isScrolling;	// 8 = 0x8
    id <STSSearchModelUpdateDelegate> _updateDelegate;	// 16 = 0x10
    id <STSCategorySelectionDelegate> _selectionDelegate;	// 24 = 0x18
    NSArray *_categories;	// 32 = 0x20
    NSMutableArray *_recents;	// 40 = 0x28
    NSMutableArray *_model;	// 48 = 0x30
    STSSearchModel *_searchModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003534
@property(retain, nonatomic) STSSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <STSCategorySelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <STSSearchModelUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
- (id)visibleResultsForIndexPaths:(id)arg1;	// IMP=0x000000000000330b
- (void)sendRankSectionsFeedback;	// IMP=0x0000000000003156
- (_Bool)rowHasClearButton:(long long)arg1;	// IMP=0x000000000000310f
- (void)didSelectItemAtIndex:(long long)arg1;	// IMP=0x0000000000002eb8
- (id)stringValueForRowAtIndex:(long long)arg1;	// IMP=0x0000000000002e64
- (long long)numberOfRows;	// IMP=0x0000000000002e4e
- (_Bool)isGroupRow:(long long)arg1;	// IMP=0x0000000000002df8
- (id)headerTitleForRow:(long long)arg1;	// IMP=0x0000000000002db3
- (void)addQueryToRecents:(id)arg1;	// IMP=0x0000000000002b88
- (void)updateRecents:(id)arg1;	// IMP=0x0000000000002902
- (id)recentQueries;	// IMP=0x00000000000028e4
- (id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(_Bool)arg2;	// IMP=0x0000000000002866
- (void)_commitClearRecents;	// IMP=0x00000000000027df
- (void)updateModel;	// IMP=0x00000000000020b4
- (id)initWithSearchModel:(id)arg1;	// IMP=0x0000000000001efe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

