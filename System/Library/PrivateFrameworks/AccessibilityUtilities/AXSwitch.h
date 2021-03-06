//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXMIDIEvent, NSString, NSUUID;

@interface AXSwitch : NSObject <NSSecureCoding>
{
    unsigned short _keyCode;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    long long _longPressAction;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    NSString *_productName;	// 56 = 0x38
    NSString *_manufacturerName;	// 64 = 0x40
    NSUUID *_uuid;	// 72 = 0x48
    long long _buttonNumber;	// 80 = 0x50
    long long _headSwitch;	// 88 = 0x58
    AXMIDIEvent *_midiEvent;	// 96 = 0x60
    long long _accessibilityEventUsagePage;	// 104 = 0x68
    long long _accessibilityEventUsage;	// 112 = 0x70
    long long _accessibilityEventModifierFlags;	// 120 = 0x78
    NSString *_remoteSwitchIdentifier;	// 128 = 0x80
    NSString *_remoteDeviceName;	// 136 = 0x88
    NSString *_remoteDeviceIdentifier;	// 144 = 0x90
}

+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4;	// IMP=0x00000000000b9d06
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9347
- (void).cxx_destruct;	// IMP=0x00000000000baddd
@property(copy, nonatomic) NSString *remoteDeviceIdentifier; // @synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier;
@property(copy, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(copy, nonatomic) NSString *remoteSwitchIdentifier; // @synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier;
@property(nonatomic) long long accessibilityEventModifierFlags; // @synthesize accessibilityEventModifierFlags=_accessibilityEventModifierFlags;
@property(nonatomic) long long accessibilityEventUsage; // @synthesize accessibilityEventUsage=_accessibilityEventUsage;
@property(nonatomic) long long accessibilityEventUsagePage; // @synthesize accessibilityEventUsagePage=_accessibilityEventUsagePage;
@property(retain, nonatomic) AXMIDIEvent *midiEvent; // @synthesize midiEvent=_midiEvent;
@property(nonatomic) long long headSwitch; // @synthesize headSwitch=_headSwitch;
@property(nonatomic) long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long longPressAction; // @synthesize longPressAction=_longPressAction;
@property(nonatomic) long long action; // @synthesize action=_action;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba5fd
- (unsigned long long)hash;	// IMP=0x00000000000ba5b9
- (id)description;	// IMP=0x00000000000ba30b
@property(readonly, nonatomic) NSString *localizedSourceDescription;
@property(readonly, nonatomic) _Bool supportsLongPress;
@property(readonly, nonatomic) _Bool hasLongPressAction;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4;	// IMP=0x00000000000b9d9f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b97a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b934f

@end

