//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TPSCallingLineIdRestrictionSetRequest
{
    long long _state;	// 8 = 0x8
}

+ (id)unarchivedObjectClasses;	// IMP=0x00000000000123bd
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x000000000001236e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012307
- (unsigned long long)hash;	// IMP=0x00000000000122bc
- (id)debugDescription;	// IMP=0x0000000000012145
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000120b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012012
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011fd2
- (id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2;	// IMP=0x0000000000011f8e
- (id)initWithSubscriptionContext:(id)arg1;	// IMP=0x0000000000011f63

@end

