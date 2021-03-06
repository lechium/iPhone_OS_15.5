//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NNMKSyncStateManager-Protocol.h>
#import <NanoMailKitServer/PSYSyncCoordinatorDelegate-Protocol.h>

@class BLTPingSubscriber, NSString, PSYSyncCoordinator;
@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>
{
    id <NNMKSyncStateManagerDelegate> delegate;	// 8 = 0x8
    BLTPingSubscriber *_notificationsPingSubscriber;	// 16 = 0x10
    PSYSyncCoordinator *_initialSyncCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005d455
@property(retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator; // @synthesize initialSyncCoordinator=_initialSyncCoordinator;
@property(retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber; // @synthesize notificationsPingSubscriber=_notificationsPingSubscriber;
@property(nonatomic) __weak id <NNMKSyncStateManagerDelegate> delegate; // @synthesize delegate;
- (_Bool)pairedDeviceSupportsStandaloneMode;	// IMP=0x000000000005d37c
- (_Bool)pairedDeviceSupportsMultipleMailboxes;	// IMP=0x000000000005d33a
- (id)_pairedNanoRegistryDevice;	// IMP=0x000000000005d2b9
- (id)_bbSubsectionIdsForMessage:(id)arg1;	// IMP=0x000000000005d157
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x000000000005d061
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x000000000005cf3e
- (_Bool)pairedDeviceSupportsMailContentProtectedChannel;	// IMP=0x000000000005cec2
- (void)_handlePairedDeviceChangedNotification:(id)arg1;	// IMP=0x000000000005ce31
- (void)_handleDidUnpairNotification:(id)arg1;	// IMP=0x000000000005cda0
- (_Bool)willPresentNotificationForMessage:(id)arg1;	// IMP=0x000000000005c9f2
- (id)pairedDeviceScreenScale;	// IMP=0x000000000005c998
- (id)pairedDeviceScreenSize;	// IMP=0x000000000005c93e
- (id)pairingStorePath;	// IMP=0x000000000005c8e7
- (_Bool)isInitialSyncRestricted;	// IMP=0x000000000005c8c9
- (void)reportInitialSyncDidFailWithError:(id)arg1;	// IMP=0x000000000005c856
- (void)reportInitialSyncDidComplete;	// IMP=0x000000000005c815
- (void)reportInitialSyncDidCompleteSending;	// IMP=0x000000000005c7d4
- (void)reportInitialSyncProgress:(double)arg1;	// IMP=0x000000000005c781
- (void)dealloc;	// IMP=0x000000000005c6ff
- (id)init;	// IMP=0x000000000005c38e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

