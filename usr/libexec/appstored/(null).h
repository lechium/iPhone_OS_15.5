//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface (null) : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x002000000024bfbf
+ (id)_propertyForSortOptionName:(id)arg1;	// IMP=0x001000000024bea2
+ (id)_predicateFromQuery:(id)arg1;	// IMP=0x001000000024b74c
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x001000000024b720
- (void).cxx_destruct;	// IMP=0x002000000024c217
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000024bfeb
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000024b670
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000024b5b6
- (id)executeQuery:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000024a3ac
- (id)countQuery:(id)arg1;	// IMP=0x001000000024a30b
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000024a2a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
