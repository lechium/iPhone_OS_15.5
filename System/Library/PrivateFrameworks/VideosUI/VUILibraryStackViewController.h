//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, VUILibraryStackView;

__attribute__((visibility("hidden")))
@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate>
{
    double _lastAppearWidth;	// 8 = 0x8
    _Bool _requiresRelayout;	// 16 = 0x10
    NSIndexPath *_focusedIndexPath;	// 24 = 0x18
    VUILibraryStackView *_stackView;	// 32 = 0x20
    UICollectionView *_stackCollectionView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019a690
@property(readonly, nonatomic) UICollectionView *stackCollectionView; // @synthesize stackCollectionView=_stackCollectionView;
@property(readonly, nonatomic) VUILibraryStackView *stackView; // @synthesize stackView=_stackView;
- (void)_updateNavigationBarPadding;	// IMP=0x000000000019a422
- (void)_invalidateLayouts;	// IMP=0x000000000019a3b7
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000019a207
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000019a120
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000019a117
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000199ff4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000199f11
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000199efc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000199d57
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000199ca5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000199b75
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000199b6d
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x0000000000199b41
- (void)viewDidLoad;	// IMP=0x0000000000199913
- (void)scrollToTop;	// IMP=0x00000000001998d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
