//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMFControlGroupIdentifier, NSArray, NSDate;

@interface DMFJoinControlGroupRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;	// 8 = 0x8
    NSArray *_leaderIdentifiers;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ab98
- (void).cxx_destruct;	// IMP=0x000000000002aee3
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *leaderIdentifiers; // @synthesize leaderIdentifiers=_leaderIdentifiers;
@property(retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ad71
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002aba0

@end
