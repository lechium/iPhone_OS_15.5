//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent
{
    CNContact *_member;	// 8 = 0x8
    CNGroup *_group;	// 16 = 0x10
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x000000000001fe29
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f732
- (void).cxx_destruct;	// IMP=0x000000000001fe56
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) CNContact *member; // @synthesize member=_member;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x000000000001fcb7
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x000000000001fc3e
- (id)description;	// IMP=0x000000000001fb52
- (unsigned long long)hash;	// IMP=0x000000000001f9d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f73a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f6b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f5f2
- (id)initWithMember:(id)arg1 group:(id)arg2;	// IMP=0x000000000001f45a
- (id)init;	// IMP=0x000000000001f41d

@end

