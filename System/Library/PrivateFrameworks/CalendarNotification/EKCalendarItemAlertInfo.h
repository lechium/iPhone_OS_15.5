//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class EKTravelEngineHypothesis, NSData, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>
{
    _Bool _allDay;	// 8 = 0x8
    _Bool _tentative;	// 9 = 0x9
    _Bool _acknowledged;	// 10 = 0xa
    _Bool _refiring;	// 11 = 0xb
    _Bool _isOffsetFromTravelTimeStart;	// 12 = 0xc
    _Bool _isPseudoEvent;	// 13 = 0xd
    _Bool _hasGeoLocationCoordinates;	// 14 = 0xe
    _Bool _hasOrganizerThatIsNotCurrentUser;	// 15 = 0xf
    _Bool _isSuggestedLocation;	// 16 = 0x10
    _Bool _isOnSharedCalendar;	// 17 = 0x11
    _Bool _hasDisplayedLeaveByMessage;	// 18 = 0x12
    _Bool _hasDisplayedLeaveNowMessage;	// 19 = 0x13
    _Bool _hasDisplayedRunningLateMessage;	// 20 = 0x14
    long long _triggerType;	// 24 = 0x18
    NSString *_publisherBulletinID;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSDate *_eventDate;	// 56 = 0x38
    NSDate *_endDate;	// 64 = 0x40
    NSTimeZone *_eventTimeZone;	// 72 = 0x48
    NSUserActivity *_appLink;	// 80 = 0x50
    NSURL *_action;	// 88 = 0x58
    NSURL *_entityID;	// 96 = 0x60
    long long _proximity;	// 104 = 0x68
    NSString *_externalID;	// 112 = 0x70
    NSString *_dismissalID;	// 120 = 0x78
    NSString *_alarmID;	// 128 = 0x80
    NSData *_mapKitHandle;	// 136 = 0x88
    NSString *_organizerEmailAddress;	// 144 = 0x90
    NSString *_startLocationRouting;	// 152 = 0x98
    NSString *_locationAddress;	// 160 = 0xa0
    EKTravelEngineHypothesis *_latestHypothesis;	// 168 = 0xa8
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;	// 176 = 0xb0
    NSDate *_lastTimeBulletinAdded;	// 184 = 0xb8
    unsigned long long _currentRouteHypothesizerNotificationType;	// 192 = 0xc0
    NSDate *_fireDate;	// 200 = 0xc8
    struct CLLocationCoordinate2D _geoLocationCoordinates;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000000514ce
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) unsigned long long currentRouteHypothesizerNotificationType; // @synthesize currentRouteHypothesizerNotificationType=_currentRouteHypothesizerNotificationType;
@property(nonatomic) _Bool hasDisplayedRunningLateMessage; // @synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage;
@property(nonatomic) _Bool hasDisplayedLeaveNowMessage; // @synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage;
@property(nonatomic) _Bool hasDisplayedLeaveByMessage; // @synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage;
@property(nonatomic) _Bool isOnSharedCalendar; // @synthesize isOnSharedCalendar=_isOnSharedCalendar;
@property(nonatomic) _Bool isSuggestedLocation; // @synthesize isSuggestedLocation=_isSuggestedLocation;
@property(retain, nonatomic) NSDate *lastTimeBulletinAdded; // @synthesize lastTimeBulletinAdded=_lastTimeBulletinAdded;
@property(retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // @synthesize latestHypothesis=_latestHypothesis;
@property(retain, nonatomic) NSString *locationAddress; // @synthesize locationAddress=_locationAddress;
@property(retain, nonatomic) NSString *startLocationRouting; // @synthesize startLocationRouting=_startLocationRouting;
@property(retain, nonatomic) NSString *organizerEmailAddress; // @synthesize organizerEmailAddress=_organizerEmailAddress;
@property(nonatomic) _Bool hasOrganizerThatIsNotCurrentUser; // @synthesize hasOrganizerThatIsNotCurrentUser=_hasOrganizerThatIsNotCurrentUser;
@property(nonatomic) struct CLLocationCoordinate2D geoLocationCoordinates; // @synthesize geoLocationCoordinates=_geoLocationCoordinates;
@property(nonatomic) _Bool hasGeoLocationCoordinates; // @synthesize hasGeoLocationCoordinates=_hasGeoLocationCoordinates;
@property(retain, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(readonly, nonatomic) _Bool isPseudoEvent; // @synthesize isPseudoEvent=_isPseudoEvent;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, nonatomic) _Bool refiring; // @synthesize refiring=_refiring;
@property(readonly, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(readonly, nonatomic) _Bool acknowledged; // @synthesize acknowledged=_acknowledged;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, nonatomic) _Bool tentative; // @synthesize tentative=_tentative;
@property(readonly, nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSURL *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSUserActivity *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
- (void)resetTimeToLeaveDisplayState;	// IMP=0x00000000000511f2
@property(readonly, nonatomic) _Bool isPurelyATimeToLeaveAlert;
@property(readonly, nonatomic) NSString *recordID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005102c
- (unsigned long long)hash;	// IMP=0x0000000000050fc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050fb6
- (id)description;	// IMP=0x0000000000050edf
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(_Bool)arg6 tentative:(_Bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 appLink:(id)arg10 action:(id)arg11 proximity:(long long)arg12 externalID:(id)arg13 acknowledged:(_Bool)arg14 dismissalID:(id)arg15 alarmID:(id)arg16 isOffsetFromTravelTimeStart:(_Bool)arg17 refiring:(_Bool)arg18 pseudoEvent:(_Bool)arg19;	// IMP=0x0000000000050c4c

@end

