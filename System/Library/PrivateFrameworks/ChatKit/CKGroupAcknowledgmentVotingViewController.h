//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAcknowledgmentVotingViewAnimatorDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKAcknowledgmentVotingViewAnimator, CKAggregateAcknowledgmentChatItem, CKGroupAcknowledgmentVotingLayout, NSArray, NSString, UIButton, UICollectionView, UITapGestureRecognizer, _CKAcknowledgmentVoteCountView;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>
{
    NSArray *_tallies;	// 8 = 0x8
    CKAggregateAcknowledgmentChatItem *_chatItem;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    CKGroupAcknowledgmentVotingLayout *_layout;	// 32 = 0x20
    CKAcknowledgmentVotingViewAnimator *_animator;	// 40 = 0x28
    UITapGestureRecognizer *_tapGestureRecognizer;	// 48 = 0x30
    UIButton *_collapseButton;	// 56 = 0x38
    _CKAcknowledgmentVoteCountView *_currentlyExpandedVoteCountView;	// 64 = 0x40
    NSArray *_sortedAnimatorModelItems;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001083dd
@property(copy, nonatomic) NSArray *sortedAnimatorModelItems; // @synthesize sortedAnimatorModelItems=_sortedAnimatorModelItems;
@property(retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView; // @synthesize currentlyExpandedVoteCountView=_currentlyExpandedVoteCountView;
@property(retain, nonatomic) UIButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(retain, nonatomic) NSArray *tallies; // @synthesize tallies=_tallies;
- (id)hitTest:(struct CGPoint)arg1 withGestureRecognizer:(id)arg2;	// IMP=0x00000000001081a5
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x0000000000107fca
- (void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2;	// IMP=0x0000000000107786
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1;	// IMP=0x000000000010776f
- (void)_collapseCollectionView;	// IMP=0x0000000000107711
- (void)_handleCollapseButton:(id)arg1;	// IMP=0x00000000001076ff
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;	// IMP=0x000000000010752d
- (id)_ackIconSupplementaryViewAtIndexPath:(id)arg1;	// IMP=0x000000000010735b
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;	// IMP=0x0000000000107117
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000106f5e
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000106d81
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000106cef
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000106cab
- (void)_layoutCurrentlyExpandedVoteCountView;	// IMP=0x0000000000106b1a
- (void)_layoutCollapseButton;	// IMP=0x00000000001067ba
- (void)_setupTallies;	// IMP=0x0000000000106380
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1;	// IMP=0x000000000010616b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000105f04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000105e95
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000105d70
- (void)viewDidLoad;	// IMP=0x0000000000104fed
- (void)dealloc;	// IMP=0x0000000000104f6c
- (id)initWithMessagePartChatItem:(id)arg1;	// IMP=0x0000000000104f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

