//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCloudCapabilitiesProvider-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSError, NSMutableArray, NSNumber, NSObject, NSString, PXObservable, PXUpdater, SKCloudServiceController;
@protocol OS_dispatch_queue;

@interface _PXDefaultCloudCapabilitiesProvider <PXCloudCapabilitiesProvider, PXSettingsKeyObserver, PXChangeObserver>
{
    NSNumber *_stateQueue_cloudServiceCapability;	// 8 = 0x8
    NSError *_stateQueue_error;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    SKCloudServiceController *_workQueue_storeKitController;	// 40 = 0x28
    PXUpdater *_mainQueue_updater;	// 48 = 0x30
    NSMutableArray *_stateQueue_loadHandlers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000982a4a
@property(readonly, nonatomic) NSMutableArray *stateQueue_loadHandlers; // @synthesize stateQueue_loadHandlers=_stateQueue_loadHandlers;
@property(readonly, nonatomic) PXUpdater *mainQueue_updater; // @synthesize mainQueue_updater=_mainQueue_updater;
@property(readonly, nonatomic) SKCloudServiceController *workQueue_storeKitController; // @synthesize workQueue_storeKitController=_workQueue_storeKitController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) NSError *stateQueue_error; // @synthesize stateQueue_error=_stateQueue_error;
@property(retain, nonatomic) NSNumber *stateQueue_cloudServiceCapability; // @synthesize stateQueue_cloudServiceCapability=_stateQueue_cloudServiceCapability;
- (void)_handleSKCloudServiceCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x0000000000982999
- (void)_stateQueue_setCloudServiceCapability:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000009824b7
- (long long)_stateQueue_statusForCapability:(id)arg1;	// IMP=0x000000000098244d
- (void)_handleCloudServiceCapabilityResult:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000982358
- (void)_workQueue_startGatheringCapabilityStatusesIfNeeded;	// IMP=0x000000000098206e
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000981f92
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000981f0e
- (void)_workQueue_updateCloudServiceCapabilities;	// IMP=0x0000000000981dcf
- (void)_updateCloudServiceCapabilities;	// IMP=0x0000000000981d5e
- (void)_invalidateCloudServiceCapabilities;	// IMP=0x0000000000981d17
- (void)_setNeedsUpdate;	// IMP=0x0000000000981cfa
@property(readonly, nonatomic) NSError *error;
- (void)requestStatusForCapability:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000981a76
- (long long)statusForCapability:(id)arg1;	// IMP=0x0000000000981963
- (void)startGatheringCapabilityStatuses;	// IMP=0x00000000009818f2
@property(readonly, nonatomic) PXObservable *observable;
- (id)init;	// IMP=0x0000000000981766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
