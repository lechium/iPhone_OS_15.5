//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayController, BKIOHIDServiceMatcher, BKKeyboardInfo, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BKHIDEventProcessorRegistering, BKHIDSystemInterfacing, BSInvalidatable;

@interface BKKeyboardHIDEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_allKeyboardsBySenderID;	// 16 = 0x10
    NSMutableArray *_usableKeyboards;	// 24 = 0x18
    NSMutableArray *_eventRecognizers;	// 32 = 0x20
    NSMutableSet *_keyCommandsToAuthenticate;	// 40 = 0x28
    NSString *_keyboardLayout;	// 48 = 0x30
    BSCompoundAssertion *_keyboardObserverAssertion;	// 56 = 0x38
    long long _globalActiveModifiers;	// 64 = 0x40
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 72 = 0x48
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 80 = 0x50
    NSMutableDictionary *_keyCodesDownPerSenderID;	// 88 = 0x58
    NSMutableSet *_senderIDsWithModifiersOnly;	// 96 = 0x60
    _Bool _systemAppConsumesAllKeyboardEvents;	// 104 = 0x68
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 112 = 0x70
    id <BKHIDSystemInterfacing> _eventSystemInterface;	// 120 = 0x78
    id <BKHIDEventProcessorRegistering> _eventProcessorRegistry;	// 128 = 0x80
    BKDisplayController *_displayController;	// 136 = 0x88
    BKKeyboardInfo *_primaryKeyboardInfo;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000000308bd
@property(nonatomic) _Bool systemAppConsumesAllKeyboardEvents; // @synthesize systemAppConsumesAllKeyboardEvents=_systemAppConsumesAllKeyboardEvents;
@property(retain, nonatomic) BKKeyboardInfo *primaryKeyboardInfo; // @synthesize primaryKeyboardInfo=_primaryKeyboardInfo;
@property(retain, nonatomic) BKDisplayController *displayController; // @synthesize displayController=_displayController;
@property(retain, nonatomic) id <BKHIDEventProcessorRegistering> eventProcessorRegistry; // @synthesize eventProcessorRegistry=_eventProcessorRegistry;
@property(retain, nonatomic) id <BKHIDSystemInterfacing> eventSystemInterface; // @synthesize eventSystemInterface=_eventSystemInterface;
@property(retain, nonatomic) BKIOHIDServiceMatcher *keyboardServiceMatcher; // @synthesize keyboardServiceMatcher=_keyboardServiceMatcher;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x00100000000306dd
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0010000000030682
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x00100000000305b1
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x0010000000030568
- (void)_smartKeyboardAttachmentStateDidChangeForSenderID:(unsigned long long)arg1;	// IMP=0x00100000000304bc
- (void)_lock_smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x00100000000303c6
- (void)smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x001000000003036b
- (void)_lock_stopWatchingForGestures:(id)arg1;	// IMP=0x00100000000302a5
- (void)_lock_watchForGestures:(id)arg1;	// IMP=0x001000000003009f
- (void)_lock_handleKeyEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002f507
- (void)_lock_applyDeliveryInformation:(id)arg1 eventSource:(int)arg2 seenModifiersOnly:(_Bool)arg3 toEvent:(struct __IOHIDEvent *)arg4;	// IMP=0x001000000002f2a3
- (void)_lock_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002ef18
- (int)_eventSourceForKeyboardInfo:(id)arg1 sender:(id)arg2;	// IMP=0x001000000002eee5
- (id)_lock_destinationsForKeyboardEvent:(struct __IOHIDEvent *)arg1 keyboard:(id)arg2 senderInfo:(id)arg3 dispatcher:(id)arg4;	// IMP=0x001000000002eaf7
- (id)_lock_keyEventDestinationsFromDeliveryDestinations:(id)arg1 authenticationSpecification:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002ea1f
- (void)_lock_cancelKeyDownEvents:(id)arg1;	// IMP=0x001000000002e819
- (void)_lock_usableKeyboardDetached:(id)arg1;	// IMP=0x001000000002e647
- (void)_lock_usableKeyboardAttached:(id)arg1;	// IMP=0x001000000002e4d7
- (void)_lock_setPrimaryKeyboard:(id)arg1;	// IMP=0x001000000002e2df
- (void)_lock_keyboardRemoved:(id)arg1;	// IMP=0x001000000002e06e
- (void)_lock_keyboardsDetected:(id)arg1;	// IMP=0x001000000002dff1
- (void)_lock_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x001000000002de79
- (_Bool)_lock_anyKeyboardHasCapsLockActive;	// IMP=0x001000000002dd44
- (long long)_lock_activeModifiers;	// IMP=0x001000000002dcee
- (void)_lock_updateGlobalModifierState;	// IMP=0x001000000002db6f
@property(copy) NSSet *keyCommandsToAuthenticate;
- (_Bool)capsLockKeyHasLanguageSwitchLabel;	// IMP=0x001000000002dae4
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setCapsLockDelayOverride:(double)arg1;	// IMP=0x001000000002d93c
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x001000000002d7db
- (id)devicePropertiesForSenderID:(unsigned long long)arg1;	// IMP=0x001000000002d63d
- (_Bool)isCapsLockLightOnForSenderID:(unsigned long long)arg1;	// IMP=0x001000000002d595
- (void)setCapsLockDelayOverride:(double)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x001000000002d4e6
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x001000000002d43b
- (void)setKeyboardLayout:(id)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x001000000002d225
- (id)keyboardLanguageForSenderID:(unsigned long long)arg1;	// IMP=0x001000000002d16f
- (id)addGlobalKeyboardObserver:(id)arg1;	// IMP=0x001000000002d01e
@property(readonly) long long activeModifiers;
@property(retain) NSString *keyboardLayout;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002cb65
- (int)eventSourceForSender:(id)arg1;	// IMP=0x001000000002ca90
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x001000000002c931
- (id)initWithContext:(id)arg1;	// IMP=0x001000000002c5e2

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
