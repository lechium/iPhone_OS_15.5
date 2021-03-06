//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppUpdatesDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x00400000001226cd
+ (id)storeDescriptor;	// IMP=0x0010000000121878
+ (id)sharedInstance;	// IMP=0x0010000000121785
- (_Bool)setUpdateState:(long long)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x00400000001225a0
- (_Bool)setUpdateState:(long long)arg1 forBundleIDs:(id)arg2 logKey:(id)arg3;	// IMP=0x001000000012216e
- (_Bool)resetUpdateWithBundleID:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000121ff6
- (_Bool)finishAppUpdateForBundleID:(id)arg1 withUpdateState:(long long)arg2;	// IMP=0x0010000000121b2e
- (void)convertBackgroundUpdateToForeground:(id)arg1 logKey:(id)arg2;	// IMP=0x00100000001218ed

@end

