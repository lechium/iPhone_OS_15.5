//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject
{
    CARSessionStatus *_carSessionStatus;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_providerQueue;	// 16 = 0x10
    _Bool _isCarPlayConnected;	// 24 = 0x18
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;	// 32 = 0x20
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;	// 40 = 0x28
    NSHashTable *_delegates;	// 48 = 0x30
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x0020000000117aa1
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x001000000011796a
+ (long long)platform;	// IMP=0x001000000011795f
+ (id)provider;	// IMP=0x0010000000117873
- (void).cxx_destruct;	// IMP=0x002000000011800e
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x0010000000117e97
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)arg1;	// IMP=0x0010000000117e79
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(_Bool)arg1;	// IMP=0x0010000000117e71
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117d90
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117ce8
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117c30
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;	// IMP=0x0010000000117c26
- (void)addDelegate:(id)arg1;	// IMP=0x0010000000117c10
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000011785f
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000117848
- (void)_updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x0010000000117817
- (void)updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x00100000001177ac
- (void)_isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117701
- (void)isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117659
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001174d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
