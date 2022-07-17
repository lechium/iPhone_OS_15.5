//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray, NSDictionary;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x000000000001bf4e
- (void).cxx_destruct;	// IMP=0x000000000001d06b
@property(retain, nonatomic) NSDictionary *conferenceRoomTypeIdentifiersByMRU;
@property(nonatomic) _Bool alertInviteeDeclines;
@property(nonatomic) _Bool showDeclinedEvents;
@property(retain, nonatomic) NSArray *selectedCalendarIdentifiers;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)arg1;	// IMP=0x000000000001cee9
@property(readonly, nonatomic) NSArray *deselectedCalendarSyncIdentifiers;
- (void)_setDeselectedCalendarSyncHashes:(id)arg1;	// IMP=0x000000000001ce8c
@property(readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
- (_Bool)_array:(id)arg1 hasSameElementAsArray:(id)arg2;	// IMP=0x000000000001cc4a
- (void)_setDeselectedCalendarIdentifiers:(id)arg1;	// IMP=0x000000000001cb66
@property(readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
- (void)_setDeselectedCalendars_iOS:(id)arg1;	// IMP=0x000000000001c65c
- (void)setDeselectedCalendars:(id)arg1;	// IMP=0x000000000001c327
@property(readonly) _Bool bypassSplashScreen;
@property(nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(nonatomic) _Bool alwaysSetArrivedAndSettledForReminders;
@property(nonatomic) _Bool useShortReminderRefireInterval;
@property(nonatomic) _Bool useShortReminderSnoozeInterval;
@property(nonatomic) _Bool refiringReminderAlarmsEnabled;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;	// IMP=0x000000000001bfa3

@end
