//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAppSubscriptionEntity
{
}

+ (id)uniquedColumns;	// IMP=0x00000000006d2125
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000006d2111
+ (id)tableAliases;	// IMP=0x00000000006d2104
+ (id)databaseTable;	// IMP=0x00000000006d20f7
+ (long long)protectionClass;	// IMP=0x0000000000033adf
+ (_Bool)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataTypes:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006d1deb
+ (_Bool)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataTypes:(id)arg4 profile:(id)arg5 error:(id *)arg6;	// IMP=0x00000000006d1abc
+ (id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006d1a17
+ (id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006d190c
+ (id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000033753
+ (_Bool)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006d16a6
+ (_Bool)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006d13cf

@end
