//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/MCProfileConnectionObserver-Protocol.h>

@class MCProfileConnection, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface VSManagedProfileConnection : NSObject <MCProfileConnectionObserver>
{
    MCProfileConnection *_profileConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    NSMutableSet *_observers;	// 24 = 0x18
}

+ (id)sharedConnection;	// IMP=0x0000000000036f24
- (void).cxx_destruct;	// IMP=0x00000000000377c2
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000375a0
- (long long)boolForManagedConfigurationBool:(int)arg1;	// IMP=0x0000000000037582
- (long long)maximumAppsRating;	// IMP=0x000000000003750a
- (long long)TVProviderModificationAllowed;	// IMP=0x00000000000374a1
- (long long)accountModificationAllowed;	// IMP=0x0000000000037438
- (long long)UIAppInstallationAllowed;	// IMP=0x00000000000373cf
- (long long)appInstallationAllowed;	// IMP=0x0000000000037366
- (long long)appAnalyticsAllowed;	// IMP=0x00000000000372fd
- (void)refreshProfileWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000372ed
- (id)userToken;	// IMP=0x000000000003729d
- (id)providerUniqueID;	// IMP=0x000000000003724d
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000003714a
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000037012
- (id)init;	// IMP=0x0000000000036f79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
