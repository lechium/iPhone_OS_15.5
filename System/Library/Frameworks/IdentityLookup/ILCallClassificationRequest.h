//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ILCallClassificationRequest <NSSecureCoding>
{
    NSArray *_callCommunications;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006f62
- (void).cxx_destruct;	// IMP=0x000000000000711e
@property(readonly, copy, nonatomic) NSArray *callCommunications; // @synthesize callCommunications=_callCommunications;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007054
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006f6a
- (unsigned long long)hash;	// IMP=0x0000000000006f1e
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x0000000000006e32
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006dd5
- (id)description;	// IMP=0x0000000000006d26
- (id)init;	// IMP=0x0000000000006d18
- (id)initWithCallCommunications:(id)arg1;	// IMP=0x0000000000006caa

@end
