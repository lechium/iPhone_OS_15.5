//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAppSubscriptionAppLaunchEntity
{
}

+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000006d324a
+ (id)tableAliases;	// IMP=0x00000000006d323d
+ (id)databaseTable;	// IMP=0x00000000006d3230
+ (long long)protectionClass;	// IMP=0x0000000000033fbf
+ (unsigned int)appSDKVersionForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006d2f99
+ (_Bool)insertOrUpdateAppSDKVersion:(unsigned int)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006d2a86
+ (_Bool)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006d29a5
+ (id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006d2729
+ (_Bool)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006d2197

@end

