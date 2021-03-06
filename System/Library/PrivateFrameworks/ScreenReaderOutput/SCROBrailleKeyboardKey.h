//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSString;

@interface SCROBrailleKeyboardKey <NSSecureCoding>
{
    unsigned int _modifiers;	// 72 = 0x48
    unsigned int _keyCode;	// 76 = 0x4c
    unsigned int _virtualKeyCode;	// 80 = 0x50
    NSString *_keyString;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026904
- (void).cxx_destruct;	// IMP=0x0000000000026b6c
@property(nonatomic) unsigned int virtualKeyCode; // @synthesize virtualKeyCode=_virtualKeyCode;
@property(nonatomic) unsigned int keyCode; // @synthesize keyCode=_keyCode;
@property(nonatomic) unsigned int modifiers; // @synthesize modifiers=_modifiers;
@property(retain, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026a0c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002690c
- (id)description;	// IMP=0x000000000002685a

@end

