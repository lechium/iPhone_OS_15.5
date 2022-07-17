//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, PowerManagerIdleTracker, SharingBTLEAdvertisementPayload, UADispatchScheduler, UATimedPowerAssertions, UAUserActivityInfo;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface UASharingAdvertiser
{
    NSArray *_advertisableItems;	// 8 = 0x8
    NSMutableSet *_sfAdvertisers;	// 16 = 0x10
    _Bool _needToRefreshPeerDevices;	// 24 = 0x18
    _Bool _shouldAdvertiseHandoff;	// 25 = 0x19
    _Bool _shouldAdvertisePasteboard;	// 26 = 0x1a
    _Bool _userIsCurrent;	// 27 = 0x1b
    _Bool _pboardBitToAdvertise;	// 28 = 0x1c
    NSObject<OS_dispatch_group> *_helpersDispatchGroup;	// 32 = 0x20
    NSSet *_pairedDevices;	// 40 = 0x28
    UAUserActivityInfo *_currentAdvertisedItem;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQ;	// 56 = 0x38
    UADispatchScheduler *_nextScheduleUpdate;	// 64 = 0x40
    UADispatchScheduler *_periodicUpdate;	// 72 = 0x48
    NSDate *_dontAdvertiseAsCurrentUntil;	// 80 = 0x50
    SharingBTLEAdvertisementPayload *_currentAdvertisementPayload;	// 88 = 0x58
    NSDate *_lastAdvertismentTime;	// 96 = 0x60
    SharingBTLEAdvertisementPayload *_lastAdvertisementPayload;	// 104 = 0x68
    NSMutableDictionary *_currentAdvertisedItemOtherAdvertisedItems;	// 112 = 0x70
    NSMutableArray *_advertisementTimes;	// 120 = 0x78
    unsigned long long _changeAdvertisementThreadSpinCount;	// 128 = 0x80
    UATimedPowerAssertions *_preventIdleSleepAssertion;	// 136 = 0x88
    PowerManagerIdleTracker *_userIsCurrentIdleTracker;	// 144 = 0x90
    NSDate *_lastUserActiveTime;	// 152 = 0x98
    long long _lastAdvertisedGeneration;	// 160 = 0xa0
    NSDate *_beginTimeForNonActiveAdvertisement;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000000917a7
@property(retain, nonatomic) NSDate *beginTimeForNonActiveAdvertisement; // @synthesize beginTimeForNonActiveAdvertisement=_beginTimeForNonActiveAdvertisement;
@property _Bool pboardBitToAdvertise; // @synthesize pboardBitToAdvertise=_pboardBitToAdvertise;
@property long long lastAdvertisedGeneration; // @synthesize lastAdvertisedGeneration=_lastAdvertisedGeneration;
@property(copy) NSDate *lastUserActiveTime; // @synthesize lastUserActiveTime=_lastUserActiveTime;
@property(retain) PowerManagerIdleTracker *userIsCurrentIdleTracker; // @synthesize userIsCurrentIdleTracker=_userIsCurrentIdleTracker;
@property(retain) UATimedPowerAssertions *preventIdleSleepAssertion; // @synthesize preventIdleSleepAssertion=_preventIdleSleepAssertion;
@property unsigned long long changeAdvertisementThreadSpinCount; // @synthesize changeAdvertisementThreadSpinCount=_changeAdvertisementThreadSpinCount;
@property(retain) NSMutableArray *advertisementTimes; // @synthesize advertisementTimes=_advertisementTimes;
@property(retain) NSMutableDictionary *currentAdvertisedItemOtherAdvertisedItems; // @synthesize currentAdvertisedItemOtherAdvertisedItems=_currentAdvertisedItemOtherAdvertisedItems;
@property(copy) SharingBTLEAdvertisementPayload *lastAdvertisementPayload; // @synthesize lastAdvertisementPayload=_lastAdvertisementPayload;
@property(retain) NSDate *lastAdvertismentTime; // @synthesize lastAdvertismentTime=_lastAdvertismentTime;
@property(retain) SharingBTLEAdvertisementPayload *currentAdvertisementPayload; // @synthesize currentAdvertisementPayload=_currentAdvertisementPayload;
@property(retain) NSDate *dontAdvertiseAsCurrentUntil; // @synthesize dontAdvertiseAsCurrentUntil=_dontAdvertiseAsCurrentUntil;
@property(readonly, retain) UADispatchScheduler *periodicUpdate; // @synthesize periodicUpdate=_periodicUpdate;
@property(readonly, retain) UADispatchScheduler *nextScheduleUpdate; // @synthesize nextScheduleUpdate=_nextScheduleUpdate;
@property(readonly, retain) NSObject<OS_dispatch_queue> *dispatchQ; // @synthesize dispatchQ=_dispatchQ;
@property(retain) UAUserActivityInfo *currentAdvertisedItem; // @synthesize currentAdvertisedItem=_currentAdvertisedItem;
@property(readonly, retain) NSObject<OS_dispatch_group> *helpersDispatchGroup; // @synthesize helpersDispatchGroup=_helpersDispatchGroup;
- (id)statusString;	// IMP=0x001000000009027d
- (_Bool)pasteboardBitValue;	// IMP=0x00100000000900aa
- (_Bool)pasteboardAvailible;	// IMP=0x001000000008fec6
- (void)removeIOPowerManagerUserIdleNotifications;	// IMP=0x001000000008fe73
- (void)scheduleIOPowerManagerUserIdleNotifications;	// IMP=0x001000000008fe1d
@property _Bool userIsCurrent; // @synthesize userIsCurrent=_userIsCurrent;
- (_Bool)resume;	// IMP=0x001000000008fbb9
- (_Bool)suspend;	// IMP=0x001000000008fade
- (_Bool)active;	// IMP=0x001000000008fa52
- (_Bool)okToSuspendAdvertising;	// IMP=0x001000000008f981
- (_Bool)scheduleAdvertisementUpdate;	// IMP=0x001000000008f96c
- (_Bool)scheduleAdvertisementUpdate:(double)arg1;	// IMP=0x001000000008f902
- (void)activityAdvertiser:(id)arg1 pairedDevicesChangedNotification:(id)arg2;	// IMP=0x001000000008f53e
- (void)activityAdvertiser:(id)arg1 didSendPayloadForActivityIdentifier:(id)arg2 toDevice:(id)arg3 error:(id)arg4;	// IMP=0x001000000008f1ea
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 handoffCommand:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008c10d
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008b1c5
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008af7c
- (id)dataForMoreAppSuggestions;	// IMP=0x001000000008a4bf
- (void)setShouldAdvertiseAutoPullActivityList:(_Bool)arg1;	// IMP=0x001000000008a3f2
@property(copy) NSSet *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
- (void)_updatePairedDeviceCapabilities;	// IMP=0x00100000000897f0
- (void)_refreshPairedSFPeerDevices;	// IMP=0x001000000008942a
@property(readonly) _Bool shouldAdvertisePasteboard; // @synthesize shouldAdvertisePasteboard=_shouldAdvertisePasteboard;
@property(readonly) _Bool shouldAdvertiseHandoff; // @synthesize shouldAdvertiseHandoff=_shouldAdvertiseHandoff;
- (id)sfActivityAdvertiser;	// IMP=0x00100000000890ef
- (_Bool)removeSFActivityAdvertiser:(id)arg1;	// IMP=0x001000000008902b
- (_Bool)addSFActivityAdvertiser:(id)arg1;	// IMP=0x0010000000088f5e
@property(readonly, copy) NSSet *sfActivityAdvertisers;
- (_Bool)peerDeviceCanAcceptNewerPayload:(id)arg1;	// IMP=0x0010000000088a09
- (void)_periodicIdleUpdate;	// IMP=0x0010000000088517
- (void)removeAdvertisement;	// IMP=0x0010000000088016
- (void)moveAdvertisementToNonActive;	// IMP=0x0010000000087f57
- (_Bool)_updateAdvertisement;	// IMP=0x0010000000086f5a
- (_Bool)advertiseItem:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000084a4a
- (_Bool)_advertisePayload:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000840bc
- (_Bool)_advertisePayload:(id)arg1 force:(_Bool)arg2 sfAdvertiser:(id)arg3;	// IMP=0x0010000000083e57
- (_Bool)_advertisePayload:(id)arg1;	// IMP=0x0010000000083e42
- (void)advertisePayload:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000083d56
- (void)updateAdvertisingPowerAssertion:(double)arg1;	// IMP=0x0010000000083ac6
- (id)mostRecentAdvertisedBytesTime;	// IMP=0x0010000000083ab4
- (id)currentAdvertisedBytes;	// IMP=0x00100000000839af
- (void)setAdvertisableItems:(id)arg1;	// IMP=0x0010000000083348
- (id)advertisingItems;	// IMP=0x001000000008328f
- (_Bool)advertising;	// IMP=0x001000000008325c
- (id)advertisableItems;	// IMP=0x00100000000831f0
- (id)initWithManager:(id)arg1 advertiser:(id)arg2;	// IMP=0x0010000000082c6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
