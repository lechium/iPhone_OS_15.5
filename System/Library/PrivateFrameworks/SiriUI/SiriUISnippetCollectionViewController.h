//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/UICollectionViewDataSource-Protocol.h>
#import <SiriUI/UICollectionViewDelegate-Protocol.h>
#import <SiriUI/UICollectionViewDragDelegate-Protocol.h>

@class NSString, UICollectionView, UICollectionViewLayout;

@interface SiriUISnippetCollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDragDelegate>
{
    struct CGRect _previousBounds;	// 8 = 0x8
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;	// 40 = 0x28
    UICollectionViewLayout *_collectionViewLayout;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002a2fe
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000002a2d4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000002a22e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000002a226
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000029f65
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000029e45
- (void)loadView;	// IMP=0x0000000000029c7e
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0000000000029c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

