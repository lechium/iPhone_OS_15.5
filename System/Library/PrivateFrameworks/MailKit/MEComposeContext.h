//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@class MEMessage, NSUUID;

@interface MEComposeContext : NSObject <NSSecureCoding>
{
    _Bool _isEncrypted;	// 8 = 0x8
    _Bool _shouldEncrypt;	// 9 = 0x9
    _Bool _isSigned;	// 10 = 0xa
    _Bool _shouldSign;	// 11 = 0xb
    NSUUID *_contextID;	// 16 = 0x10
    MEMessage *_originalMessage;	// 24 = 0x18
    long long _action;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004c03
- (void).cxx_destruct;	// IMP=0x0000000000004fbe
@property(nonatomic) _Bool shouldSign; // @synthesize shouldSign=_shouldSign;
@property(nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(nonatomic) _Bool shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property(nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) MEMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(retain, nonatomic) NSUUID *contextID; // @synthesize contextID=_contextID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004d9e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004c0b
- (id)initWithAction:(long long)arg1 originalMessage:(id)arg2 shouldSign:(_Bool)arg3 isSigned:(_Bool)arg4 shouldEncrypt:(_Bool)arg5 isEncrypted:(_Bool)arg6;	// IMP=0x0000000000004b11

@end

