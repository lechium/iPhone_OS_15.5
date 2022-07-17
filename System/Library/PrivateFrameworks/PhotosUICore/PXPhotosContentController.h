//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterStatusControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionHeaderLayoutViewProvider-Protocol.h>
#import <PhotosUICore/PXPhotosViewInteractionDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDirectionSelectionScrollableDelegate-Protocol.h>

@class NSString, PXAssetReference, PXAssetsDataSourceCountsController, PXExtendedTraitCollection, PXGView, PXMediaProvider, PXPhotosBarsController, PXPhotosGridFooterPresentation, PXPhotosGridFooterStatusController, PXPhotosLayout, PXPhotosViewInteraction, PXPhotosViewModel, PXUpdater, UIView;
@protocol PXGAXResponder, PXPhotosContentControllerDelegate, PXPhotosViewEventTracker;

@interface PXPhotosContentController : NSObject <PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXPhotosLayoutDelegate, PXPhotosViewInteractionDelegate, PXChangeObserver, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate>
{
    _Bool _needsCountsInitially;	// 8 = 0x8
    _Bool _needsFooterStatusController;	// 9 = 0x9
    PXPhotosGridFooterStatusController *_footerStatusController;	// 16 = 0x10
    PXPhotosGridFooterPresentation *_footerPresentation;	// 24 = 0x18
    id <PXGAXResponder> _axNextResponder;	// 32 = 0x20
    PXGView *_gridView;	// 40 = 0x28
    PXPhotosViewModel *_viewModel;	// 48 = 0x30
    PXMediaProvider *_mediaProvider;	// 56 = 0x38
    id <PXPhotosViewEventTracker> _eventTracker;	// 64 = 0x40
    PXPhotosLayout *_layout;	// 72 = 0x48
    PXAssetsDataSourceCountsController *_countsController;	// 80 = 0x50
    PXPhotosViewInteraction *_interaction;	// 88 = 0x58
    id <PXPhotosContentControllerDelegate> _delegate;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    PXExtendedTraitCollection *_traitCollection;	// 112 = 0x70
    PXUpdater *_updater;	// 120 = 0x78
    id _dataSourceManagerPauseToken;	// 128 = 0x80
    PXPhotosBarsController *_barsController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000269797
@property(readonly, nonatomic) PXPhotosBarsController *barsController; // @synthesize barsController=_barsController;
@property(readonly, nonatomic) _Bool needsFooterStatusController; // @synthesize needsFooterStatusController=_needsFooterStatusController;
@property(readonly, nonatomic) _Bool needsCountsInitially; // @synthesize needsCountsInitially=_needsCountsInitially;
@property(retain, nonatomic) id dataSourceManagerPauseToken; // @synthesize dataSourceManagerPauseToken=_dataSourceManagerPauseToken;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <PXPhotosContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPhotosViewInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) PXAssetsDataSourceCountsController *countsController; // @synthesize countsController=_countsController;
@property(readonly, nonatomic) PXPhotosLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) id <PXPhotosViewEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002695ff
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;	// IMP=0x00000000002695ed
- (void)dismissPresentedViewControllerForFooterPresentation:(id)arg1;	// IMP=0x00000000002695a1
- (void)footerPresentation:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000026952c
- (id)presentingViewControllerForFooterStatusController:(id)arg1;	// IMP=0x00000000002694cd
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000026943a
- (void)_handleChangeToModifySelectionWithUserInfo:(id)arg1;	// IMP=0x00000000002692b1
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000269177
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x00000000002690fd
- (void)selectionManager:(id)arg1 revealObjectAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000026904e
- (struct PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0000000000268fa5
- (id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath)arg2 andIndexPath:(struct PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4;	// IMP=0x0000000000268dca
- (long long)selectionBasisForSelectionManager:(id)arg1;	// IMP=0x0000000000268dc2
- (id)sectionHeaderLayout:(id)arg1 viewForSpriteReference:(id)arg2;	// IMP=0x0000000000268d21
- (id)presentingViewControllerForPhotosInteraction:(id)arg1;	// IMP=0x0000000000268cc2
- (id)photosLayout:(id)arg1 animationForProposedAnimation:(id)arg2;	// IMP=0x0000000000268ba2
- (void)_updateIsInCompactMode;	// IMP=0x0000000000268b24
- (void)_updateHeaderView;	// IMP=0x0000000000268ab4
- (void)_invalidateHeaderView;	// IMP=0x0000000000268a70
- (void)_updateHasScrollableContent;	// IMP=0x0000000000268894
- (void)_invalidateHasScrollableContent;	// IMP=0x0000000000268850
- (void)updateIfNeeded;	// IMP=0x0000000000268813
- (void)_setNeedsUpdate;	// IMP=0x0000000000268793
- (void)_updateInteractionWorkspaceController;	// IMP=0x000000000026878d
- (void)_updateBarsController;	// IMP=0x0000000000268691
@property(readonly, nonatomic) PXAssetReference *assetReferenceForCurrentScrollPosition;
- (void)stopForceIncludingAllAssetsInDataSource;	// IMP=0x000000000026831a
- (void)resumeDataSourceChangesIfNeeded;	// IMP=0x00000000002681f8
- (void)suspendDataSourceChangesWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x0000000000268096
- (void)scrollToRevealAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000267df8
- (void)scrollToRevealAssetReference:(id)arg1 padding:(struct UIEdgeInsets)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000267dde
- (void)scrollToRevealAssetReference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267daf
- (void)scrollToRevealAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267cfc
- (void)scrollToEdge:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267b89
- (void)scrollToInitialPositionAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267880
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2;	// IMP=0x0000000000267793
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000002676f2
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;	// IMP=0x0000000000266ed7
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0000000000266e36
- (void)extendSelectionInDirection:(unsigned long long)arg1;	// IMP=0x0000000000266c97
- (void)moveSelectionInDirection:(unsigned long long)arg1;	// IMP=0x0000000000266b81
- (_Bool)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;	// IMP=0x0000000000266af1
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000266645
- (void)enumerateAssetHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000266536
- (struct PXSimpleIndexPath)_selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0000000000266460
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x00000000002660a7
- (void)enumerateAssetHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000265f88
- (void)contentViewDidScrollToInitialPosition;	// IMP=0x0000000000265f4b
- (void)contentViewDidAppear:(_Bool)arg1;	// IMP=0x0000000000265eca
@property(readonly, nonatomic) PXPhotosGridFooterPresentation *footerPresentation; // @synthesize footerPresentation=_footerPresentation;
@property(readonly, nonatomic) PXPhotosGridFooterStatusController *footerStatusController; // @synthesize footerStatusController=_footerStatusController;
- (void)contentViewWillAppear:(_Bool)arg1;	// IMP=0x0000000000265bd4
- (id)init;	// IMP=0x0000000000265b5a
- (id)initWithConfiguration:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000026558c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
