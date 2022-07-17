//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMutableSet, NSSet, UIPress;

@interface UIPressesEvent
{
    NSMutableSet *_allPresses;	// 56 = 0x38
    NSHashTable *_terminalEventRegistrants;	// 64 = 0x40
    UIPress *_triggeringPhysicalButton;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d7321b
@property(retain, nonatomic) UIPress *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;	// IMP=0x0000000000d7304c
- (id)_terminalRegistrantsForPressType:(long long)arg1;	// IMP=0x0000000000d72e13
- (void)_unregisterForTerminalEvent:(id)arg1;	// IMP=0x0000000000d72df6
- (void)_registerForTerminalEvent:(id)arg1;	// IMP=0x0000000000d72d03
- (id)description;	// IMP=0x0000000000d72c7b
- (id)_directionalPressWithStrongestForce;	// IMP=0x0000000000d72ab7
- (void)_removePhysicalButton:(id)arg1;	// IMP=0x0000000000d72a4c
- (void)_addGesturesForPress:(id)arg1;	// IMP=0x0000000000d7267f
- (void)_addPress:(id)arg1 forDelayedDelivery:(_Bool)arg2;	// IMP=0x0000000000d72608
- (id)_gestureRecognizersForWindow:(id)arg1;	// IMP=0x0000000000d7241a
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;	// IMP=0x0000000000d72236
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;	// IMP=0x0000000000d72224
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;	// IMP=0x0000000000d7200f
- (id)_physicalButtonsForPhase:(long long)arg1;	// IMP=0x0000000000d71e04
- (id)_respondersForWindow:(id)arg1;	// IMP=0x0000000000d71c37
- (id)physicalButtonsForWindow:(id)arg1;	// IMP=0x0000000000d71a61
- (long long)_modifierFlags;	// IMP=0x0000000000d718f4
- (id)_allPresses;	// IMP=0x0000000000d718cf
- (id)_windows;	// IMP=0x0000000000d7172c
- (id)pressesForGestureRecognizer:(id)arg1;	// IMP=0x0000000000d71501
@property(readonly, nonatomic) NSSet *allPresses;
- (id)_cloneEvent;	// IMP=0x0000000000d7148a
- (void)_cleanupAfterDispatch;	// IMP=0x0000000000d71484
- (long long)subtype;	// IMP=0x0000000000d7147c
- (long long)type;	// IMP=0x0000000000d71471
- (id)_init;	// IMP=0x0000000000d71414

@end
