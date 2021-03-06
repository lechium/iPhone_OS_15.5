//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSString, SUDescriptor;

@interface SUKeybagOptions : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_passcode;	// 8 = 0x8
    SUDescriptor *_descriptor;	// 16 = 0x10
    int _keybagType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014a7e
@property(nonatomic) int keybagType; // @synthesize keybagType=_keybagType;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
- (id)description;	// IMP=0x0000000000014c31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014bcc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014b64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014a86
- (id)init;	// IMP=0x0000000000014a3c

@end

