//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TPSCallClassRequest
{
    int _callClass;	// 8 = 0x8
}

+ (id)unarchivedObjectClasses;	// IMP=0x000000000000ae87
@property(nonatomic) int callClass; // @synthesize callClass=_callClass;
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x000000000000adfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ad96
- (unsigned long long)hash;	// IMP=0x000000000000ad46
- (id)debugDescription;	// IMP=0x000000000000abf2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ab59
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000aabc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000aa7e
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;	// IMP=0x000000000000aa3c
- (id)initWithSubscriptionContext:(id)arg1;	// IMP=0x000000000000aa11

@end
