//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

@interface CNChangeHistoryLinkContactsEvent
{
    CNContact *_fromContact;	// 8 = 0x8
    CNContact *_toContact;	// 16 = 0x10
    CNContact *_unifiedContact;	// 24 = 0x18
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x00000000000229bb
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022063
- (void).cxx_destruct;	// IMP=0x00000000000229f9
@property(readonly, nonatomic) CNContact *unifiedContact; // @synthesize unifiedContact=_unifiedContact;
@property(readonly, nonatomic) CNContact *toContact; // @synthesize toContact=_toContact;
@property(readonly, nonatomic) CNContact *fromContact; // @synthesize fromContact=_fromContact;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x0000000000022849
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x00000000000227d0
- (id)description;	// IMP=0x00000000000226a7
- (unsigned long long)hash;	// IMP=0x000000000002243c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002206b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021fcd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021ed5
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2 unifiedContact:(id)arg3;	// IMP=0x0000000000021c9d
- (id)init;	// IMP=0x0000000000021c60

@end
