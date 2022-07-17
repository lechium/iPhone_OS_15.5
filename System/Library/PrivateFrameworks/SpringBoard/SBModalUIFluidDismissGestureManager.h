//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHomeGestureInteractionDelegate-Protocol.h>
#import <SpringBoard/SBHomeGesturePanGestureRecognizerInterfaceDelegate-Protocol.h>

@class NSString, SBAssistantController, SBHomeGestureInteraction, SBHomeGestureSettings, SBModalUIFluidDismissGestureWorkspaceTransaction, SBTransientOverlayPresentationManager;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate>
{
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;	// 8 = 0x8
    SBAssistantController *_assistantController;	// 16 = 0x10
    SBHomeGestureSettings *_homeGestureSettings;	// 24 = 0x18
    SBHomeGestureInteraction *_homeGestureInteraction;	// 32 = 0x20
    SBModalUIFluidDismissGestureWorkspaceTransaction *_currentTransaction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004ff762
@property(retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction; // @synthesize homeGestureInteraction=_homeGestureInteraction;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(readonly, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager; // @synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000004ff682
- (void)transactionDidComplete:(id)arg1;	// IMP=0x00000000004ff60f
- (long long)_dismissalTypeForCurrentContext;	// IMP=0x0000000000051c62
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;	// IMP=0x00000000004ff47b
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x00000000004ff3f5
- (_Bool)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000004ff3dc
- (void)homeGestureInteractionCancelled:(id)arg1;	// IMP=0x00000000004ff3ca
- (void)homeGestureInteractionEnded:(id)arg1;	// IMP=0x00000000004ff37b
- (void)homeGestureInteractionChanged:(id)arg1;	// IMP=0x00000000004ff32c
- (void)homeGestureInteractionBegan:(id)arg1;	// IMP=0x00000000004ff268
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;	// IMP=0x00000000004ff1ec
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;	// IMP=0x00000000004ff1cd
- (void)handleGestureEnded:(id)arg1;	// IMP=0x00000000004ff124
- (void)handleGestureChanged:(id)arg1;	// IMP=0x00000000004ff0b9
- (void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(_Bool)arg2 dismissalThreshold:(double)arg3 initiatedFromIndirectEdge:(_Bool)arg4;	// IMP=0x00000000004fecb3
- (void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(_Bool)arg2;	// IMP=0x00000000004fec96
- (void)_addOrRemoveGestureForCurrentSettings;	// IMP=0x00000000004fec15
- (id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2;	// IMP=0x00000000004feb30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
