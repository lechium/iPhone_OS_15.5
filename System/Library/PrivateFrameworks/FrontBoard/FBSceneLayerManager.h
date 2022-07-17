//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBScene, NSHashTable, NSOrderedSet, NSString;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;	// 8 = 0x8
    NSOrderedSet *_layers;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    FBScene *_scene;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000057e2b
@property(readonly, nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSOrderedSet *layers; // @synthesize layers=_layers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_observer_sceneLayerManagerDidUpdateLayers;	// IMP=0x0000000000057cad
- (void)_observer_didStopTrackingLayers;	// IMP=0x0000000000057b59
- (void)_observer_didStartTrackingLayers;	// IMP=0x0000000000057a05
- (void)_setLayers:(id)arg1;	// IMP=0x0000000000057625
- (id)_initWithScene:(id)arg1;	// IMP=0x00000000000574e6
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000057417
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000573c7
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000057342
- (id)succinctDescription;	// IMP=0x00000000000572f2
@property(readonly, copy) NSString *description;
- (id)layerWithContextID:(unsigned int)arg1;	// IMP=0x000000000005718b
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000570fc
- (void)addObserver:(id)arg1;	// IMP=0x000000000005705d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
