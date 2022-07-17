//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>

@class NSArray, NSString, PUAssetActionPerformer, PUBrowsingSession, PXActionManager, UIViewController;
@protocol PUPreviewActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPreviewActionController : NSObject <PUAssetActionPerformerDelegate>
{
    struct {
        _Bool didDismissWithActionIdentifier;
        _Bool preventRevealInMomentAction;
    } _delegateRespondsTo;	// 8 = 0x8
    PUBrowsingSession *_browsingSession;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    id <PUPreviewActionControllerDelegate> _delegate;	// 32 = 0x20
    PXActionManager *_photosUICoreActionManager;	// 40 = 0x28
    PUAssetActionPerformer *__activeActionPerformer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000037fa18
@property(retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // @synthesize _activeActionPerformer=__activeActionPerformer;
@property(retain, nonatomic) PXActionManager *photosUICoreActionManager; // @synthesize photosUICoreActionManager=_photosUICoreActionManager;
@property(nonatomic) __weak id <PUPreviewActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000037f987
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000037f7e7
- (void)_executeActionPerformer:(id)arg1;	// IMP=0x000000000037f64a
- (void)_performFavoriteAction:(_Bool)arg1;	// IMP=0x000000000037f322
- (void)_performTrashAction;	// IMP=0x000000000037f20f
- (void)_promptTrashActionConfirmationForAsset:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000037ecfd
- (void)_performSimpleActionWithType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000037eabd
- (void)_notifiyDelegateOfAction:(id)arg1;	// IMP=0x000000000037ea43
- (unsigned long long)_confirmationFreeActionForPreferredAction:(unsigned long long)arg1;	// IMP=0x000000000037ea24
- (id)debugActions;	// IMP=0x000000000037e90b
@property(readonly, nonatomic) NSArray *actions;
- (id)contextMenuActionIfAvailableForActionType:(unsigned long long)arg1;	// IMP=0x000000000037cd3d
- (id)_contextMenuActionWithTitle:(id)arg1 image:(id)arg2 attributes:(unsigned long long)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000037cce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
