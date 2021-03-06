//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, PXPeoplePersonDataSource, PXPeopleSuggestionDataSource, UICollectionView;

@interface PXPeopleDetailSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    PXPeoplePersonDataSource *_dataSource;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    PXPeopleSuggestionDataSource *_suggestionDataSource;	// 24 = 0x18
    NSArray *_personDetectionTypes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000082e46d
@property(retain, nonatomic) NSArray *personDetectionTypes; // @synthesize personDetectionTypes=_personDetectionTypes;
@property(retain, nonatomic) PXPeopleSuggestionDataSource *suggestionDataSource; // @synthesize suggestionDataSource=_suggestionDataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PXPeoplePersonDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)loadSuggestionsForPerson:(id)arg1;	// IMP=0x000000000082e1d3
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000082e126
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;	// IMP=0x000000000082e120
- (void)peopleDataSourceMembersChanged:(id)arg1;	// IMP=0x000000000082e11a
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000082e0fb
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x000000000082e0b0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000082e065
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000082e054
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000082dba3
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000082db5f
- (void)viewDidLoad;	// IMP=0x000000000082d8f3
- (id)initWithPersonDetectionType:(short)arg1;	// IMP=0x000000000082d802
- (id)initWithDataSourceReloadBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000082d79a
- (id)init;	// IMP=0x000000000082d70d
- (void)commonInitWithDataSourceReloadBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000082d611
- (void)commonInit;	// IMP=0x000000000082d5c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

