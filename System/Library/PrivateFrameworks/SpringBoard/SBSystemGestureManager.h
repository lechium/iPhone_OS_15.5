//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBIndirectTouchLifecycleMonitor, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;	// 8 = 0x8
    NSMutableDictionary *_typeToGesture;	// 16 = 0x10
    NSMutableDictionary *_gestureToType;	// 24 = 0x18
    NSMutableDictionary *_typeToState;	// 32 = 0x20
    NSMutableSet *_recognizingTouchGestures;	// 40 = 0x28
    NSMutableSet *_touchGestures;	// 48 = 0x30
    NSMutableSet *_gesturesDisabledAssertions;	// 56 = 0x38
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;	// 64 = 0x40
    NSSet *_gesturesPreventedByStylus;	// 72 = 0x48
    UIGestureRecognizer *_stylusPriorityRecognizer;	// 80 = 0x50
    _Bool _systemGesturesDisabledForAccessibility;	// 88 = 0x58
    SBIndirectTouchLifecycleMonitor *_indirectTouchLifecycleMonitor;	// 96 = 0x60
}

+ (id)mainDisplayManager;	// IMP=0x00000000000503f2
- (void).cxx_destruct;	// IMP=0x00000000005248fb
@property(retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor; // @synthesize indirectTouchLifecycleMonitor=_indirectTouchLifecycleMonitor;
@property(retain, nonatomic) NSSet *gesturesPreventedByStylus; // @synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus;
@property(nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility; // @synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility;
- (id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2;	// IMP=0x0000000000524768
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg1;	// IMP=0x0000000000524700
- (void)_systemGestureChanged:(id)arg1;	// IMP=0x000000000005bfe1
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x000000000006cbfd
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x000000000007f4f6
- (_Bool)shouldEnableSystemGestureWithType:(unsigned long long)arg1;	// IMP=0x000000000052466c
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;	// IMP=0x0000000000524664
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;	// IMP=0x000000000052465c
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1;	// IMP=0x000000000007f770
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;	// IMP=0x0000000000050836
- (void)_evaluateEnablement;	// IMP=0x0000000000523d6c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000523cd7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000523c87
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000523c22
- (id)succinctDescription;	// IMP=0x0000000000523bd2
- (id)windowForSystemGestures;	// IMP=0x00000000000a0914
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;	// IMP=0x000000000005043e
@property(readonly, nonatomic, getter=isAnyTouchGestureRunning) _Bool anyTouchGestureRunning;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000523b03
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000523a65
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x000000000006c8e1
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x000000000007ef1a
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000523828
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000523805
- (void)dealloc;	// IMP=0x00000000005236d7
- (id)_initWithDisplayIdentity:(id)arg1;	// IMP=0x00000000005234fe
- (id)init;	// IMP=0x0000000000523477

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
