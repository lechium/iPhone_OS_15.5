//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/PSController-Protocol.h>

@class MISSING_TYPE, PSRootController, PSSpecifier, _TtC12GameCenterUI18BootstrapPresenter, _TtC12GameCenterUI22PlayerProfilePresenter;

@interface _TtC12GameCenterUI27PlayerProfileViewController <PSController>
{
    MISSING_TYPE *bootstrapPresenter;	// 56 = 0x38
    MISSING_TYPE *statePresenter;	// 64 = 0x40
    MISSING_TYPE *compositionalLayout;	// 72 = 0x48
    MISSING_TYPE *diffableDataSource;	// 80 = 0x50
    MISSING_TYPE *components;	// 88 = 0x58
    MISSING_TYPE *clippingLayer;	// 96 = 0x60
    MISSING_TYPE *startTime;	// 104 = 0x68
    MISSING_TYPE *friendSuggestionsSectionFocusGuide;	// 120 = 0x78
    MISSING_TYPE *_rootController;	// 128 = 0x80
    MISSING_TYPE *_specifier;	// 136 = 0x88
}

+ (void)showProfileFor:(id)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000024aa00
- (void).cxx_destruct;	// IMP=0x000000000024f300
@property(nonatomic, retain) PSSpecifier *_specifier; // @synthesize _specifier;
@property(nonatomic, retain) PSRootController *_rootController; // @synthesize _rootController;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000024e6d0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000024e2d0
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000024df60
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000024dbf0
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000024d650
- (void)viewDidLayoutSubviews;	// IMP=0x000000000024ba20
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000024b9e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000024b8a0
- (void)viewDidLoad;	// IMP=0x000000000024b500
@property(nonatomic, readonly) _TtC12GameCenterUI22PlayerProfilePresenter *dataPresenter;
@property(nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // @synthesize bootstrapPresenter;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024b100
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000024afc0
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002146f0
- (id)readPreferenceValue:(id)arg1;	// IMP=0x00000000002146b0
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000002145f0
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000002145d0
- (void)showController:(id)arg1;	// IMP=0x00000000002145b0
- (id)specifier;	// IMP=0x0000000000214580
- (void)setSpecifier:(id)arg1;	// IMP=0x0000000000214500
- (id)rootController;	// IMP=0x0000000000214490
- (void)setRootController:(id)arg1;	// IMP=0x0000000000214440
- (id)parentController;	// IMP=0x0000000000214410
- (void)setParentController:(id)arg1;	// IMP=0x00000000002143e0
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000002143d0

@end

