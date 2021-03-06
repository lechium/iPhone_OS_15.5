//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActionManagerProvider-Protocol.h>
#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXCMMBannerTileControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMEngineDrivenLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXCMMProgressBannerViewDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXStatusViewDelegate-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>

@class NSArray, NSMutableSet, NSSet, NSString, PXActionManager, PXAssetReference, PXBasicTileAnimator, PXCMMBannerTileController, PXCMMFooterViewModel, PXCMMProgressBannerView, PXCMMSendBackBannerView, PXCMMSendBackSuggestionSource, PXCMMSpec, PXCMMSpecManager, PXCMMStatusController, PXContextualNotification, PXLayoutGenerator, PXMomentShareStatusPresentation, PXOneUpPresentation, PXPhotosGlobalFooterView, PXSectionedLayoutEngine, PXSwipeSelectionManager, PXTilingController, PXUIAssetsScene, PXUIScrollViewController, PXUITapGestureRecognizer, PXUpdater, UILongPressGestureRecognizer;
@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController <PXActionManagerProvider, PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSwipeSelectionManagerDelegate, PXTileSource>
{
    PXUpdater *_updater;	// 8 = 0x8
    PXLayoutGenerator *_layoutGenerator;	// 16 = 0x10
    PXSectionedLayoutEngine *_layoutEngine;	// 24 = 0x18
    _Bool _layoutAnimationsGloballyDisabled;	// 32 = 0x20
    PXUIScrollViewController *_scrollViewController;	// 40 = 0x28
    PXBasicTileAnimator *_tileAnimator;	// 48 = 0x30
    PXTilingController *_tilingController;	// 56 = 0x38
    PXUIAssetsScene *_sceneController;	// 64 = 0x40
    PXCMMProgressBannerView *_progressBannerView;	// 72 = 0x48
    NSArray *_progressBannerViewConstraints;	// 80 = 0x50
    PXCMMStatusController *_statusController;	// 88 = 0x58
    PXUITapGestureRecognizer *_tapSelectionGesture;	// 96 = 0x60
    PXSwipeSelectionManager *_swipeSelectionManager;	// 104 = 0x68
    PXUITapGestureRecognizer *_layoutTransitionGesture;	// 112 = 0x70
    UILongPressGestureRecognizer *_longPressGesture;	// 120 = 0x78
    PXAssetReference *_navigatedAssetReference;	// 128 = 0x80
    PXCMMSpecManager *_specManager;	// 136 = 0x88
    PXCMMSpec *_spec;	// 144 = 0x90
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;	// 152 = 0x98
    PXCMMFooterViewModel *_statusFooterViewModel;	// 160 = 0xa0
    PXPhotosGlobalFooterView *_measuringStatusFooterView;	// 168 = 0xa8
    PXCMMBannerTileController *_measuringBannerTile;	// 176 = 0xb0
    PXCMMSendBackBannerView *_measuringSendBackBannerView;	// 184 = 0xb8
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;	// 192 = 0xc0
    NSMutableSet *_inUseTiles;	// 200 = 0xc8
    struct CGSize _knownReferenceSize;	// 208 = 0xd0
    _Bool _needsToPerformInitialSelection;	// 224 = 0xe0
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;	// 232 = 0xe8
    PXContextualNotification *_sendBackNotification;	// 240 = 0xf0
    _Bool _sendBackNotificationWasDiscarded;	// 248 = 0xf8
    _Bool _sendBackNotificationWasTapped;	// 249 = 0xf9
    _Bool _receivingActionButtonWasTapped;	// 250 = 0xfa
    _Bool _didReportSendBackNotificationMissingAssetFault;	// 251 = 0xfb
    _Bool _didIncrementNumberOfPresentableSendBacks;	// 252 = 0xfc
    _Bool _didIncrementNumberOfPresentedSendBacks;	// 253 = 0xfd
    _Bool _isWaitingForSendBackPresentationConfirmationTimeout;	// 254 = 0xfe
    unsigned long long _sendBackPresentationConfirmationGeneration;	// 256 = 0x100
    struct {
        _Bool shouldShowAddMoreButton;
        _Bool didTapAddMoreButton;
        _Bool oneUpPresentation;
    } _delegateRespondsTo;	// 264 = 0x108
    _Bool _actionInProgress;	// 267 = 0x10b
    _Bool _userSelectionEnabled;	// 268 = 0x10c
    id <PXCMMAssetsViewControllerDelegate> _delegate;	// 272 = 0x110
    long long __layoutType;	// 280 = 0x118
    NSSet *__hiddenAssetReferences;	// 288 = 0x120
    struct UIEdgeInsets _contentInset;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00000000008450bd
@property(nonatomic) _Bool userSelectionEnabled; // @synthesize userSelectionEnabled=_userSelectionEnabled;
@property(retain, nonatomic) NSSet *_hiddenAssetReferences; // @synthesize _hiddenAssetReferences=__hiddenAssetReferences;
@property(nonatomic) long long _layoutType; // @synthesize _layoutType=__layoutType;
@property(nonatomic, getter=isActionInProgress) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) __weak id <PXCMMAssetsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000845000
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000844fe0
@property(readonly, nonatomic) PXActionManager *assetActionManager;
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x0000000000844f20
- (void)contextualNotificationDidDisappear:(id)arg1;	// IMP=0x0000000000844ee8
- (void)contextualNotificationDidAppear:(id)arg1;	// IMP=0x0000000000844ed6
- (void)contextualNotificationWasDiscarded:(id)arg1;	// IMP=0x0000000000844ec5
- (void)contextualNotificationWasTapped:(id)arg1;	// IMP=0x0000000000844ea8
- (id)preferredContainerViewForContextualNotification:(id)arg1;	// IMP=0x0000000000844e96
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;	// IMP=0x0000000000844d24
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000844cc8
- (void)didTapActionButtonInBannerTileController:(id)arg1;	// IMP=0x0000000000844c28
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000844a4b
- (void)statusView:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x00000000008449f8
- (void)statusView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000008449db
- (_Bool)_shouldShowStatusPlaceholder;	// IMP=0x000000000084495b
- (void)progressBannerView:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x0000000000844908
- (void)progressBannerView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000008448eb
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;	// IMP=0x00000000008448bd
- (void)_updateProgressBannerViewConstraints;	// IMP=0x0000000000844586
- (void)_updateProgressBannerViewVisibility;	// IMP=0x0000000000844506
- (double)_progressBannerViewLayoutHeight;	// IMP=0x00000000008444c4
- (_Bool)_shouldShowProgressBanner;	// IMP=0x0000000000844411
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000844390
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000844252
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000084413d
- (struct CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;	// IMP=0x000000000084405a
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000843fb2
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;	// IMP=0x0000000000843f04
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x0000000000843ddc
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x0000000000843992
- (void)_configureBannerTile:(id)arg1;	// IMP=0x00000000008438bb
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;	// IMP=0x0000000000843419
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;	// IMP=0x0000000000843209
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x00000000008431f7
- (void)_updateLayoutEngine;	// IMP=0x0000000000842ba3
- (void)_updateSendBackNotification;	// IMP=0x0000000000842b1a
- (void)_presentSendBackNotification;	// IMP=0x0000000000842683
- (_Bool)_isSendBackBannerViewContentsFullyVisible;	// IMP=0x00000000008425d9
- (_Bool)_isSendBackBannerViewContentsAtAllVisible;	// IMP=0x00000000008424f7
- (_Bool)_canShowSendBackSuggestion;	// IMP=0x0000000000842433
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize)arg1;	// IMP=0x00000000008423aa
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000084229a
- (double)_bannerHeightFromReferenceSize:(struct CGSize)arg1;	// IMP=0x0000000000842072
- (double)_headerHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000841f17
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize)arg1;	// IMP=0x0000000000841d62
- (void)_configureLayout:(id)arg1;	// IMP=0x0000000000841900
- (id)_createNewLayout;	// IMP=0x0000000000841653
- (void)_invalidateLayoutGenerator;	// IMP=0x00000000008415ef
- (unsigned long long)_additionalTileCount;	// IMP=0x0000000000841532
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;	// IMP=0x00000000008414e8
- (void)_setLayoutType:(long long)arg1;	// IMP=0x00000000008414c3
- (id)oneUpPresentationHelperScrollView:(id)arg1;	// IMP=0x00000000008414a6
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x00000000008411f6
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x0000000000840fcf
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x0000000000840bc1
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x00000000008406c1
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x00000000008406ac
- (id)oneUpPresentationImportStatusManager:(id)arg1;	// IMP=0x000000000084065c
- (_Bool)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2;	// IMP=0x00000000008405f0
- (_Bool)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2;	// IMP=0x0000000000840424
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;	// IMP=0x0000000000840392
- (id)oneUpPresentationActionManager:(id)arg1;	// IMP=0x000000000084023b
- (id)_assetActionManagerWithSelectionManager:(id)arg1;	// IMP=0x000000000083fd42
- (id)_createSelectionManagerWithAssetReference:(id)arg1;	// IMP=0x000000000083fc02
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x000000000083fbb2
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x000000000083fb62
- (long long)oneUpPresentationActionContext:(id)arg1;	// IMP=0x000000000083fa8b
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x000000000083fa80
- (_Bool)_shouldShowDefaultOneUpActions;	// IMP=0x000000000083f9a9
@property(readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
- (void)_updateSelectionIfNeeded;	// IMP=0x000000000083f889
- (void)_updatePlaceholder;	// IMP=0x000000000083f844
- (void)_selectionModeDidChange;	// IMP=0x000000000083f750
- (void)addButtonTapped:(id)arg1;	// IMP=0x000000000083f6eb
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;	// IMP=0x000000000083f67a
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;	// IMP=0x000000000083f60c
- (_Bool)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000083f5de
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;	// IMP=0x000000000083f457
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;	// IMP=0x000000000083f2ed
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000083f1fb
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2;	// IMP=0x000000000083f18c
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000083f11a
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath)arg1 withDataSource:(id)arg2;	// IMP=0x000000000083f039
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 kind:(unsigned long long)arg3;	// IMP=0x000000000083ee35
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;	// IMP=0x000000000083edfd
- (id)_assetReferenceAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;	// IMP=0x000000000083ed03
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000083ebf3
- (void)_handleSpaceBar:(id)arg1;	// IMP=0x000000000083eb78
- (void)_handleLongPress:(id)arg1;	// IMP=0x000000000083ea5a
- (void)_handleTap:(id)arg1;	// IMP=0x000000000083e67f
@property(readonly, nonatomic) PXAssetReference *_focusedAssetReference;
- (void)_transitionLayoutGesture:(id)arg1;	// IMP=0x000000000083e35a
- (void)_updateGestures;	// IMP=0x000000000083dfe9
- (void)_updateStyle;	// IMP=0x000000000083df66
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;	// IMP=0x000000000083dd57
- (void)_setHiddenAssetReferences:(id)arg1;	// IMP=0x000000000083dc96
- (id)_createOverlayTileView;	// IMP=0x000000000083dac8
- (id)_createStatusBadgeTileView;	// IMP=0x000000000083daaf
- (id)_createStatusPlaceholderTileView;	// IMP=0x000000000083d996
- (id)_createSectionHeaderController;	// IMP=0x000000000083d8bd
- (id)_createAddButton;	// IMP=0x000000000083d787
- (id)_createBannerTileController;	// IMP=0x000000000083d680
- (id)_createSendBackFooter;	// IMP=0x000000000083d629
- (id)_createSendBackBannerView;	// IMP=0x000000000083d371
- (id)_createStatusFooter;	// IMP=0x000000000083d2c5
- (id)_createPosterTileController;	// IMP=0x000000000083d217
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000083d205
- (void)_invokeSendBackAction;	// IMP=0x000000000083d1aa
- (void)_checkSendBackPresentationStatus;	// IMP=0x000000000083d06c
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;	// IMP=0x000000000083d03a
- (void)_didPresentSendBack;	// IMP=0x000000000083cf55
- (void)_didFindPresentableSendBack;	// IMP=0x000000000083ce70
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000083ce24
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000083cdd8
- (void)viewDidLoad;	// IMP=0x000000000083c46b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000083c422
- (void)viewDidLayoutSubviews;	// IMP=0x000000000083c3d9
- (void)_scheduleLayout;	// IMP=0x000000000083c39c
- (void)_deselectAllAssets;	// IMP=0x000000000083c305
- (void)_selectAllAssets;	// IMP=0x000000000083c26e
- (_Bool)_areAllNotCopiedAssetsSelected;	// IMP=0x000000000083c16d
- (void)_selectNonCopiedAssets;	// IMP=0x000000000083c093
- (void)_selectCuratedAssets;	// IMP=0x000000000083bcf5
- (void)_performInitialSelectionIfNeeded;	// IMP=0x000000000083bc03
- (void)_updateSelectionEnabled;	// IMP=0x000000000083bb62
- (void)_updateAssetsScene;	// IMP=0x000000000083b727
- (struct CGSize)_maximumThumbnailSize;	// IMP=0x000000000083b68c
- (id)initWithSession:(id)arg1;	// IMP=0x000000000083b1fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

