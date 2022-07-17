//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class NSString, TULocked;
@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <TUIDSIDQueryController> _queryController;	// 16 = 0x10
    TULocked *_idsFaceTimeVideoStatuses;	// 24 = 0x18
    TULocked *_idsFaceTimeAudioStatuses;	// 32 = 0x20
    TULocked *_idsFaceTimeMultiwayStatuses;	// 40 = 0x28
    TULocked *_idsModernStatuses;	// 48 = 0x30
    TULocked *_idsWebCapableStatuses;	// 56 = 0x38
    id <TUIDSBatchIDQueryController> _batchQuerySearchVideoController;	// 64 = 0x40
    id <TUIDSBatchIDQueryController> _batchQuerySearchAudioController;	// 72 = 0x48
    id <TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;	// 80 = 0x50
    CDUnknownBlockType _batchQueryControllerCreationBlock;	// 88 = 0x58
}

+ (long long)idsServiceAvailabilityForDestination:(id)arg1 usingCache:(id)arg2;	// IMP=0x000000000008318e
+ (_Bool)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;	// IMP=0x0000000000082fc4
+ (id)sharedManager;	// IMP=0x000000000008180a
- (void).cxx_destruct;	// IMP=0x0000000000084d26
@property(copy, nonatomic) CDUnknownBlockType batchQueryControllerCreationBlock; // @synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchMultiwayController; // @synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property(readonly, nonatomic) TULocked *idsWebCapableStatuses; // @synthesize idsWebCapableStatuses=_idsWebCapableStatuses;
@property(readonly, nonatomic) TULocked *idsModernStatuses; // @synthesize idsModernStatuses=_idsModernStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses; // @synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property(readonly, nonatomic) id <TUIDSIDQueryController> queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)queryHasEndpointWithCapabilities:(id)arg1 forMultiwayDestinations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000844f7
- (void)queryHasWebOnlyEndpointsForDestinations:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000843f6
- (void)filteredDestinationForMultiway:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000083932
- (void)handleIDSQueryResultWithDestinationStatus:(id)arg1 onService:(id)arg2;	// IMP=0x00000000000833d8
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x00000000000832f1
- (void)postStatusChangedNotification;	// IMP=0x0000000000083237
- (void)beginCachedQueryWithDestinations:(id)arg1 onService:(id)arg2;	// IMP=0x0000000000082c6d
- (void)beginCachedQueryWithDestinations:(id)arg1;	// IMP=0x0000000000082b4d
- (void)beginBatchQueryWithDestinations:(id)arg1;	// IMP=0x00000000000828cf
- (void)beginQueryWithDestination:(id)arg1 onService:(id)arg2;	// IMP=0x000000000008272b
- (void)beginQueryWithDestinations:(id)arg1;	// IMP=0x000000000008260b
- (void)cancelQueries;	// IMP=0x00000000000823b9
- (_Bool)isWebCapableFaceTimeAvailableForDestination:(id)arg1;	// IMP=0x0000000000082324
- (_Bool)isModernFaceTimeAvailableForDestination:(id)arg1;	// IMP=0x000000000008228f
- (long long)faceTimeMultiwayAvailabilityForDestination:(id)arg1;	// IMP=0x0000000000082216
- (long long)faceTimeVideoAvailabilityForDestination:(id)arg1;	// IMP=0x000000000008219d
- (long long)faceTimeAudioAvailabilityForDestination:(id)arg1;	// IMP=0x0000000000082124
- (_Bool)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x00000000000820ab
- (_Bool)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x0000000000082032
- (_Bool)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x0000000000081fb9
- (_Bool)isFaceTimeMultiwayAvailableForItem:(id)arg1;	// IMP=0x0000000000081f63
- (_Bool)isFaceTimeAudioAvailableForItem:(id)arg1;	// IMP=0x0000000000081f0d
- (_Bool)isFaceTimeVideoAvailableForItem:(id)arg1;	// IMP=0x0000000000081eb7
- (void)dealloc;	// IMP=0x0000000000081c03
- (id)initWithQueryController:(id)arg1;	// IMP=0x00000000000818e9
- (id)init;	// IMP=0x000000000008188f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
