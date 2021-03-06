//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMNoteShareRelationshipRestrictions, NSArray;

@interface EDAMNoteShareRelationships
{
    NSArray *_invitations;	// 8 = 0x8
    NSArray *_memberships;	// 16 = 0x10
    EDAMNoteShareRelationshipRestrictions *_invitationRestrictions;	// 24 = 0x18
}

+ (id)structFields;	// IMP=0x00000000001ae5b7
+ (id)structName;	// IMP=0x00000000001ae5aa
- (void).cxx_destruct;	// IMP=0x00000000001ae81b
@property(retain, nonatomic) EDAMNoteShareRelationshipRestrictions *invitationRestrictions; // @synthesize invitationRestrictions=_invitationRestrictions;
@property(retain, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;
@property(retain, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;

@end

