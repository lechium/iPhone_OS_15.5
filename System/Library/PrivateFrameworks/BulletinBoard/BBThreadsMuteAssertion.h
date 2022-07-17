//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSSet;

@interface BBThreadsMuteAssertion
{
    NSMutableDictionary *_mutableExpirationDateByThreadID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000068f16
+ (id)threadsMuteAssertion;	// IMP=0x0000000000068708
- (void).cxx_destruct;	// IMP=0x000000000006904c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000068f9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000068f1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000068eaa
- (id)description;	// IMP=0x0000000000068e62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068dce
- (unsigned long long)hash;	// IMP=0x0000000000068bd3
@property(readonly, copy, nonatomic) NSSet *threadIDs;
- (void)getNextExpirationDate:(id *)arg1 wasPurged:(_Bool *)arg2;	// IMP=0x00000000000688c5
- (void)setUnmutedForThreadIdentifier:(id)arg1;	// IMP=0x00000000000688a8
- (void)setMutedUntilDate:(id)arg1 forThreadIdentifier:(id)arg2;	// IMP=0x000000000006888b
- (_Bool)isActiveForThreadIdentifier:(id)arg1;	// IMP=0x00000000000687b3
@property(readonly, copy, nonatomic) NSDictionary *expirationDateByThreadID;
- (id)_init;	// IMP=0x0000000000068731

@end
