//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>

@class NSString, SBHomeGestureDockSwitcherModifier;

@interface SBExternalHomeGestureFloatingSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate>
{
    SBHomeGestureDockSwitcherModifier *_dockModifier;	// 24 = 0x18
    long long _initialFloatingConfiguration;	// 32 = 0x20
    long long _interfaceOrientation;	// 40 = 0x28
    _Bool _stashed;	// 48 = 0x30
    struct CGRect _stashedContainerViewBounds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000006cb044
- (long long)currentFinalDestination;	// IMP=0x00000000006cb039
- (void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1;	// IMP=0x00000000006cad6e
- (id)handleGestureEvent:(id)arg1;	// IMP=0x00000000006cac55
- (id)appLayoutsToResignActive;	// IMP=0x00000000006cab45
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000006caac8
- (_Bool)isFloatingDockGesturePossible;	// IMP=0x00000000006caac0
- (struct CGRect)containerViewBounds;	// IMP=0x00000000006caa60
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x00000000006ca965
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;	// IMP=0x00000000006ca8e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

