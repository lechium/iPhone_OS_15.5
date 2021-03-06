//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface SPPairingConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isZeus;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _roleId;	// 24 = 0x18
    NSString *_roleEmoji;	// 32 = 0x20
    NSData *_collaborativeKeyC3;	// 40 = 0x28
    NSData *_signatureS4;	// 48 = 0x30
    NSData *_keyStatus;	// 56 = 0x38
    long long _batteryLevel;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000037a8
- (void).cxx_destruct;	// IMP=0x0000000000003d4e
@property(nonatomic) long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) _Bool isZeus; // @synthesize isZeus=_isZeus;
@property(copy, nonatomic) NSData *keyStatus; // @synthesize keyStatus=_keyStatus;
@property(copy, nonatomic) NSData *signatureS4; // @synthesize signatureS4=_signatureS4;
@property(copy, nonatomic) NSData *collaborativeKeyC3; // @synthesize collaborativeKeyC3=_collaborativeKeyC3;
@property(copy, nonatomic) NSString *roleEmoji; // @synthesize roleEmoji=_roleEmoji;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003b06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003a15
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000038cb
- (id)initWithName:(id)arg1 roleId:(long long)arg2 roleEmoji:(id)arg3 keyStatus:(id)arg4 collaborativeKeyC3:(id)arg5 signatureS4:(id)arg6 isZeus:(_Bool)arg7 batteryLevel:(long long)arg8;	// IMP=0x00000000000037b0

@end

