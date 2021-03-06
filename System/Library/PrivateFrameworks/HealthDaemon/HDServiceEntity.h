//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDServiceEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x00000000004ecc3a
+ (_Bool)setHealthUpdatesEnabled:(_Bool)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;	// IMP=0x00000000004ec93b
+ (_Bool)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004ec6af
+ (id)allServicesWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005774d
+ (_Bool)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004ebe1a
+ (id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004eb1d1
+ (long long)protectionClass;	// IMP=0x0000000000033fd5
+ (id)uniquedColumns;	// IMP=0x00000000004eb15f
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000004eb14b
+ (id)tableAliases;	// IMP=0x00000000004eb13e
+ (id)databaseTable;	// IMP=0x0000000000057f63

@end

