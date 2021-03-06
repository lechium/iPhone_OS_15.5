//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAccessibilityChildReparentingTarget-Protocol.h>

@class NSLayoutConstraint, NSString, NotesBarBackgroundView;
@protocol ICAccessibilityChildReparentingController, ICAccessibilityChildReparentingProvider;

@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget>
{
    _Bool _contentViewVisible;	// 8 = 0x8
    _Bool _hasBarBlur;	// 9 = 0x9
    UIView *_contentView;	// 16 = 0x10
    id <ICAccessibilityChildReparentingController> _axChildReparentingController;	// 24 = 0x18
    NotesBarBackgroundView *_topBarView;	// 32 = 0x20
    NotesBarBackgroundView *_bottomBarView;	// 40 = 0x28
    NotesBarBackgroundView *_bottomSafeAreaBarView;	// 48 = 0x30
    NSLayoutConstraint *_heightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_contentViewBottomConstraint;	// 64 = 0x40
    id <ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000deccc
@property(nonatomic) __weak id <ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting; // @synthesize elementForAccessibilityReparenting=_elementForAccessibilityReparenting;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NotesBarBackgroundView *bottomSafeAreaBarView; // @synthesize bottomSafeAreaBarView=_bottomSafeAreaBarView;
@property(retain, nonatomic) NotesBarBackgroundView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) NotesBarBackgroundView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) _Bool hasBarBlur; // @synthesize hasBarBlur=_hasBarBlur;
@property(nonatomic) __weak id <ICAccessibilityChildReparentingController> axChildReparentingController; // @synthesize axChildReparentingController=_axChildReparentingController;
@property(nonatomic, getter=isContentViewVisible) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_accessibilityIsScannerGroup;	// IMP=0x00000000000deb80
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;	// IMP=0x00000000000deb6e
- (id)accessibilityElements;	// IMP=0x00000000000de78b
- (void)addSubviewAboveAllViews:(id)arg1;	// IMP=0x00000000000de75c
- (void)addSubview:(id)arg1;	// IMP=0x00000000000de69e
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2 topMargin:(double)arg3;	// IMP=0x00000000000de2b8
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2;	// IMP=0x00000000000de2a3
- (void)snapshotContentIntoSnapshotView:(id)arg1;	// IMP=0x00000000000de204
- (id)scrollViewDescendantOfView:(id)arg1;	// IMP=0x00000000000de040
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000000ddf54
- (void)fadeInBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000ddc5c
- (void)fadeOutBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000dd851
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000000dd6e2
- (void)updateConstraintsForBottomToolbar:(id)arg1;	// IMP=0x00000000000dd5ef
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;	// IMP=0x00000000000dd40c
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;	// IMP=0x00000000000dd1b7
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000dd0dc
- (void)commonInit;	// IMP=0x00000000000dcb0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000dcaaf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dca63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

