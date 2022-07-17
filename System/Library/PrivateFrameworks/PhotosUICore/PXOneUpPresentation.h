//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXGestureProvider, PXPhotosDetailsContext, PXUIMediaProvider, UIContextMenuInteraction, UIScrollView, UITargetedPreview, UIViewController;
@protocol PXAssetImportStatusManager, PXOneUpPresentationDelegate, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject <UIContextMenuInteractionDelegate>
{
    struct {
        _Bool respondsToPhotosDetailsContext;
        _Bool respondsToInitialAssetReference;
        _Bool respondsToCanStartPreviewingForContextMenuInteraction;
        _Bool respondsToAllowsActionsForContextMenuInteraction;
        _Bool respondsToAllowsPreviewCommitingForContextMenuInteraction;
        _Bool respondsToCommitPreviewForContextMenuInteraction;
        _Bool respondsToWillStartPreviewingForContextMenuInteraction;
        _Bool respondsToWillEndPreviewingForContextMenuInteraction;
        _Bool respondsToAccessoriesForContextMenuInteraction;
        _Bool respondsToStyleForContextMenuInteraction;
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToRegionOfInterestForAssetReference;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToSetHiddenAssetReferences;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToPreventShowInAllPhotos;
        _Bool respondsToActionManager;
        _Bool respondsToActionManagerForPreviewing;
        _Bool respondsToActionContext;
        _Bool respondsToGestureProvider;
        _Bool respondsToImportStatusManager;
        _Bool respondsToOrigin;
        _Bool respondsToScrollView;
        _Bool respondsToMatchedQueryStrings;
    } _delegateFlags;	// 8 = 0x8
    struct {
        _Bool respondsToPresentingViewControllerViewWillAppear;
        _Bool respondsToPresentingViewControllerViewDidAppear;
        _Bool respondsToPresentingViewControllerViewWillDisappear;
        _Bool respondsToPresentingViewControllerViewDidDisappear;
        _Bool respondsToCanStart;
        _Bool respondsToLastViewedAssetReference;
        _Bool respondsToCanStop;
        _Bool respondsToInvalidatePresentingGeometry;
        _Bool respondsToHandlePresentingPinchGestureRecognizer;
    } _implementationDelegateFlags;	// 32 = 0x20
    _Bool _isContextMenuInteractionActive;	// 41 = 0x29
    _Bool _enabled;	// 42 = 0x2a
    id <PXOneUpPresentationImplementationDelegate> __implementationDelegate;	// 48 = 0x30
    UIContextMenuInteraction *_contextMenuInteraction;	// 56 = 0x38
    id <PXOneUpPresentationDelegate> _delegate;	// 64 = 0x40
    UIViewController *_currentPreviewViewController;	// 72 = 0x48
    UITargetedPreview *_interactionTargetedPreview;	// 80 = 0x50
    NSMapTable *_contextMenuStateByConfiguration;	// 88 = 0x58
    UIViewController *_presentingViewController;	// 96 = 0x60
    UIViewController *_originalPresentingViewController;	// 104 = 0x68
    id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;	// 112 = 0x70
}

+ (id)navigationControllerWithRootViewController:(id)arg1;	// IMP=0x00000000006e0ca4
- (void).cxx_destruct;	// IMP=0x00000000006e0a00
@property(nonatomic) __weak id <PXOneUpPresentationImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSMapTable *contextMenuStateByConfiguration; // @synthesize contextMenuStateByConfiguration=_contextMenuStateByConfiguration;
@property(retain, nonatomic) UITargetedPreview *interactionTargetedPreview; // @synthesize interactionTargetedPreview=_interactionTargetedPreview;
@property(retain, nonatomic) UIViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
@property(readonly, nonatomic) _Bool isContextMenuInteractionActive; // @synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive;
@property(nonatomic) __weak id <PXOneUpPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXOneUpPresentationImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000006e085b
- (id)_contextMenuInteraction:(id)arg1 accessoriesForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000006e07b2
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000006e0615
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000006e03c3
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000006e01ab
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000006dfdff
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000006dfb30
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
- (void)_updateImplementationDelegate;	// IMP=0x00000000006df7eb
@property(readonly, nonatomic) NSArray *matchedQueryStrings;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setHiddenAssetReferences:(id)arg1;	// IMP=0x00000000006df61c
- (void)scrollAssetReferenceToVisible:(id)arg1;	// IMP=0x00000000006df5a2
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000006df51b
- (id)currentImageForAssetReference:(id)arg1;	// IMP=0x00000000006df41a
@property(readonly, nonatomic) _Bool wantsShowInLibraryButton;
@property(readonly, nonatomic) _Bool preventShowInAllPhotosAction;
@property(readonly, nonatomic) _Bool shouldAutoPlay;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> importStatusManager;
@property(readonly, nonatomic) long long actionContext;
@property(readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property(readonly, nonatomic) PXAssetActionManager *actionManager;
@property(readonly, nonatomic) PXAssetReference *initialAssetReference;
@property(readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property(readonly, nonatomic) long long origin;
@property(readonly, nonatomic) PXGestureProvider *gestureProvider;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;	// IMP=0x00000000006ded64
- (void)preventTargetedContextMenuDismissalAnimation;	// IMP=0x00000000006ded50
- (void)invalidatePresentingGeometry;	// IMP=0x00000000006decdf
- (void)stopAnimated:(_Bool)arg1;	// IMP=0x00000000006dec70
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x00000000006deb88
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;	// IMP=0x00000000006deb0d
- (id)previewViewControllerAllowingActions:(_Bool)arg1;	// IMP=0x00000000006deaa9
- (_Bool)startWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006dea26
- (void)waitUntilPresentationCanStartAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006de95d
@property(readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
- (_Bool)canStartAnimated:(_Bool)arg1;	// IMP=0x00000000006de867
@property(readonly, nonatomic) _Bool canStart;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;	// IMP=0x00000000006de7db
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x00000000006de766
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;	// IMP=0x00000000006de6f1
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000000006de66c
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x00000000006de38f
- (id)init;	// IMP=0x00000000006de308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
