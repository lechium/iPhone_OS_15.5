//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbKit/ATXActivitySuggestionClientObserver-Protocol.h>
#import <DoNotDisturbKit/DNDSettingsUpdateListener-Protocol.h>
#import <DoNotDisturbKit/DNDStateUpdateListener-Protocol.h>
#import <DoNotDisturbKit/UNUserNotificationCenterDelegate-Protocol.h>

@class ATXActivitySuggestionClient, DNDBehaviorSettings, DNDModeAssertionService, DNDModeConfigurationService, DNDSettingsService, DNDState, DNDStateService, NSDate, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    DNDModeAssertionService *_notificationsAssertionService;	// 16 = 0x10
    DNDStateService *_notificationsStateService;	// 24 = 0x18
    DNDSettingsService *_notificationsSettingsService;	// 32 = 0x20
    DNDModeConfigurationService *_notificationsModeConfigurationService;	// 40 = 0x28
    _Bool _doNotDisturbActive;	// 48 = 0x30
    _Bool _basicActive;	// 49 = 0x31
    _Bool _sleepActive;	// 50 = 0x32
    _Bool _windDownActive;	// 51 = 0x33
    _Bool _clockBedtimeActive;	// 52 = 0x34
    _Bool _settingsBedtimeActive;	// 53 = 0x35
    _Bool _drivingActive;	// 54 = 0x36
    _Bool _workoutActive;	// 55 = 0x37
    NSDate *_transitionDate;	// 56 = 0x38
    unsigned long long _transitionLifetimeType;	// 64 = 0x40
    DNDState *_currentState;	// 72 = 0x48
    DNDBehaviorSettings *_currentBehaviorSettings;	// 80 = 0x50
    UNUserNotificationCenter *_notificationsCenter;	// 88 = 0x58
    ATXActivitySuggestionClient *_activitySuggestionClient;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x0000000000001fa4
- (void).cxx_destruct;	// IMP=0x0000000000007048
- (void)_handleSignificantTimeChange;	// IMP=0x0000000000006f8e
- (void)_setModeConfiguration:(id)arg1;	// IMP=0x0000000000006f19
- (id)_modeConfigurationForIdentifier:(id)arg1;	// IMP=0x0000000000006d2e
- (id)_modeForIdentifier:(id)arg1;	// IMP=0x0000000000006b8e
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(_Bool)arg1 significantTimeChange:(_Bool)arg2;	// IMP=0x0000000000003f69
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000310d
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;	// IMP=0x0000000000002fcc
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;	// IMP=0x0000000000002e64
- (void)activitySuggestionClient:(id)arg1 didSuggestTriggersForConfiguredActivity:(id)arg2;	// IMP=0x000000000000294e
- (void)activitySuggestionClient:(id)arg1 didSuggestSettingUpActivity:(id)arg2;	// IMP=0x0000000000002378
- (void)resume;	// IMP=0x000000000000217a
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x0000000000001fae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
