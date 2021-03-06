//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate-Protocol.h>

@class FBScene, NSMapTable, NSString, UIScenePresentationContext, _UISceneKeyboardProxyLayerForwardingManager, _UIScenePresenterOwner;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver>
{
    _UISceneKeyboardProxyLayerForwardingManager *_keyboardProxyLayerManager;	// 8 = 0x8
    FBScene *_scene;	// 16 = 0x10
    _UIScenePresenterOwner *_scenePresenterOwner;	// 24 = 0x18
    NSMapTable *_mapLayersToPresenterOwners;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
    UIScenePresentationContext *_defaultScenePresentationContext;	// 48 = 0x30
    id <UIScenePresentationManagerDelegate> _delegate;	// 56 = 0x38
    struct {
        _Bool defaultPriorityBand;
    } _delegateFlags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000074f3d5
@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext; // @synthesize defaultPresentationContext=_defaultScenePresentationContext;
@property(nonatomic) __weak id <UIScenePresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
- (_Bool)_hasPresenterWithIdentifier:(id)arg1;	// IMP=0x000000000074f1f3
- (long long)_defaultPresentationPriority;	// IMP=0x000000000074f1ac
- (id)_presenterWithIdentifier:(id)arg1;	// IMP=0x000000000074f010
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x000000000074ed04
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x000000000074eb93
- (void)ownerDidInvalidateLastPresenter:(id)arg1;	// IMP=0x000000000074eab5
- (void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3;	// IMP=0x000000000074e8fd
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000074e790
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000074e740
- (id)succinctDescriptionBuilder;	// IMP=0x000000000074e66c
- (id)succinctDescription;	// IMP=0x000000000074e61c
@property(readonly, copy) NSString *description;
- (id)snapshotPresentationForSnapshot:(id)arg1;	// IMP=0x000000000074e5bb
- (id)snapshotContext;	// IMP=0x000000000074e1b1
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;	// IMP=0x000000000074dcf3
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000074dc65
- (id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2;	// IMP=0x000000000074d94b
- (id)createPresenterWithIdentifier:(id)arg1;	// IMP=0x000000000074d8e3
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)modifyDefaultPresentationContext:(CDUnknownBlockType)arg1;	// IMP=0x000000000074d1bf
- (id)_initWithScene:(id)arg1 keyboardProxyLayerManager:(id)arg2;	// IMP=0x000000000074ce2a
- (id)_initWithScene:(id)arg1;	// IMP=0x000000000074cda9
- (id)init;	// IMP=0x000000000074cd10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

