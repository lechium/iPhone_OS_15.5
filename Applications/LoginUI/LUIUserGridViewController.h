//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATCollectionController, LUIPaneHeaderView, LUIPrivacyView, LUIUserGridViewLayout, MISSING_TYPE, NSArray, NSMutableArray, NSString, UICollectionView, UILabel, UIView;
@protocol LUIProgressAnimationProtocol;

@interface LUIUserGridViewController
{
    _Bool _isFirstUpdate;	// 8 = 0x8
    NSArray *_students;	// 16 = 0x10
    NSString *_footerButtonTitle;	// 24 = 0x18
    NSArray *_users;	// 32 = 0x20
    NSString *_headerTitle;	// 40 = 0x28
    CATCollectionController *_collectionController;	// 48 = 0x30
    NSMutableArray *_pendingChangeDescriptors;	// 56 = 0x38
    NSArray *_arrangedObjects;	// 64 = 0x40
    NSString *_headerText;	// 72 = 0x48
    LUIPrivacyView *_privacyView;	// 80 = 0x50
    LUIPaneHeaderView *_headerView;	// 88 = 0x58
    UILabel *_rosterLabel;	// 96 = 0x60
    UICollectionView *_collectionView;	// 104 = 0x68
    LUIUserGridViewLayout *_collectionViewLayout;	// 112 = 0x70
    UIView<LUIProgressAnimationProtocol> *_progressView;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000041f10
@property(retain, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) LUIUserGridViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *rosterLabel; // @synthesize rosterLabel=_rosterLabel;
@property(nonatomic) _Bool isFirstUpdate; // @synthesize isFirstUpdate=_isFirstUpdate;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSArray *arrangedObjects; // @synthesize arrangedObjects=_arrangedObjects;
@property(retain, nonatomic) NSMutableArray *pendingChangeDescriptors; // @synthesize pendingChangeDescriptors=_pendingChangeDescriptors;
@property(retain, nonatomic) CATCollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *footerButtonTitle; // @synthesize footerButtonTitle=_footerButtonTitle;
@property(copy, nonatomic) NSArray *students; // @synthesize students=_students;
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x0010000000041c52
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x0010000000041c08
- (id)titleForBottomRightVibrantButton;	// IMP=0x0010000000041ba0
- (id)titleForBottomLeftVibrantButton;	// IMP=0x0010000000041b8b
- (long long)imageTypeForBottomRightVibrantButton;	// IMP=0x0010000000041b80
- (_Bool)shouldShowBottomRightVibrantButton;	// IMP=0x0010000000041b35
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x0010000000041b2d
- (void)handleLongPress:(id)arg1;	// IMP=0x001000000004189d
- (void)controller:(id)arg1 willChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;	// IMP=0x0010000000041792
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00100000000411f8
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x0010000000041170
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000004105d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000040f00
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000040ebc
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000040e71
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000040e26
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000040ddb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000040ca9
- (id)sortDescriptors;	// IMP=0x0010000000040b65
- (MISSING_TYPE *)setSortDescriptors: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000040af3
- (void)enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004097f
- (id)collectionViewConstraints;	// IMP=0x00100000000405ed
- (void)activateLayoutConstraints;	// IMP=0x001000000004059d
- (void)viewDidLoad;	// IMP=0x00100000000401c6
- (void)viewWillLayoutSubviews;	// IMP=0x001000000003ff9c
- (void)notIntendedUserButtonPressed:(id)arg1 forViewController:(id)arg2;	// IMP=0x001000000003ff52
- (long long)preferredStatusBarStyle;	// IMP=0x001000000003ff07
- (void)commonInit;	// IMP=0x001000000003fd17
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000003fccb
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003fc7f
- (void)dealloc;	// IMP=0x001000000003fbdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

