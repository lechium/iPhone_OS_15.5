//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAnnouncementRequestCapabilityProviding-Protocol.h>
#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>
#import <AssistantServices/AFSettingsDelegate-Protocol.h>

@class AFNotifyObserver, AFSettingsConnection, AFSiriAnnouncementRoute, NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding>
{
    _Bool _inWirelessSplitterSession;	// 8 = 0x8
    _Bool _inWirelessSplitterSessionStateValid;	// 9 = 0x9
    _Bool _localVoiceAssetAvailable;	// 10 = 0xa
    AFSettingsConnection *_settingsConnection;	// 16 = 0x10
    AFNotifyObserver *_pairedInfoChangeObserver;	// 24 = 0x18
    AFNotifyObserver *_wirelessSplitterSessionObserver;	// 32 = 0x20
    AFNotifyObserver *_wirelessGuestConnectionObserver;	// 40 = 0x28
    AFNotifyObserver *_forcedUpdateObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_group;	// 64 = 0x40
    unsigned long long _lastKnownAvailableAnnouncementRequests;	// 72 = 0x48
    unsigned long long _lastKnownEligibleAnnouncementRequests;	// 80 = 0x50
    NSHashTable *_delegates;	// 88 = 0x58
    AFSiriAnnouncementRoute *_currentAnnouncementRoute;	// 96 = 0x60
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x0000000000075274
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x0000000000075133
+ (long long)platform;	// IMP=0x0000000000075128
+ (id)provider;	// IMP=0x0000000000073cc0
- (void).cxx_destruct;	// IMP=0x0000000000075d60
@property(retain, nonatomic) AFSiriAnnouncementRoute *currentAnnouncementRoute; // @synthesize currentAnnouncementRoute=_currentAnnouncementRoute;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075a49
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000753e8
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;	// IMP=0x00000000000753de
- (void)addDelegate:(id)arg1;	// IMP=0x00000000000753c8
- (void)_settingsConnectionDidDisconnect;	// IMP=0x0000000000075073
- (id)_settingsConnection;	// IMP=0x0000000000075004
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x0000000000074f68
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x0000000000074e1a
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074cad
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074b59
- (void)notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x00000000000749c4
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;	// IMP=0x00000000000748dd
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)arg1;	// IMP=0x0000000000074835
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;	// IMP=0x000000000007464f
- (_Bool)_updateAudioRouteAvailabilityAndBroadcast:(_Bool)arg1;	// IMP=0x0000000000074647
- (id)_getCurrentAnnouncementRoute;	// IMP=0x000000000007463f
- (id)currentlyRoutedHeadphonesBTAddress;	// IMP=0x00000000000745cd
- (id)currentlyRoutedHeadphonesProductID;	// IMP=0x000000000007455b
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007438c
- (void)updateWirelessSplitterSessionInfoAndObserve;	// IMP=0x0000000000074123
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;	// IMP=0x00000000000740ec
- (void)_fetchInitialState;	// IMP=0x0000000000074045
- (id)_init;	// IMP=0x0000000000073d69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

