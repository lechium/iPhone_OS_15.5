//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@class NSDictionary, NSNumber, NSString, PLAssetsdConnectionAuthorization, PLLimitedLibraryFetchFilter;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy
{
    PLLimitedLibraryFetchFilter *_fetchFilter;	// 8 = 0x8
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 16 = 0x10
    NSString *_fetchFilterClientIdentifier;	// 24 = 0x18
    NSDictionary *_fetchFilterEntityNameToPredicateMap;	// 32 = 0x20
    NSNumber *_fetchFilterEnabledStatus;	// 40 = 0x28
    struct os_unfair_lock_s _fetchFilterLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000273336
- (id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000273077
- (void)limitedLibraryFetchFiltersUpdated:(id)arg1;	// IMP=0x0000000000273026
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;	// IMP=0x0000000000272b7e
- (id)_restrictedEntityNamesAllowedForContext:(id)arg1;	// IMP=0x0000000000272a98
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1;	// IMP=0x0000000000272874
- (id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000272609
- (id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000272493
- (_Bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;	// IMP=0x000000000027248b
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;	// IMP=0x0000000000272470
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;	// IMP=0x0000000000272468
- (_Bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;	// IMP=0x0000000000272460
- (void)dealloc;	// IMP=0x00000000002723cf
- (id)initWithConnectionAuthorization:(id)arg1;	// IMP=0x0000000000272372
- (id)init;	// IMP=0x0000000000272330

@end
