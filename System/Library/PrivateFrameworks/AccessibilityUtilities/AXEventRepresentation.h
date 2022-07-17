//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXEventAccelerometerInfoRepresentation, AXEventData, AXEventGameControllerInfoRepresentation, AXEventHandInfoRepresentation, AXEventIOSMACPointerInfoRepresentation, AXEventKeyInfoRepresentation, AXEventPointerInfoRepresentation, NSData, NSDictionary, NSString;

@interface AXEventRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    _Bool _isBuiltIn;	// 8 = 0x8
    _Bool _isDisplayIntegrated;	// 9 = 0x9
    _Bool _isGeneratedEvent;	// 10 = 0xa
    _Bool _useOriginalHIDTime;	// 11 = 0xb
    _Bool _redirectEvent;	// 12 = 0xc
    _Bool _systemDrag;	// 13 = 0xd
    unsigned int _type;	// 16 = 0x10
    unsigned int _originalType;	// 20 = 0x14
    int _subtype;	// 24 = 0x18
    int _flags;	// 28 = 0x1c
    unsigned int _taskPort;	// 32 = 0x20
    int _pid;	// 36 = 0x24
    unsigned int _contextId;	// 40 = 0x28
    unsigned int _displayId;	// 44 = 0x2c
    unsigned int _willUpdateMask;	// 48 = 0x30
    unsigned int _didUpdateMask;	// 52 = 0x34
    unsigned long long _time;	// 56 = 0x38
    unsigned long long _senderID;	// 64 = 0x40
    AXEventHandInfoRepresentation *_handInfo;	// 72 = 0x48
    AXEventKeyInfoRepresentation *_keyInfo;	// 80 = 0x50
    AXEventAccelerometerInfoRepresentation *_accelerometerInfo;	// 88 = 0x58
    AXEventGameControllerInfoRepresentation *_gameControllerInfo;	// 96 = 0x60
    AXEventPointerInfoRepresentation *_pointerControllerInfo;	// 104 = 0x68
    AXEventIOSMACPointerInfoRepresentation *_iosmacPointerInfo;	// 112 = 0x70
    NSString *_clientId;	// 120 = 0x78
    unsigned long long _HIDTime;	// 128 = 0x80
    NSData *_HIDAttributeData;	// 136 = 0x88
    long long _scrollAmount;	// 144 = 0x90
    long long _scrollAccelAmount;	// 152 = 0x98
    unsigned long long _additionalFlags;	// 160 = 0xa0
    long long _generationCount;	// 168 = 0xa8
    struct __IOHIDEvent *_creatorHIDEvent;	// 176 = 0xb0
    struct __IOHIDServiceClient *_creatorHIDServiceClient;	// 184 = 0xb8
    NSDictionary *_auxiliaryData;	// 192 = 0xc0
    AXEventData *_accessibilityData;	// 200 = 0xc8
    void *_window;	// 208 = 0xd0
    NSData *_data;	// 216 = 0xd8
    struct CGPoint _location;	// 224 = 0xe0
    struct CGPoint _windowLocation;	// 240 = 0xf0
}

