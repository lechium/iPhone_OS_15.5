//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCMicroGamepad <NSSecureCoding>
{
    CDUnknownBlockType _valueChangedHandler;	// 32 = 0x20
    long long _deviceType;	// 40 = 0x28
    _Bool _reportsAbsoluteDpadValues;	// 48 = 0x30
    _Bool _allowsRotation;	// 49 = 0x31
    GCControllerButtonInput *_button0;	// 56 = 0x38
    GCControllerButtonInput *_button1;	// 64 = 0x40
    GCControllerDirectionPad *_dpad;	// 72 = 0x48
    GCControllerButtonInput *_buttonMenu;	// 80 = 0x50
}

+ (id)_current;	// IMP=0x0000000000099c4e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000098e1e
- (void).cxx_destruct;	// IMP=0x0000000000099f0b
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) _Bool reportsAbsoluteDpadValues; // @synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues;
@property(readonly, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property(readonly, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(readonly, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button1;
@property(readonly, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000099ca5
- (void)setStateFromMicroGamepad:(id)arg1;	// IMP=0x000000000009945f
- (id)name;	// IMP=0x0000000000099452
- (id)saveSnapshot;	// IMP=0x0000000000099292
- (id)buttonB;	// IMP=0x0000000000099280
- (id)button1;	// IMP=0x000000000009926e
- (id)button0;	// IMP=0x000000000009925c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000991cd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000099105
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000098e26
- (void)setLastEventTimestamp:(double)arg1;	// IMP=0x00000000000a317f
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000a27f3
- (void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;	// IMP=0x00000000000a2478
- (id)productCategory;	// IMP=0x00000000000a23e8
- (_Bool)supportsDpadTaps;	// IMP=0x00000000000a23a4

// Remaining properties
@property(readonly, nonatomic) __weak GCController *controller; // @dynamic controller;

@end

