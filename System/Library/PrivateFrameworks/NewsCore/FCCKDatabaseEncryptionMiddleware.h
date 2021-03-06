//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>
#import <NewsCore/FCCKDatabaseRecordMiddleware-Protocol.h>

@class FCCKPrivateDatabaseSchema, NSString;
@protocol FCCKRecordNameCipher;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>
{
    FCCKPrivateDatabaseSchema *_encryptionSchema;	// 8 = 0x8
    id <FCCKRecordNameCipher> _recordNameCipher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016d093
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;	// IMP=0x000000000016ce76
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;	// IMP=0x000000000016cc59
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016cb2a
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016ca2a
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016bb68
- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016acee
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016a7a0
- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016a252
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000169ff1
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000169d7f
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000169c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

