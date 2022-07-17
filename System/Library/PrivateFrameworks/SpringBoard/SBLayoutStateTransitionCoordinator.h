//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWorkspaceApplicationSceneTransitionContextDelegate-Protocol.h>

@class NSPointerArray, NSString, SBLayoutStateTransitionContext, SBSceneManager;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate>
{
    NSPointerArray *_observerPointerArray;	// 8 = 0x8
    SBLayoutStateTransitionContext *_transitionContext;	// 16 = 0x10
    SBSceneManager *_sceneManager;	// 24 = 0x18
    id <SBLayoutStateTransitionSceneEntityFrameProvider> _sceneEntityFrameProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000380bf4
@property(nonatomic) __weak id <SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider; // @synthesize sceneEntityFrameProvider=_sceneEntityFrameProvider;
@property(readonly, nonatomic) __weak SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000380b40
- (void)addObserver:(id)arg1;	// IMP=0x0000000000380b23
- (void)endTransitionWithError:(id)arg1;	// IMP=0x000000000004521f
- (void)willEndTransition;	// IMP=0x0000000000044b16
- (void)beginTransitionForWorkspaceTransaction:(id)arg1;	// IMP=0x000000000001ce03
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (struct CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;	// IMP=0x0000000000380a85
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;	// IMP=0x000000000000cde9
- (id)layoutStateForApplicationTransitionContext:(id)arg1;	// IMP=0x000000000000cee3
- (id)init;	// IMP=0x0000000000380a00
- (id)initWithSceneManager:(id)arg1;	// IMP=0x0000000000380972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
