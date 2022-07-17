//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface MEEncodedOutgoingMessage : NSObject <NSSecureCoding>
{
    _Bool _isSigned;	// 8 = 0x8
    _Bool _isEncrypted;	// 9 = 0x9
    NSData *_rawData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008eb4
- (void).cxx_destruct;	// IMP=0x0000000000009219
@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(readonly, copy, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009090
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008fae
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008ebc
- (id)initWithRawData:(id)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3;	// IMP=0x0000000000008e1f

@end
