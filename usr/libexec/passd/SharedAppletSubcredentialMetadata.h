//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharedAppletSubcredentialMetadata
{
}

+ (id)databaseTable;	// IMP=0x004000000032569a
+ (id)_propertySetters;	// IMP=0x001000000032541d
+ (id)dictionaryFromSharedCredentialMetadata:(id)arg1;	// IMP=0x0010000000325145
+ (id)_predicateForSharedCredentialInvitationReceiptWithPID:(long long)arg1;	// IMP=0x0010000000324e2b
+ (id)_predicateForSharedCredentialWithPID:(long long)arg1;	// IMP=0x0010000000324db8
+ (id)insertSharedCredentialMetadata:(id)arg1 withAssociatedSharedCredentialReceiptPid:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000324ce7
+ (id)insertOrUpdateSharedCredentialMetadata:(id)arg1 withAssociatedSharedCredentialPid:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000324bf6
+ (id)sharedCredentialMetadataInDatabase:(id)arg1 forSharedCredentialInvitationReceiptWithPID:(long long)arg2;	// IMP=0x00100000003248a9
+ (id)sharedCredentialMetadataInDatabase:(id)arg1 forSharedCredentialWithPID:(long long)arg2;	// IMP=0x0010000000324537
- (id)metadata;	// IMP=0x0040000000325006
- (_Bool)updateWithMetadata:(id)arg1 associatedSharedCredentialPid:(long long)arg2;	// IMP=0x0010000000324f63
- (id)initWithMetadata:(id)arg1 associatedSharedCredentialPid:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000324e9e

@end

