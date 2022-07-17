//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class GEOObserverHashTable, IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate>
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSMutableDictionary *_identifierToShareETAStatus;	// 16 = 0x10
    NSMutableDictionary *_identifierToMessagesStatus;	// 24 = 0x18
    IDSBatchIDQueryController *_messagesBatchController;	// 32 = 0x20
    IDSBatchIDQueryController *_etaBatchController;	// 40 = 0x28
    NSMutableSet *_etaFetchQueue;	// 48 = 0x30
    NSMutableSet *_messagesFetchQueue;	// 56 = 0x38
    NSTimer *_retryAfterBackoffTimer;	// 64 = 0x40
}

+ (id)sharedFetcher;	// IMP=0x0000000000087167
- (void).cxx_destruct;	// IMP=0x0000000000088850
- (void)fetchCapabilityLevelForContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008879e
- (void)cancelCapabilityLevelRequestForContact:(id)arg1;	// IMP=0x000000000008852a
- (void)requestCapabilityLevelsForContacts:(id)arg1;	// IMP=0x000000000008841f
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x0000000000087f14
- (void)fetchQueueDidUpdate;	// IMP=0x0000000000087e71
- (_Bool)processMessagesDictionary:(id)arg1;	// IMP=0x0000000000087bcf
- (_Bool)processEtaDictionary:(id)arg1;	// IMP=0x000000000008792d
- (unsigned long long)capabilityLevelForContact:(id)arg1;	// IMP=0x0000000000087571
- (void)notifyObservers;	// IMP=0x00000000000874f4
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000008742e
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000087368
- (id)init;	// IMP=0x00000000000871d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
