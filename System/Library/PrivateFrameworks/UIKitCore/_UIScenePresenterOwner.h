//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/BSInvalidatable-Protocol.h>

@class FBScene, NSMutableOrderedSet, NSMutableSet, NSString, UIScenePresentationContext, UIScenePresentationManager, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol _UIScenePresenterOwnerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScenePresenterOwner : NSObject <BSDescriptionProviding, BSInvalidatable>
{
    id _context;	// 8 = 0x8
    UIScenePresentationManager *_scenePresentationManager;	// 16 = 0x10
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;	// 24 = 0x18
    NSMutableOrderedSet *_activePresentersByPriority;	// 32 = 0x20
    NSMutableSet *_inactivePresentersByPriority;	// 40 = 0x28
    _UIScenePresenter *_prioritizedPresenter;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    id <_UIScenePresenterOwnerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000007384ba
@property(nonatomic) __weak id <_UIScenePresenterOwnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
- (void)_setActivePrioritizedPresenter:(id)arg1;	// IMP=0x0000000000738134
- (void)_updateActivePrioritizedPresenterIfNecessary;	// IMP=0x00000000007380e8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000737ec4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000737e74
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000737e58
- (id)succinctDescription;	// IMP=0x0000000000737e08
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000737d04
- (void)_invalidatePresenter:(id)arg1;	// IMP=0x0000000000737bbf
- (void)_deactivatePresenter:(id)arg1;	// IMP=0x0000000000737acd
- (void)_activatePresenter:(id)arg1;	// IMP=0x000000000073792b
- (_Bool)_isPresenterHosting:(id)arg1;	// IMP=0x000000000073787e
- (_Bool)_isPresenterActive:(id)arg1;	// IMP=0x00000000007377c2
- (id)presenterWithIdentifier:(id)arg1;	// IMP=0x0000000000737433
- (id)activePrioritizedPresenter;	// IMP=0x0000000000737425
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000737295
- (void)addPresenter:(id)arg1;	// IMP=0x00000000007371dc
@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)dealloc;	// IMP=0x00000000007370af
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;	// IMP=0x0000000000736f53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

