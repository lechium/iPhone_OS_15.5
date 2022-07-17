//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface InAppReceiptDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001bd1d
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_latestTransactionReceiptForUnarchivedRenewalInfo:(id)arg1 subscriptionGroupID:(id)arg2 bundleID:(id)arg3 outProductID:(id *)arg4;	// IMP=0x001000000001b8fe
- (id)_statusesForRenewalInfoBlob:(id)arg1 subscriptionGroupID:(id)arg2 bundleID:(id)arg3;	// IMP=0x001000000001b586
- (void)dealloc;	// IMP=0x001000000001b544
- (id)_propertyForKey:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001b2e8
- (id)transactionForID:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001b064
- (void)enumerateReceiptsForSubscriptionsInGracePeriodForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a6a3
- (id)subscriptionStatusForSubscriptionGroupID:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001a0d2
- (id)lastUpdatedForBundleID:(id)arg1;	// IMP=0x001000000001a0b6
- (_Bool)isTransactionFinishedForID:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001a069
- (void)enumerateUnfinishedTransactionReceiptsForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019d61
- (void)enumerateReceiptsForProductID:(id)arg1 bundleID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019a1e
- (void)enumerateCurrentReceiptsForProductID:(id)arg1 bundleID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018e9e
- (id)currentRevisionForBundleID:(id)arg1;	// IMP=0x0010000000018e82
- (id)accountTokenForBundleID:(id)arg1;	// IMP=0x0010000000018e66
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000018dfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
