//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface PurchaseHistoryDatabaseTransaction
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;	// IMP=0x0020000000076e0f
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000076d4c
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000076c7e
- (_Bool)showAllWithError:(id *)arg1;	// IMP=0x0010000000076c76
- (_Bool)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withError:(id *)arg3;	// IMP=0x0010000000076c6e
- (_Bool)removeAllAppsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000076b83
- (_Bool)insertApps:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000075c1a
- (_Bool)deleteAppsForLockerItemIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000759e6

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
