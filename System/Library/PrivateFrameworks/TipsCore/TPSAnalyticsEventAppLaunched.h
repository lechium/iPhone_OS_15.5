//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TPSAnalyticsEventAppLaunched
{
    _Bool _needsSessionReset;	// 8 = 0x8
    _Bool _notificationModelControl;	// 9 = 0x9
    NSString *_contentID;	// 16 = 0x10
    NSString *_collectionID;	// 24 = 0x18
    NSString *_correlationID;	// 32 = 0x20
    NSNumber *_launchNumber;	// 40 = 0x28
    NSString *_userType;	// 48 = 0x30
    NSString *_launchType;	// 56 = 0x38
}

+ (id)lastRecordedLaunchType;	// IMP=0x000000000000a79c
+ (void)appSessionEndedWithType:(id)arg1;	// IMP=0x000000000000a59d
+ (id)_latestSessionEvent;	// IMP=0x000000000000a3eb
+ (id)_initialSessionEvent;	// IMP=0x000000000000a39b
+ (id)_currentSessionEvents;	// IMP=0x000000000000a346
+ (id)firstLaunchEvent;	// IMP=0x0000000000009e73
+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 launchType:(id)arg4;	// IMP=0x0000000000009dc9
+ (void)resetLaunchNumber;	// IMP=0x0000000000009c9f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009797
- (void).cxx_destruct;	// IMP=0x000000000000a8c2
@property(retain, nonatomic) NSString *launchType; // @synthesize launchType=_launchType;
@property(readonly, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) NSNumber *launchNumber; // @synthesize launchNumber=_launchNumber;
@property(retain, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic, getter=isNotificationModelControl) _Bool notificationModelControl; // @synthesize notificationModelControl=_notificationModelControl;
- (void)_aggregateLog;	// IMP=0x000000000000a661
- (void)log;	// IMP=0x000000000000a43b
- (void)persistKeys;	// IMP=0x000000000000a315
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x000000000000a1dc
- (id)eventName;	// IMP=0x000000000000a1a9
- (void)setDataProvider:(id)arg1;	// IMP=0x000000000000a11e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009f97
- (void)_updateLaunchCount;	// IMP=0x0000000000009e95
- (id)_initFirstLaunchEvent;	// IMP=0x0000000000009cc6
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 launchType:(id)arg4;	// IMP=0x0000000000009b3a
- (id)userTypeString;	// IMP=0x0000000000009abf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000979f

@end

