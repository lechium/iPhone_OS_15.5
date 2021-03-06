//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXEventRepresentation, NSDictionary, NSLock, NSString, SCRCTargetSelectorTimer, SCRCThread, VOSCommandManager, VOTKeyInfo;

@interface VOTKeyboardManager : NSObject
{
    NSDictionary *_singleLetterCommandsTable;	// 8 = 0x8
    NSString *_lastLayout;	// 16 = 0x10
    NSDictionary *_layoutToKeyboardMap;	// 24 = 0x18
    NSDictionary *_keyboardMap;	// 32 = 0x20
    unsigned int _currentModifiers;	// 40 = 0x28
    _Bool _modifierToggleSpeakingKeyDown;	// 44 = 0x2c
    NSString *_lastCommand;	// 48 = 0x30
    SCRCTargetSelectorTimer *_keyRepeatTimer;	// 56 = 0x38
    unsigned int _keyboardHelpMask;	// 64 = 0x40
    _Bool _isQuickNavOn;	// 68 = 0x44
    SCRCTargetSelectorTimer *_quickNavRepostTimer;	// 72 = 0x48
    SCRCTargetSelectorTimer *_quickNavKeyTimer;	// 80 = 0x50
    unsigned long long _quickNavStateMask;	// 88 = 0x58
    unsigned long long _quickNavLastDownState;	// 96 = 0x60
    double _quickNavDownStateTime[2];	// 104 = 0x68
    double _quickNavLastRecordedActivation;	// 120 = 0x78
    _Bool _quickNavDidSendDown;	// 128 = 0x80
    _Bool _realCapsLockOn;	// 129 = 0x81
    _Bool _fakeCapsLockOn;	// 130 = 0x82
    _Bool _captureModeEnabled;	// 131 = 0x83
    _Bool _explictlyEnabledQuickNav;	// 132 = 0x84
    VOTKeyInfo *_keyDownInfo;	// 136 = 0x88
    NSLock *_keyDownLock;	// 144 = 0x90
    SCRCThread *_keyboardThread;	// 152 = 0x98
    _Bool _capsLockDown;	// 160 = 0xa0
    _Bool _modifierKeyLockEnabled;	// 161 = 0xa1
    double _capsLockTap1;	// 168 = 0xa8
    long long _consecutiveKeyPressCount;	// 176 = 0xb0
    VOTKeyInfo *_lastKeyForTapCount;	// 184 = 0xb8
    VOSCommandManager *_commandManager;	// 192 = 0xc0
    struct CGPoint _passthroughStart;	// 200 = 0xc8
    _Bool _controlKeyToggleSpeakingAllowed;	// 216 = 0xd8
    AXEventRepresentation *_lastDispatchedKeyEvent;	// 224 = 0xe0
    VOTKeyInfo *_lastReleasedToSystemKeyEvent;	// 232 = 0xe8
    double _lastReleasedToSystemKeyEventTime;	// 240 = 0xf0
    double _lastDispatchedKeyEventTime;	// 248 = 0xf8
    CDUnknownBlockType _testingEventDispatchTap;	// 256 = 0x100
    CDUnknownBlockType _testingProcessEventCallback;	// 264 = 0x108
    double _quickNavDownDurationAllowedAcceptance;	// 272 = 0x110
}

