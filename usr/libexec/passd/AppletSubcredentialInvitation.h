//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialInvitation
{
}

+ (id)databaseTable;	// IMP=0x004000000033e3de
+ (id)_propertySetters;	// IMP=0x001000000033e044
+ (id)_dictionaryFromSharedCredentialInvitation:(id)arg1;	// IMP=0x001000000033db51
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000033db2e
+ (_Bool)deleteInvitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033da90
+ (id)addInvitation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033d844
+ (id)invitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033d7b8
+ (id)invitationsInDatabase:(id)arg1;	// IMP=0x001000000033d59d
- (id)invitation;	// IMP=0x004000000033df05

@end
