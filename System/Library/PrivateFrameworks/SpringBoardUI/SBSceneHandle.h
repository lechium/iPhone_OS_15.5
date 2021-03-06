//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>
#import <SpringBoardUI/FBSceneMonitorDelegate-Protocol.h>
#import <SpringBoardUI/FBSceneObserver-Protocol.h>

@class FBSDisplayIdentity, FBSSceneDefinition, FBScene, FBSceneMonitor, NSHashTable, NSMapTable, NSString;

@interface SBSceneHandle : NSObject <FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding>
{
    FBSSceneDefinition *_definition;	// 8 = 0x8
    FBScene *_scene;	// 16 = 0x10
    FBSDisplayIdentity *_displayIdentity;	// 24 = 0x18
    _Bool _manuallyControlsLifecycle;	// 32 = 0x20
    FBSceneMonitor *_sceneMonitor;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSMapTable *_observersToObserverBehaviors;	// 56 = 0x38
    NSHashTable *_actionConsumers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000bb74
@property(nonatomic, getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:) _Bool manuallyControlsLifecycle; // @synthesize manuallyControlsLifecycle=_manuallyControlsLifecycle;
@property(retain, nonatomic, getter=_sceneMonitor, setter=_setSceneMonitor:) FBSceneMonitor *sceneMonitor; // @synthesize sceneMonitor=_sceneMonitor;
@property(readonly, nonatomic, getter=_definition) FBSSceneDefinition *definition; // @synthesize definition=_definition;
@property(retain, nonatomic, setter=_setDisplayIdentity:) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property(readonly, nonatomic) FBScene *sceneIfExists; // @synthesize sceneIfExists=_scene;
- (void)_setScene:(id)arg1;	// IMP=0x000000000000ba7d
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x000000000000b9c1
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;	// IMP=0x000000000000b9a3
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000000b97d
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;	// IMP=0x000000000000b957
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;	// IMP=0x000000000000b886
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;	// IMP=0x000000000000b869
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000b80e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000b7be
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000b71a
- (id)succinctDescription;	// IMP=0x000000000000b6ca
- (_Bool)_handleSceneAction:(id)arg1;	// IMP=0x000000000000b53d
- (void)_noteSceneDestroyed:(id)arg1;	// IMP=0x000000000000b428
- (void)_noteSceneCreated:(id)arg1;	// IMP=0x000000000000b37a
- (id)_createMonitor;	// IMP=0x000000000000b311
- (void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1;	// IMP=0x000000000000b19d
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;	// IMP=0x000000000000b083
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;	// IMP=0x000000000000af11
- (void)_didUpdateContentState:(long long)arg1;	// IMP=0x000000000000ae63
- (void)_didDestroyScene:(id)arg1;	// IMP=0x000000000000ad51
- (void)_didCreateScene:(id)arg1;	// IMP=0x000000000000acaa
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aae3
- (void)_commonInit;	// IMP=0x000000000000aadd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a9d3
@property(readonly, copy) NSString *description;
- (void)removeActionConsumer:(id)arg1;	// IMP=0x000000000000a951
- (void)addActionConsumer:(id)arg1;	// IMP=0x000000000000a8e2
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000a86a
- (void)addObserver:(id)arg1;	// IMP=0x000000000000a77b
- (_Bool)isPairedWithExternalSceneWithIdentifier:(id)arg1;	// IMP=0x000000000000a765
@property(readonly, nonatomic, getter=isContentReady) _Bool contentReady;
@property(readonly, nonatomic) long long contentState;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
@property(readonly, nonatomic) FBScene *scene;
- (void)dealloc;	// IMP=0x000000000000a520
- (id)_initWithDefinition:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;	// IMP=0x000000000000a283
- (id)_initWithDefinition:(id)arg1 displayIdentity:(id)arg2;	// IMP=0x000000000000a26c
- (id)_initWithScene:(id)arg1 displayIdentity:(id)arg2;	// IMP=0x000000000000a252
- (id)init;	// IMP=0x000000000000a1cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

