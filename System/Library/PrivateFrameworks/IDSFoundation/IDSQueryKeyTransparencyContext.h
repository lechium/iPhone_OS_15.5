//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_ticket;	// 8 = 0x8
    NSData *_accountKey;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c03f2
- (void).cxx_destruct;	// IMP=0x00000000000c0581
@property(readonly, nonatomic) NSData *accountKey; // @synthesize accountKey=_accountKey;
@property(readonly, nonatomic) NSUUID *ticket; // @synthesize ticket=_ticket;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c04bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c03fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c03e7
- (unsigned long long)hash;	// IMP=0x00000000000c035a
- (_Bool)isEqualToQueryKeyTransparencyContext:(id)arg1;	// IMP=0x00000000000c017e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c0125
- (id)description;	// IMP=0x00000000000c006f
- (id)initWithTicket:(id)arg1 accountKey:(id)arg2;	// IMP=0x00000000000bffd6

@end

