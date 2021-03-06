//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x0020000000191501
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x00100000001914d5
- (void).cxx_destruct;	// IMP=0x0020000000191bf7
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001919cb
- (id)_fetchResultsWithPredicate:(id)arg1;	// IMP=0x001000000019152d
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000191425
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000019136b
- (id)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000001911bb
- (id)getIAPsForActiveAccountWithAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000019100b
- (id)getIAPsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000190f89
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000190f1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