+ (id)keyboardManager;	// IMP=0x004000000010268e
+ (void)initialize;	// IMP=0x001000000010264d
- (void).cxx_destruct;	// IMP=0x0020000000107285
@property(nonatomic) _Bool controlKeyToggleSpeakingAllowed; // @synthesize controlKeyToggleSpeakingAllowed=_controlKeyToggleSpeakingAllowed;
@property(nonatomic) double quickNavDownDurationAllowedAcceptance; // @synthesize quickNavDownDurationAllowedAcceptance=_quickNavDownDurationAllowedAcceptance;
@property(copy, nonatomic) CDUnknownBlockType testingProcessEventCallback; // @synthesize testingProcessEventCallback=_testingProcessEventCallback;
@property(copy, nonatomic) CDUnknownBlockType testingEventDispatchTap; // @synthesize testingEventDispatchTap=_testingEventDispatchTap;
@property(nonatomic) double lastDispatchedKeyEventTime; // @synthesize lastDispatchedKeyEventTime=_lastDispatchedKeyEventTime;
@property(nonatomic) double lastReleasedToSystemKeyEventTime; // @synthesize lastReleasedToSystemKeyEventTime=_lastReleasedToSystemKeyEventTime;
@property(retain, nonatomic) VOTKeyInfo *lastReleasedToSystemKeyEvent; // @synthesize lastReleasedToSystemKeyEvent=_lastReleasedToSystemKeyEvent;
@property(retain, nonatomic) AXEventRepresentation *lastDispatchedKeyEvent; // @synthesize lastDispatchedKeyEvent=_lastDispatchedKeyEvent;
@property(nonatomic) _Bool explictlyEnabledQuickNav; // @synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav;
@property(readonly, nonatomic) _Bool isQuickNavOn; // @synthesize isQuickNavOn=_isQuickNavOn;
@property(nonatomic) _Bool captureModeEnabled; // @synthesize captureModeEnabled=_captureModeEnabled;
- (void)clearConsecutiveKeyPressCount;	// IMP=0x001000000010713b
- (void)_postEvent:(id)arg1;	// IMP=0x00100000001070a7
- (void)_handleQuickNavPressTimer:(id)arg1;	// IMP=0x001000000010705c
- (void)_handleQuickNavPress:(id)arg1;	// IMP=0x0010000000106ce8
- (void)_handleQuickNavDownArrowRepostPress:(id)arg1;	// IMP=0x0010000000106bd8
- (void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned int)arg3 keyFlags:(unsigned short)arg4 keyDown:(_Bool)arg5 source:(unsigned short)arg6;	// IMP=0x00100000001069bc
- (void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowMask:(long long)arg3;	// IMP=0x001000000010690b
- (void)_sendEvent:(id)arg1 withKeyInfo:(id)arg2 arrowMask:(long long)arg3;	// IMP=0x00100000001067ff
- (void)_keyRepeat:(id)arg1;	// IMP=0x00100000001067af
- (void)_dispatchKeyEventIntoSystem:(id)arg1;	// IMP=0x0010000000106496
- (_Bool)_keyInfoIsModifierOnly:(id)arg1;	// IMP=0x001000000010638f
- (void)_handleKeyboardKeyEvent:(id)arg1 isRepeatedEvent:(_Bool)arg2;	// IMP=0x00100000001060c4
- (void)_handleModifierCapsLockBehavior:(id)arg1;	// IMP=0x0010000000105ff6
- (void)_handleCapsLockToggle:(id)arg1;	// IMP=0x0010000000105c8f
- (void)_dispatchEventRepresentationIntoSystem:(id)arg1;	// IMP=0x0010000000105c16
- (_Bool)_keyEventShouldGoToFocusedContext:(id)arg1;	// IMP=0x0010000000105c0e
- (void)_handleKeyboardKeyEvent:(id)arg1;	// IMP=0x0010000000105bfa
- (void)_updateEventFlags:(id)arg1;	// IMP=0x0010000000105b12
- (void)_handleAnnouncementsForKeyInfo:(id)arg1;	// IMP=0x00100000001059cd
- (void)_speakCapsLockKey;	// IMP=0x0010000000105924
- (_Bool)_handleArrowKeyEvent:(id)arg1;	// IMP=0x001000000010549d
- (void)_initializeQuickNav;	// IMP=0x0010000000105332
- (void)_axEndPassthroughTouch;	// IMP=0x001000000010524a
- (void)_axStartPassthroughTouch;	// IMP=0x00100000001050b1
- (_Bool)_dispatchCommandForKeyInfo:(id)arg1 isRepeatedEvent:(_Bool)arg2;	// IMP=0x00100000001041d8
- (id)_localizeKeyboardString:(id)arg1;	// IMP=0x0010000000104166
- (void)setKeyDownInfo:(id)arg1;	// IMP=0x00100000001040dc
- (void)_updateConsecutiveKeyCount:(id)arg1;	// IMP=0x0010000000103fda
- (void)updateQuickNavState:(_Bool)arg1;	// IMP=0x0010000000103fca
- (id)keyDownInfo;	// IMP=0x0010000000103fa2
- (id)threadSafe_keyDownInfo;	// IMP=0x0010000000103f46
- (void)postEvent:(id)arg1;	// IMP=0x0010000000103eb7
- (id)singleLetterCommandForKeyInfo:(id)arg1;	// IMP=0x0010000000103dca
- (id)keyboardEventForKeyInfo:(id)arg1;	// IMP=0x00100000001035dc
- (id)_characterStringRepresentationForKey:(id)arg1;	// IMP=0x001000000010306a
- (void)loadKeyboardMap;	// IMP=0x0010000000102b7b
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(long long)arg2;	// IMP=0x0010000000102ac3
- (void)_initializeThread;	// IMP=0x0010000000102a29
- (_Bool)modifierKeyLockEnabled;	// IMP=0x0010000000102a1d
- (void)toggleVoiceOverModifierKeyLock;	// IMP=0x0010000000102a10
- (void)_verifyCorrectThread;	// IMP=0x0010000000102947
- (id)init;	// IMP=0x001000000010272e
- (void)dealloc;	// IMP=0x00100000001026b3
- (void)setCommandManager:(id)arg1;	// IMP=0x001000000010269f

@end

