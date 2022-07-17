//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVShelfViewLayoutDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, NSString;
@protocol __TVShelfViewControllerDelegate;

@interface _TVShelfViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout>
{
    NSIndexPath *_pendingPreviewedIndexPath;	// 8 = 0x8
    NSIndexPath *_lastPreviewedIndexPath;	// 16 = 0x10
    double _lastPreviewDelay;	// 24 = 0x18
    unsigned long long _autohighlightScrollPosition;	// 32 = 0x20
    _Bool _configureForListTemplate;	// 40 = 0x28
    long long _listTemplateAlignment;	// 48 = 0x30
    struct {
        _Bool hasUpdateRelatedView;
        _Bool hasDidSelectItemAtIndexPath;
        _Bool hasDidPlayItemAtIndexPath;
        _Bool hasDidSettleOnItemAtIndexPath;
        _Bool hasDidSnapToItemAtIndexPath;
        _Bool hasFocusDependentMethods;
    } _delegateFlags;	// 56 = 0x38
    _Bool _centered;	// 62 = 0x3e
    id <__TVShelfViewControllerDelegate> _delegate;	// 64 = 0x40
    unsigned long long _speedBumpEdges;	// 72 = 0x48
    long long _prominentSectionIndex;	// 80 = 0x50
}

+ (void)_contentForCell:(id)arg1 shouldHide:(_Bool)arg2;	// IMP=0x00000000000553cf
- (void).cxx_destruct;	// IMP=0x0000000000055558
@property(nonatomic) long long prominentSectionIndex; // @synthesize prominentSectionIndex=_prominentSectionIndex;
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
@property(nonatomic) __weak id <__TVShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000055464
- (void)_didSettleOnItemAtIndexPath:(id)arg1;	// IMP=0x0000000000055310
- (void)_delayedUpdatePreview;	// IMP=0x00000000000550ba
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000054e13
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000054c4f
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000054b66
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000054a50
@property(nonatomic) _Bool hideHeader;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000005468a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000054623
- (void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005450d
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;	// IMP=0x0000000000053fab
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000053e22
- (unsigned long long)preferredScrollPosition;	// IMP=0x0000000000053e11
- (_Bool)contentFlowsVertically;	// IMP=0x0000000000053e09
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000053d44
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000005386a
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000053650
- (id)preferredFocusEnvironments;	// IMP=0x0000000000053589
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000534c6
- (void)viewDidLoad;	// IMP=0x0000000000053398
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;	// IMP=0x00000000000529ec
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000052931

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
