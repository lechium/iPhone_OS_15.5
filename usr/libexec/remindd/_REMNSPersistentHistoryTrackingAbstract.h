//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface _REMNSPersistentHistoryTrackingAbstract : NSObject
{
    NSCache *_cachedAccountIDsByStoreIDsMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005d681
@property(retain, nonatomic) NSCache *cachedAccountIDsByStoreIDsMap; // @synthesize cachedAccountIDsByStoreIDsMap=_cachedAccountIDsByStoreIDsMap;
- (id)_fetchCDAuxiliaryChangeInfosWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005d436
- (id)_changeTokenFromCDTrackingState:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d25c
- (id)_fetchCDTrackingStateWithClientID:(id)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ce80
- (id)_executeDeleteHistoryRequest:(id)arg1;	// IMP=0x001000000005cb7a
- (void)_resolveObjectIDsInChanges:(id)arg1 deletedObjectsIDMap:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000005c3a4
- (id)_resultChangeSetByExecutingRequest:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005bb33
- (id)_errorChangeSetWithError:(id)arg1;	// IMP=0x001000000005ba56
- (id)_currentREMChangeTokenFromNSPersistentStores:(id)arg1 persistentStoreCoordinator:(id)arg2;	// IMP=0x001000000005b9aa
- (id)_accountIDForPersistenceStoreID:(id)arg1;	// IMP=0x001000000005b86f
- (id)_persistenceStoreIDsForAccountTypes:(long long)arg1;	// IMP=0x001000000005b68f
- (id)_persistenceStoreIDForAccountID:(id)arg1;	// IMP=0x001000000005b63f
- (id)_accountIdentifierForPersistenceStoreID:(id)arg1;	// IMP=0x001000000005b589
- (id)_persistenceStoresForAccountTypes:(id)arg1;	// IMP=0x001000000005b4d3
- (id)_persistenceStoreForAccountID:(id)arg1;	// IMP=0x001000000005b41d
- (void)fetchAuxiliaryChangeInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005aba0
- (void)deleteHistoryBeforeToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a9f5
- (void)deleteHistoryBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a95f
- (id)_fetchRequestWithPredicateUsingEntityNames:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005a4cf
- (void)fetchHistoryAfterToken:(id)arg1 entityNames:(id)arg2 transactionFetchLimit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059f60
- (void)fetchHistoryAfterDate:(id)arg1 entityNames:(id)arg2 transactionFetchLimit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059b6e
- (void)saveTrackingState:(id)arg1 withClientID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059586
- (void)getTrackingStateWithClientID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005930b
- (id)earliestChangeTokenForAccountID:(id)arg1;	// IMP=0x0010000000058e70
- (id)currentChangeTokenForAccountID:(id)arg1;	// IMP=0x0010000000058bec
- (id)currentChangeTokenForAccountTypes:(long long)arg1;	// IMP=0x0010000000058843
- (id)currentChangeToken;	// IMP=0x00100000000586a7
- (void)withManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000585f1

@end

