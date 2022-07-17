//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAvalancheReviewControllerDelegate-Protocol.h>
#import <PhotosUI/PUCollectionViewLayoutProvider-Protocol.h>
#import <PhotosUI/PUFunEffectsViewControllerObserver-Protocol.h>
#import <PhotosUI/PUOneUpPhotosSharingTransitionDelegate-Protocol.h>
#import <PhotosUI/PUOneUpSharingAnimationControllerDelegate-Protocol.h>
#import <PhotosUI/PUPhotoEditViewControllerPresentationDelegate-Protocol.h>
#import <PhotosUI/PUPhotoMarkupViewControllerObserver-Protocol.h>
#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>
#import <PhotosUI/PXActivitySharingControllerDelegate-Protocol.h>
#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSHashTable, NSString, PUActivitySharingController, PUAssetReference, PUAvalancheReviewController, PUEditViewController, PUFunEffectsViewController, PUPhotoMarkupViewController, PUSlideshowViewController;
@protocol PUOverOneUpPresentationSessionBarsDelegate, PUOverOneUpPresentationSessionDelegate, PXActivitySharingControllerDelegate;

@interface PUOverOneUpPresentationSession : NSObject <PUPhotoEditViewControllerPresentationDelegate, PUSlideshowViewControllerDelegate, PUAvalancheReviewControllerDelegate, PXActivitySharingControllerDelegate, PUOneUpPhotosSharingTransitionDelegate, PUCollectionViewLayoutProvider, PXForcedDismissableViewController, PUPhotoMarkupViewControllerObserver, PUFunEffectsViewControllerObserver, UIViewControllerTransitioningDelegate, PUOneUpSharingAnimationControllerDelegate>
{
    struct {
        _Bool respondsToTilingView;
        _Bool respondsToViewController;
        _Bool respondsToBrowsingViewModel;
        _Bool respondsToDidPresent;
        _Bool respondsToDidFinish;
        _Bool respondsToIsReady;
    } _delegateFlags;	// 8 = 0x8
    struct {
        _Bool respondsToActivities;
        _Bool respondsToBarButtonItem;
        _Bool respondsToDidAppendReviewScreenAction;
    } _barsDelegateFlags;	// 14 = 0xe
    _Bool __needsUpdatePresentedViewControllers;	// 17 = 0x11
    id <PUOverOneUpPresentationSessionDelegate> _delegate;	// 24 = 0x18
    id <PUOverOneUpPresentationSessionBarsDelegate> _barsDelegate;	// 32 = 0x20
    PUAvalancheReviewController *__avalancheReviewController;	// 40 = 0x28
    PUSlideshowViewController *__slideshowViewController;	// 48 = 0x30
    PUEditViewController *__editViewController;	// 56 = 0x38
    PUPhotoMarkupViewController *__photoMarkupViewController;	// 64 = 0x40
    PUFunEffectsViewController *__funEffectsViewController;	// 72 = 0x48
    PUAssetReference *__stashedAssetReference;	// 80 = 0x50
    NSHashTable *__presentedViewControllers;	// 88 = 0x58
    PUActivitySharingController *_activitySharingController;	// 96 = 0x60
    id <PXActivitySharingControllerDelegate> _activitySharingControllerDelegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000027dea4
@property(nonatomic) __weak id <PXActivitySharingControllerDelegate> activitySharingControllerDelegate; // @synthesize activitySharingControllerDelegate=_activitySharingControllerDelegate;
@property(retain, nonatomic) PUActivitySharingController *activitySharingController; // @synthesize activitySharingController=_activitySharingController;
@property(nonatomic, setter=_setNeedsUpdatePresentedViewControllers:) _Bool _needsUpdatePresentedViewControllers; // @synthesize _needsUpdatePresentedViewControllers=__needsUpdatePresentedViewControllers;
@property(retain, nonatomic, setter=_setPresentedViewControllers:) NSHashTable *_presentedViewControllers; // @synthesize _presentedViewControllers=__presentedViewControllers;
@property(copy, nonatomic, setter=_setStashedAssetReference:) PUAssetReference *_stashedAssetReference; // @synthesize _stashedAssetReference=__stashedAssetReference;
@property(retain, nonatomic, setter=_setFunEffectsViewController:) PUFunEffectsViewController *_funEffectsViewController; // @synthesize _funEffectsViewController=__funEffectsViewController;
@property(retain, nonatomic, setter=_setPhotoMarkupViewController:) PUPhotoMarkupViewController *_photoMarkupViewController; // @synthesize _photoMarkupViewController=__photoMarkupViewController;
@property(retain, nonatomic, setter=_setEditViewController:) PUEditViewController *_editViewController; // @synthesize _editViewController=__editViewController;
@property(retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property(retain, nonatomic, setter=_setAvalancheReviewController:) PUAvalancheReviewController *_avalancheReviewController; // @synthesize _avalancheReviewController=__avalancheReviewController;
@property(nonatomic) __weak id <PUOverOneUpPresentationSessionBarsDelegate> barsDelegate; // @synthesize barsDelegate=_barsDelegate;
@property(nonatomic) __weak id <PUOverOneUpPresentationSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ppt_presentPhotoEditor;	// IMP=0x000000000027dcdf
- (void)ppt_dismissShareSheetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000027db64
- (void)ppt_cancelActivity;	// IMP=0x000000000027da15
- (void)ppt_tapNextButton:(CDUnknownBlockType)arg1;	// IMP=0x000000000027da0f
- (void)ppt_shareUsingActivityOfType:(id)arg1;	// IMP=0x000000000027d89e
- (id)ppt_activityViewController;	// IMP=0x000000000027d84e
- (void)ppt_presentShareSheetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000027d784
- (id)_assetReferenceAtGlobalIndex:(long long)arg1;	// IMP=0x000000000027d6f7
- (long long)_globalIndexForAssetReference:(id)arg1;	// IMP=0x000000000027d623
- (long long)_numberOfItems;	// IMP=0x000000000027d548
- (id)_indexPathForGlobalIndex:(long long)arg1;	// IMP=0x000000000027d3e9
- (long long)_globalIndexForIndexPath:(id)arg1;	// IMP=0x000000000027d23b
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000027cfb5
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000027ced4
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000027cbee
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000027cb36
- (long long)_tileCountForCurrentModalViewController;	// IMP=0x000000000027c943
- (id)_assetCollectionsDataSourceForCurrentModalViewController;	// IMP=0x000000000027c8ad
- (void)oneUpSharingAnimationController:(id)arg1 setVisibility:(_Bool)arg2 forAssetReference:(id)arg3;	// IMP=0x000000000027c827
- (void)photosSharingTransitionWillAnimateDismissal:(id)arg1;	// IMP=0x000000000027c821
- (void)photosSharingTransitionWillAnimatePresentation:(id)arg1;	// IMP=0x000000000027c81b
- (id)photosSharingTransitionTransitioningView:(id)arg1;	// IMP=0x000000000027c7a1
- (void)photosSharingTransition:(id)arg1 setVisibility:(_Bool)arg2 forAssetReference:(id)arg3;	// IMP=0x000000000027c71b
- (struct CGPoint)photosSharingTransition:(id)arg1 contentOffsetForAssetReference:(id)arg2;	// IMP=0x000000000027c646
- (id)photosSharingTransition:(id)arg1 layoutForAssetReference:(id)arg2;	// IMP=0x000000000027c610
- (struct CGRect)_frameAtIndexPath:(id)arg1;	// IMP=0x000000000027c429
- (struct CGRect)_frameForAssetReference:(id)arg1;	// IMP=0x000000000027c091
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(_Bool)arg3;	// IMP=0x000000000027b8fb
- (void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;	// IMP=0x000000000027b63e
- (void)_activitySharingControllerDidCancel:(id)arg1;	// IMP=0x000000000027b59a
- (void)_activitySharingControllerWillDismissActivityViewController:(id)arg1;	// IMP=0x000000000027b586
- (void)_prepareForActivitySharingControllerDismiss:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000027b475
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;	// IMP=0x000000000027b22b
- (void)activitySharingControllerWillDismissActivityViewController:(id)arg1;	// IMP=0x000000000027afee
- (void)activitySharingControllerDidCancel:(id)arg1;	// IMP=0x000000000027adee
- (void)_finalizeAvalancheReviewControllerDismiss;	// IMP=0x000000000027ad92
- (void)avalancheReviewControllerDidComplete:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000027ad46
- (void)avalancheReviewControllerDidComplete:(id)arg1 withAsset:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000027ac4f
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;	// IMP=0x000000000027ab43
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;	// IMP=0x000000000027aa27
- (void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingVideo:(id)arg2 modificationDate:(id)arg3 seekTime:(CDStruct_1b6d18a9)arg4;	// IMP=0x000000000027a825
- (void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingPhoto:(id)arg2;	// IMP=0x000000000027a652
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;	// IMP=0x000000000027a546
- (void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000027a48c
- (id)_assetReferenceFromAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;	// IMP=0x000000000027a24f
- (_Bool)prepareForDismissingForced:(_Bool)arg1;	// IMP=0x000000000027a063
- (void)_removeViewController:(id)arg1;	// IMP=0x0000000000279f2c
- (_Bool)_popToOneUpFromViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000279cd2
- (_Bool)_dismissAvalancheReviewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000279c0a
- (_Bool)_dismissActivityViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000279b67
- (_Bool)_dismissFunEffectsViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000279adc
- (_Bool)_dismissPhotoMarkupViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002799c5
- (_Bool)_dismissEditViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000279950
- (_Bool)_dismissSlideshowViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000279917
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027958f
- (_Bool)_presentScreenRoutePickerViewController:(id)arg1;	// IMP=0x0000000000279487
- (_Bool)_presentSlideshowViewController:(id)arg1;	// IMP=0x00000000002793b5
- (_Bool)_presentAvalancheReviewController:(id)arg1;	// IMP=0x0000000000278e2e
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000278cb2
- (_Bool)_presentActivityViewController:(id)arg1;	// IMP=0x0000000000278aff
- (_Bool)_presentFunEffectsViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000278a2c
- (_Bool)_presentPhotoMarkupViewController:(id)arg1;	// IMP=0x00000000002788bb
- (_Bool)_presentEditViewController:(id)arg1;	// IMP=0x0000000000278689
- (_Bool)presentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002783c8
- (id)_currentTileController;	// IMP=0x00000000002782a4
- (id)_assetsDataSource;	// IMP=0x0000000000278254
- (id)_viewModel;	// IMP=0x00000000002781eb
- (id)_tilingView;	// IMP=0x0000000000278182
- (id)viewController;	// IMP=0x0000000000278119
- (void)_finishOverOneUpPresentationSessionDismissForced:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000277f05
- (_Bool)isPresentingAnOverOneUpViewController;	// IMP=0x0000000000277ea1
- (void)_updatePresentedViewControllersIfNeeded;	// IMP=0x0000000000277c56
- (void)_invalidatePresentedViewControllers;	// IMP=0x0000000000277c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
