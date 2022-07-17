//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLPreviewCollectionServiceProtocol-Protocol.h>

@protocol QLPreviewItemProvider;

__attribute__((visibility("hidden")))
@interface QLPreviewCollectionServiceContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>
{
    id <QLPreviewItemProvider> _itemProvider;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000003ea03
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000003e3cb
- (void).cxx_destruct;	// IMP=0x000000000003faad
- (void)setScreenEdgePanWidth:(double)arg1;	// IMP=0x000000000003fa5e
- (void)setIsContentManaged:(_Bool)arg1;	// IMP=0x000000000003fa12
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003f9c1
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;	// IMP=0x000000000003f94f
- (void)setLoadingString:(id)arg1;	// IMP=0x000000000003f8dd
- (void)setAllowInteractiveTransitions:(_Bool)arg1;	// IMP=0x000000000003f891
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f81f
- (void)notifyStateRestorationUserInfo:(id)arg1;	// IMP=0x000000000003f7ad
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;	// IMP=0x000000000003f761
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003f6e9
- (void)tearDownTransition:(_Bool)arg1;	// IMP=0x000000000003f69d
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003f5ee
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x000000000003f598
- (void)updateTransitionWithProgress:(double)arg1;	// IMP=0x000000000003f549
- (void)keyCommandWasPerformed:(id)arg1;	// IMP=0x000000000003f4d7
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f465
- (void)requestLockForCurrentItem;	// IMP=0x000000000003f428
- (void)shouldDisplayLockActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f3b6
- (void)actionSheetDidDismiss;	// IMP=0x000000000003f379
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f307
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f28f
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f13f
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f0b9
- (void)hostApplicationDidBecomeActive;	// IMP=0x000000000003f07c
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;	// IMP=0x000000000003f030
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003efdf
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;	// IMP=0x000000000003ef2f
- (void)setNotificationCenter:(id)arg1;	// IMP=0x000000000003eeb9
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ee49
- (void)invalidateService;	// IMP=0x000000000003ed7c
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ed0a
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ec7e
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;	// IMP=0x000000000003ec0c
- (id)_previewCollection;	// IMP=0x000000000003ebb8
- (id)_protocolHost;	// IMP=0x000000000003ea6f

@end
