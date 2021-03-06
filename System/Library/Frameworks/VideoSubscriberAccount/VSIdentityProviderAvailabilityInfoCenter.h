//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSOperationQueue, NSString, VSAMSBagLoadOperation, VSDeveloperServiceConnection, VSPreferences, VSRemoteNotifier;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate>
{
    _Bool _hasDeterminedInitialStatus;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSOperationQueue *_privateQueue;	// 24 = 0x18
    VSRemoteNotifier *_remoteNotifier;	// 32 = 0x20
    VSPreferences *_preferences;	// 40 = 0x28
    VSDeveloperServiceConnection *_developerServiceConnection;	// 48 = 0x30
    VSAMSBagLoadOperation *_mockAMSBagLoadOperation;	// 56 = 0x38
}

+ (_Bool)automaticallyNotifiesObserversOfStatus;	// IMP=0x0000000000056c7e
+ (id)defaultCenter;	// IMP=0x0000000000055ea7
- (void).cxx_destruct;	// IMP=0x0000000000056f87
@property(retain, nonatomic) VSAMSBagLoadOperation *mockAMSBagLoadOperation; // @synthesize mockAMSBagLoadOperation=_mockAMSBagLoadOperation;
@property(retain, nonatomic) VSDeveloperServiceConnection *developerServiceConnection; // @synthesize developerServiceConnection=_developerServiceConnection;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(nonatomic) _Bool hasDeterminedInitialStatus; // @synthesize hasDeterminedInitialStatus=_hasDeterminedInitialStatus;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000000056e80
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056d2c
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005617d
- (void)_sendStatusChangeNotification;	// IMP=0x000000000005607d
- (void)_accountStoreChanged:(id)arg1;	// IMP=0x0000000000055fbf
- (id)init;	// IMP=0x0000000000055d2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

