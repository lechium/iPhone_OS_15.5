//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGame, GKTurnBasedMatch, GKTurnBasedMatchDetailHeaderView, GKTurnBasedParticipantsDataSource, NSObject;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController
{
    _Bool _isInGame;	// 8 = 0x8
    _Bool _shouldShowPlay;	// 9 = 0x9
    _Bool _shouldShowQuit;	// 10 = 0xa
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *_delegateWeak;	// 16 = 0x10
    GKTurnBasedMatch *_match;	// 24 = 0x18
    GKGame *_game;	// 32 = 0x20
    GKTurnBasedParticipantsDataSource *_participantsDataSource;	// 40 = 0x28
    GKTurnBasedMatchDetailHeaderView *_headerView;	// 48 = 0x30
    double _initialSectionHeaderHeight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f7a0c
@property(nonatomic) double initialSectionHeaderHeight; // @synthesize initialSectionHeaderHeight=_initialSectionHeaderHeight;
@property(retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource; // @synthesize participantsDataSource=_participantsDataSource;
@property(nonatomic) _Bool shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) _Bool isInGame; // @synthesize isInGame=_isInGame;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(nonatomic) __weak NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000f7850
- (void)doneButtonPressed:(id)arg1;	// IMP=0x00000000000f7837
- (id)_gkRepresentedObject;	// IMP=0x00000000000f7825
- (void)buyButtonPressed:(id)arg1;	// IMP=0x00000000000f77d9
- (void)handleTurnBasedEvent:(id)arg1;	// IMP=0x00000000000f774a
- (void)removeMatch:(id)arg1;	// IMP=0x00000000000f76ef
- (void)quitMatch:(id)arg1;	// IMP=0x00000000000f7694
- (void)chooseMatch:(id)arg1;	// IMP=0x00000000000f7639
- (void)declineInvitation:(id)arg1;	// IMP=0x00000000000f75de
- (void)acceptInvitation:(id)arg1;	// IMP=0x00000000000f7583
- (void)setActionButtonEnabled:(_Bool)arg1;	// IMP=0x00000000000f7514
- (void)setupActionButton;	// IMP=0x00000000000f7194
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000f718c
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000f7184
- (void)didUpdateModel;	// IMP=0x00000000000f6c4f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000f6c0e
- (void)updateUIBasedOnTraitCollection;	// IMP=0x00000000000f64bd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000f643e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000f6335
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f62b0
- (void)addBackgroundVisualEffect;	// IMP=0x00000000000f5f27
- (void)viewDidLoad;	// IMP=0x00000000000f5d26
- (void)didEnterNoContentState;	// IMP=0x00000000000f5d20
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000f5c87
- (void)configureHeader:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000f5a38
- (void)configureMatchDetailHeader:(id)arg1;	// IMP=0x00000000000f59c7
- (void)configureViewFactories;	// IMP=0x00000000000f588e
- (void)configureDataSource;	// IMP=0x00000000000f565c
- (void)dealloc;	// IMP=0x00000000000f5586
- (id)init;	// IMP=0x00000000000f54f8

@end

