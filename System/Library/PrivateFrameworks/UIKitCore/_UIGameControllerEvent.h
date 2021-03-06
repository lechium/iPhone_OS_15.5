//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent
{
    CDStruct_a7a14e3b _previousState;	// 56 = 0x38
    unsigned long long _activeComponent;	// 288 = 0x120
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7bc75
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7bc13
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7bbb1
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7bb56
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7b858
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000d7b019
- (struct CGPoint)_leftStickPosition;	// IMP=0x0000000000d7b000
- (void)_maybeConvertAndSendAsPressesEvent;	// IMP=0x0000000000d7ac86
- (void)_reset;	// IMP=0x0000000000d7ac0a
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000d7abef
- (long long)subtype;	// IMP=0x0000000000d7abe7
- (long long)type;	// IMP=0x0000000000d7abdc

@end

