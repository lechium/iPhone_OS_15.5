//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPSharedTripRelayDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripStorageDelegate-Protocol.h>

@class MSPSharedTripBlacklist, MSPSharedTripRelay, MapsNotificationCenter, NSArray, NSMutableDictionary, NSString, NSTimer;
@protocol MSPReceiverETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate>
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSMutableDictionary *_sharedSessions;	// 16 = 0x10
    NSMutableDictionary *_sharedNavStates;	// 24 = 0x18
    NSMutableDictionary *_temporaryNavStates;	// 32 = 0x20
    MapsNotificationCenter *_mapsNotificationCenter;	// 40 = 0x28
    MSPSharedTripRelay *_idsRelay;	// 48 = 0x30
    MSPSharedTripBlacklist *_blockedList;	// 56 = 0x38
    NSTimer *_cleanupTimer;	// 64 = 0x40
    id <MSPReceiverETAControllerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001d9a3
@property(nonatomic) __weak id <MSPReceiverETAControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1;	// IMP=0x000000000001d916
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;	// IMP=0x000000000001d910
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;	// IMP=0x000000000001d90a
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;	// IMP=0x000000000001d52b
- (void)relay:(id)arg1 sharingClosed:(id)arg2;	// IMP=0x000000000001d454
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;	// IMP=0x000000000001d32b
- (void)_cleanGroup:(id)arg1;	// IMP=0x000000000001d0b4
- (_Bool)_cleanUpNecessaryForGroup:(id)arg1;	// IMP=0x000000000001cc48
- (void)_cleanupIfNecessary;	// IMP=0x000000000001cad0
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(_Bool)arg3;	// IMP=0x000000000001c705
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000001bef6
- (_Bool)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000001b9d7
- (void)updateContacts;	// IMP=0x000000000001b5d0
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001af27
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;	// IMP=0x000000000001a99e
- (void)blockSharedTrip:(id)arg1;	// IMP=0x000000000001a673
- (_Bool)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a48d
- (_Bool)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a150
@property(readonly, nonatomic) NSArray *allTrips;
- (void)cleanTimer;	// IMP=0x000000000001a108
- (void)_setNotificationCenter:(id)arg1;	// IMP=0x000000000001a0f7
- (void)dealloc;	// IMP=0x000000000001a02d
- (id)initWithRelay:(id)arg1;	// IMP=0x0000000000019e74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

