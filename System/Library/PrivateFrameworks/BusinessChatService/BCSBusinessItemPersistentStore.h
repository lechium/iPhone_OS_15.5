//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BCSBusinessItemPersistentStore
{
}

+ (const char *)debugQueueName;	// IMP=0x000000000001b3d4
- (_Bool)deleteBusinessItemWithPhoneNumber:(id)arg1;	// IMP=0x000000000001d0ca
- (_Bool)deleteBusinessItemWithBizID:(id)arg1;	// IMP=0x000000000001cfc2
- (_Bool)deleteBusinessItem:(id)arg1;	// IMP=0x000000000001cefa
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1;	// IMP=0x000000000001ce88
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1;	// IMP=0x000000000001c1c5
- (_Bool)updateLastRetrievedDateForBusinessItem:(id)arg1;	// IMP=0x000000000001bf50
- (_Bool)updateTTL:(double)arg1 forBusinessItem:(id)arg2;	// IMP=0x000000000001bcf7
- (_Bool)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2;	// IMP=0x000000000001b4c0
- (const char *)schema;	// IMP=0x000000000001b4b3
- (long long)schemaVersion;	// IMP=0x000000000001b4a8
- (id)databasePath;	// IMP=0x000000000001b3e1

@end
