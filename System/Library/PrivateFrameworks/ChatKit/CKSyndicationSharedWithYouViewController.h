//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface CKSyndicationSharedWithYouViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    NSArray *_defaultAppBundleIDs;	// 24 = 0x18
    struct CGSize _maxContentSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004997b7
@property(retain, nonatomic) NSArray *defaultAppBundleIDs; // @synthesize defaultAppBundleIDs=_defaultAppBundleIDs;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGSize maxContentSize; // @synthesize maxContentSize=_maxContentSize;
- (long long)_appIconNameForBundleID:(id)arg1;	// IMP=0x0000000000499632
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000049953c
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000004993bb
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000049934b
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000004992df
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000499211
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000049906e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000049902a
- (void)updateViewConstraints;	// IMP=0x0000000000498b9e
- (void)loadView;	// IMP=0x00000000004988ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