+ (_Bool)_HIDEventIsAccessibilityEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000082396
+ (id)accessibilityEventRepresentationWithSender:(long long)arg1 usagePage:(long long)arg2 usage:(long long)arg3 modifierFlags:(long long)arg4 eventValue1:(float)arg5 eventValue2:(float)arg6;	// IMP=0x000000000007e7fc
+ (id)accessibilityEventRepresentationWithSender:(long long)arg1 usagePage:(long long)arg2 usage:(long long)arg3 modifierFlags:(long long)arg4;	// IMP=0x000000000007e7e1
+ (id)accessibilityEventRepresentationWithSender:(long long)arg1 usagePage:(long long)arg2 usage:(long long)arg3;	// IMP=0x000000000007e7cc
+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2;	// IMP=0x000000000007e630
+ (id)gestureRepresentationWithHandType:(unsigned int)arg1 locations:(id)arg2;	// IMP=0x000000000007e239
+ (id)iosmacPointerRepresentationWithTypeWithPointerInfo:(id)arg1;	// IMP=0x000000000007e124
+ (id)buttonRepresentationWithType:(unsigned int)arg1;	// IMP=0x000000000007e039
+ (id)keyRepresentationWithType:(unsigned int)arg1;	// IMP=0x000000000007defb
+ (id)accelerometerRepresentation:(id)arg1;	// IMP=0x000000000007ddfc
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 serviceClient:(struct __IOHIDServiceClient *)arg2 hidStreamIdentifier:(id)arg3 clientID:(id)arg4 taskPort:(unsigned int)arg5;	// IMP=0x000000000007d833
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2 clientID:(id)arg3 taskPort:(unsigned int)arg4;	// IMP=0x000000000007d809
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 serviceClient:(struct __IOHIDServiceClient *)arg2 hidStreamIdentifier:(id)arg3;	// IMP=0x000000000007d7e4
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;	// IMP=0x000000000007d7cc
+ (id)representationWithLocation:(struct CGPoint)arg1 windowLocation:(struct CGPoint)arg2 handInfo:(id)arg3;	// IMP=0x000000000007d73f
+ (id)_vendorDefinedAccessibilityEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007d6f2
+ (id)_motionGestureTapEvent:(struct __IOHIDEvent *)arg1 serviceClient:(struct __IOHIDServiceClient *)arg2 hidStreamIdentifier:(id)arg3 clientID:(id)arg4 taskPort:(unsigned int)arg5;	// IMP=0x000000000007d6ea
+ (id)_pointerControllerEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;	// IMP=0x000000000007d370
+ (id)_gameKeyboardControllerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007d357
+ (id)_gameControllerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007d2d9
+ (id)_wheelEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007d22c
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007ca73
+ (void)_appendKeyInfoToMediaKey:(id)arg1 usage:(long long)arg2 downEvent:(_Bool)arg3;	// IMP=0x000000000007c909
+ (id)_digitizerRepresentation:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;	// IMP=0x000000000007b7eb
+ (id)cancelEventForPathIndexMask:(unsigned int)arg1;	// IMP=0x000000000007b61e
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint)arg4 windowLocation:(struct CGPoint)arg5 handInfo:(id)arg6;	// IMP=0x000000000007b2f4
+ (id)representationWithData:(id)arg1;	// IMP=0x000000000007b289
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007b18b
- (void).cxx_destruct;	// IMP=0x0000000000082a2f
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) void *window; // @synthesize window=_window;
@property(retain, nonatomic) AXEventData *accessibilityData; // @synthesize accessibilityData=_accessibilityData;
@property(retain, nonatomic) NSDictionary *auxiliaryData; // @synthesize auxiliaryData=_auxiliaryData;
@property(nonatomic, getter=isSystemDrag) _Bool systemDrag; // @synthesize systemDrag=_systemDrag;
@property(nonatomic, getter=isRedirectEvent) _Bool redirectEvent; // @synthesize redirectEvent=_redirectEvent;
@property(retain, nonatomic) struct __IOHIDServiceClient *creatorHIDServiceClient; // @synthesize creatorHIDServiceClient=_creatorHIDServiceClient;
@property(retain, nonatomic) struct __IOHIDEvent *creatorHIDEvent; // @synthesize creatorHIDEvent=_creatorHIDEvent;
@property(nonatomic) _Bool useOriginalHIDTime; // @synthesize useOriginalHIDTime=_useOriginalHIDTime;
@property(nonatomic) _Bool isGeneratedEvent; // @synthesize isGeneratedEvent=_isGeneratedEvent;
@property(nonatomic) unsigned int didUpdateMask; // @synthesize didUpdateMask=_didUpdateMask;
@property(nonatomic) unsigned int willUpdateMask; // @synthesize willUpdateMask=_willUpdateMask;
@property(nonatomic) long long generationCount; // @synthesize generationCount=_generationCount;
@property(nonatomic) _Bool isDisplayIntegrated; // @synthesize isDisplayIntegrated=_isDisplayIntegrated;
@property(nonatomic) _Bool isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(nonatomic) unsigned int displayId; // @synthesize displayId=_displayId;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned long long additionalFlags; // @synthesize additionalFlags=_additionalFlags;
@property(nonatomic) long long scrollAccelAmount; // @synthesize scrollAccelAmount=_scrollAccelAmount;
@property(nonatomic) long long scrollAmount; // @synthesize scrollAmount=_scrollAmount;
@property(retain, nonatomic) NSData *HIDAttributeData; // @synthesize HIDAttributeData=_HIDAttributeData;
@property(nonatomic) unsigned long long HIDTime; // @synthesize HIDTime=_HIDTime;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int taskPort; // @synthesize taskPort=_taskPort;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) AXEventIOSMACPointerInfoRepresentation *iosmacPointerInfo; // @synthesize iosmacPointerInfo=_iosmacPointerInfo;
@property(retain, nonatomic) AXEventPointerInfoRepresentation *pointerControllerInfo; // @synthesize pointerControllerInfo=_pointerControllerInfo;
@property(retain, nonatomic) AXEventGameControllerInfoRepresentation *gameControllerInfo; // @synthesize gameControllerInfo=_gameControllerInfo;
@property(retain, nonatomic) AXEventAccelerometerInfoRepresentation *accelerometerInfo; // @synthesize accelerometerInfo=_accelerometerInfo;
@property(retain, nonatomic) AXEventKeyInfoRepresentation *keyInfo; // @synthesize keyInfo=_keyInfo;
@property(retain, nonatomic) AXEventHandInfoRepresentation *handInfo; // @synthesize handInfo=_handInfo;
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint windowLocation; // @synthesize windowLocation=_windowLocation;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned int originalType; // @synthesize originalType=_originalType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)_accessibilityDataFromRealEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000825d8
- (void)_applyAccessibilityDataToRealEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000824ab
- (struct __IOHIDEvent *)_accessibilityEventFromRealEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000082410
- (_Bool)_HIDEventIsAccessibilityEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000823e9
- (void)applyAccessibilityDataToCreatorHIDEvent;	// IMP=0x000000000008235b
- (unsigned char)screenEdgeForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000082305
@property(readonly, nonatomic) _Bool isCancel;
@property(readonly, nonatomic) _Bool isInRangeLift;
@property(readonly, nonatomic) _Bool isInRange;
@property(readonly, nonatomic) _Bool isLift;
@property(readonly, nonatomic) _Bool isChordChange;
@property(readonly, nonatomic) _Bool isMove;
@property(readonly, nonatomic) _Bool isTouchDown;
@property(readonly, nonatomic) unsigned long long fingerCount;
- (id)_senderNameForID;	// IMP=0x0000000000082000
@property(readonly, copy) NSString *description;
- (id)accessibilityEventRepresentationTabularDescription;	// IMP=0x0000000000081b8b
- (unsigned int)firstPathContextId;	// IMP=0x0000000000081ada
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000816ec
- (void)dealloc;	// IMP=0x0000000000081683
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000081096
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080a90
- (struct __IOHIDEvent *)_newHandHIDEventRef;	// IMP=0x000000000007ff9d
- (struct __IOHIDEvent *)_newIOSMACPointerRef;	// IMP=0x000000000007fe6a
- (id)denormalizedEventRepresentation:(_Bool)arg1 descale:(_Bool)arg2;	// IMP=0x000000000007fc93
- (void)neuterUpdates;	// IMP=0x000000000007faa7
- (void)modifyPoints:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f8ea
- (id)fakeTouchScaleEventRepresentation:(_Bool)arg1;	// IMP=0x000000000007f5c1
- (id)normalizedEventRepresentation:(_Bool)arg1 scale:(_Bool)arg2;	// IMP=0x000000000007f3ea
- (struct __IOHIDEvent *)_newAccessibilityHIDEventRef;	// IMP=0x000000000007f330
- (struct __IOHIDEvent *)_newButtonHIDEventRefWithType:(unsigned int)arg1;	// IMP=0x000000000007ee07
- (struct __IOHIDEvent *)_newKeyboardHIDEventRef;	// IMP=0x000000000007ecec
- (struct __IOHIDEvent *)_newAccelerometerHIDEventRef;	// IMP=0x000000000007eba3
- (unsigned long long)_machTimeForHIDEventRef;	// IMP=0x000000000007eb61
- (_Bool)isDownEvent;	// IMP=0x000000000007eaff
- (struct __IOHIDEvent *)newHIDEventRef;	// IMP=0x000000000007e99e
- (id)dataRepresentation;	// IMP=0x000000000007e95a
@property(readonly, nonatomic) _Bool willBeUpdated;
@property(readonly, nonatomic) _Bool isUpdate;
- (void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg1;	// IMP=0x000000000007c6e6
- (unsigned int)pathIndexMask;	// IMP=0x000000000007b44e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
