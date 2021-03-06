//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/_TVCollectionViewDelegate-Protocol.h>

@class IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource>
{
    IKViewElement *_templateElement;	// 8 = 0x8
    _TVCollectionView *_collectionView;	// 16 = 0x10
    NSArray *_collectionViewElements;	// 24 = 0x18
    IKImageElement *_bgImageElement;	// 32 = 0x20
    IKImageElement *_bgHeroImageElement;	// 40 = 0x28
    NSIndexPath *_lastFocusedIndexPath;	// 48 = 0x30
    _Bool _updateAutoHighlight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005d772
- (void)_scrollToPreferredFocusView;	// IMP=0x000000000005d70d
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000005d69b
- (long long)_blurEffectStyle;	// IMP=0x000000000005d660
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x000000000005d639
- (id)_backgroundImageProxy;	// IMP=0x000000000005d51c
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000005d4b8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000005d3b9
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000000005d2ba
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000005d184
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000005d16f
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000005d167
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000005cedf
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000005cec2
- (void)loadView;	// IMP=0x000000000005cc48
- (id)preferredFocusEnvironments;	// IMP=0x000000000005cbcf
- (void)viewDidLayoutSubviews;	// IMP=0x000000000005cb77
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000005c073
- (void)updateWithTemplateElement:(id)arg1;	// IMP=0x000000000005c061

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

