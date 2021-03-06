//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ILMessageClassificationRequest <NSSecureCoding>
{
    NSArray *_messageCommunications;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007804
- (void).cxx_destruct;	// IMP=0x00000000000079e1
@property(readonly, copy, nonatomic) NSArray *messageCommunications; // @synthesize messageCommunications=_messageCommunications;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007917
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000780c
- (unsigned long long)hash;	// IMP=0x00000000000077c0
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x00000000000076d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007677
- (id)description;	// IMP=0x00000000000075c8
- (id)init;	// IMP=0x00000000000075ba
- (id)initWithMessageCommunications:(id)arg1;	// IMP=0x000000000000754c

@end

