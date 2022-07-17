//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_payloadHash;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008e3ea
- (void).cxx_destruct;	// IMP=0x000000000008e4bd
@property(retain, nonatomic) NSData *payloadHash; // @synthesize payloadHash=_payloadHash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008e47f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008e3f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e3df
- (id)description;	// IMP=0x000000000008e39e
- (unsigned long long)hash;	// IMP=0x000000000008e388
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008e32f
- (_Bool)isEqualToReplayKey:(id)arg1;	// IMP=0x000000000008e2d8
- (id)initWithHash:(id)arg1;	// IMP=0x000000000008e26d
- (id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2;	// IMP=0x000000000008e0ca

@end
