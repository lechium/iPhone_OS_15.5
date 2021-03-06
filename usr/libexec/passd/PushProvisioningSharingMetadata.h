//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PushProvisioningSharingMetadata
{
}

+ (id)_propertySettersForProvisioningSharingMetadata;	// IMP=0x0040000000136268
+ (id)databaseTable;	// IMP=0x001000000013625b
+ (id)_predicateForProvisioningSharingStatus:(unsigned long long)arg1;	// IMP=0x00100000001361e8
+ (id)_predicateForProvisioningSharingIdentifier:(id)arg1;	// IMP=0x00100000001361c5
+ (void)deleteAllProvisioningTargetsInDatabase:(id)arg1;	// IMP=0x0010000000135ecc
+ (void)deleteSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135d81
+ (id)insertOrUpdateSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135b4a
+ (id)pushProvisioningSharingMetadataForProvisioningSharingIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135abe
+ (id)pushProvisioningSharingMetadataForStatus:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000013590b
+ (id)pushProvisioningSharingMetadataInDatabase:(id)arg1;	// IMP=0x0010000000135758
- (id)sharingMetaData;	// IMP=0x0040000000136086
- (void)_updateProvisioningSharingMetadata:(id)arg1;	// IMP=0x0010000000135f66
- (id)initWithSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000013560d

@end

