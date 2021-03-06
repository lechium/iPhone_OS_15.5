//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>
#import <CalendarNotification/NSMutableCopying-Protocol.h>
#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_alarmID;	// 8 = 0x8
    _Bool _isOffsetFromTravelTimeStart;	// 16 = 0x10
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;	// 24 = 0x18
    EKTravelEngineHypothesis *_hypothesis;	// 32 = 0x20
    _Bool _hasDisplayedLeaveByMessage;	// 40 = 0x28
    _Bool _hasDisplayedLeaveNowMessage;	// 41 = 0x29
    _Bool _hasDisplayedRunningLateMessage;	// 42 = 0x2a
    NSDate *_lastTimeNotificationAdded;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000047cb8
- (void).cxx_destruct;	// IMP=0x0000000000048727
@property(readonly, copy, nonatomic) NSDate *lastTimeNotificationAdded; // @synthesize lastTimeNotificationAdded=_lastTimeNotificationAdded;
@property(readonly, nonatomic) _Bool hasDisplayedRunningLateMessage; // @synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage;
@property(readonly, nonatomic) _Bool hasDisplayedLeaveNowMessage; // @synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage;
@property(readonly, nonatomic) _Bool hasDisplayedLeaveByMessage; // @synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage;
@property(readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
@property(readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, copy, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
- (id)description;	// IMP=0x000000000004854a
- (_Bool)isEqualToNotificationData:(id)arg1;	// IMP=0x000000000004830c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000482ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000482a3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048162
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047fbf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047e11
- (id)_initWithAlarmID:(id)arg1 isOffsetFromTravelTimeStart:(_Bool)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hypothesis:(id)arg4 hasDisplayedLeaveByMessage:(_Bool)arg5 hasDisplayedLeaveNowMessage:(_Bool)arg6 hasDisplayedRunningLateMessage:(_Bool)arg7 lastTimeNotificationAdded:(id)arg8;	// IMP=0x0000000000047ce8
- (id)init;	// IMP=0x0000000000047cc0

@end

