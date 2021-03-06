//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationRequest.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface UNNotificationRequest (MapsNotificationsCommon)
+ (id)_requestForSharedTripIdentifier:(id)arg1 state:(id)arg2 title:(id)arg3 subtitle:(id)arg4 message:(id)arg5 isUpdate:(_Bool)arg6;	// IMP=0x001000000002786b
+ (id)requestForArrivingSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x0010000000027777
+ (id)requestForUpdatingSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x0010000000027683
+ (id)requestForSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x001000000002758f
+ (id)requestForFixedRAP:(id)arg1;	// IMP=0x00100000000272ee
+ (id)requestForPushedBookmark:(id)arg1;	// IMP=0x0010000000026d1d
+ (id)requestForPredictedRouteTrafficIncidentNotificationWithCommuteDetails:(id)arg1;	// IMP=0x0010000000026a7b
+ (id)requestForTrafficIncidentAlertWithID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x00100000000268ab
+ (id)requestForVenueNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000026769
+ (id)requestForMapsSuggestionsNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000026627
+ (id)requestForTrafficConditionsNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000002641f
+ (id)requestForLowFuelAlertNotificationWithDetails:(id)arg1;	// IMP=0x0010000000026134
+ (id)requestForParkedCarNotificationForEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x0010000000025a40
+ (id)requestForParkedCarNotificationForEvent:(id)arg1 mapItem:(id)arg2;	// IMP=0x00100000000250c8
+ (id)requestForGeoDInternalNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x001000000002507b
+ (id)requestForProxyAuthFailedNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0010000000024fbf
+ (id)requestForAnnouncement:(id)arg1;	// IMP=0x0000000000024bee
+ (id)requestWithContent:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x0010000000024a8f
+ (id)_contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 url:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 categoryIdentifier:(id)arg8 interruptionLevel:(unsigned long long)arg9 shouldIgnoreDoNotDisturb:(_Bool)arg10;	// IMP=0x0010000000024755
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 date:(id)arg7 expirationDate:(id)arg8 categoryIdentifier:(id)arg9 interruptionLevel:(unsigned long long)arg10 shouldIgnoreDoNotDisturb:(_Bool)arg11;	// IMP=0x00100000000246c3
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 date:(id)arg7 expirationDate:(id)arg8 categoryIdentifier:(id)arg9 threadIdentifier:(id)arg10 interruptionLevel:(unsigned long long)arg11 shouldIgnoreDoNotDisturb:(_Bool)arg12;	// IMP=0x00100000000245cc
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 categoryIdentifier:(id)arg6 interruptionLevel:(unsigned long long)arg7 shouldIgnoreDoNotDisturb:(_Bool)arg8;	// IMP=0x0010000000024587
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 expirationDate:(id)arg7 categoryIdentifier:(id)arg8 threadIdentifier:(id)arg9 interruptionLevel:(unsigned long long)arg10 shouldIgnoreDoNotDisturb:(_Bool)arg11;	// IMP=0x0010000000024541
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 categoryIdentifier:(id)arg7 interruptionLevel:(unsigned long long)arg8 shouldIgnoreDoNotDisturb:(_Bool)arg9;	// IMP=0x0010000000024505
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 interruptionLevel:(unsigned long long)arg5 shouldIgnoreDoNotDisturb:(_Bool)arg6;	// IMP=0x00100000000244c4
- (_Bool)shouldShowIfAppInForeground;	// IMP=0x001000000000363a
@property(readonly) NSNumber *announcementDestinations;
@property(readonly) NSNumber *announcementType;
@property(readonly) NSNumber *announcementId;
@property(readonly) long long type;
- (id)contextValueForKey:(id)arg1;	// IMP=0x00100000000032d0
@property(readonly) NSString *sharedTripTransportTypeString;
@property(readonly) NSString *sharedTripIdentifier;
@property(readonly) NSNumber *trafficIncidentAlert;
@property(readonly) NSData *trafficIncidentAlertID;
@property(readonly) NSUUID *parkedCarIdentifier;
@end

