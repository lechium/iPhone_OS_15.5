//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTriggeredEventNotificationTriggerHelper-Protocol.h>

@class NSString;
@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>
{
    id <CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;	// 8 = 0x8
    id <CalDateProvider> _dateProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000472ae
@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <CALNTravelAdvisoryAuthority> travelAdvisoryAuthority; // @synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority;
- (_Bool)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1;	// IMP=0x000000000004722a
- (_Bool)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2;	// IMP=0x0000000000047155
- (_Bool)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2;	// IMP=0x0000000000047059
- (_Bool)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;	// IMP=0x0000000000046d51
- (_Bool)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(_Bool)arg5 satisfiesMinimumTravelTimeThreshold:(_Bool)arg6;	// IMP=0x0000000000046a6f
- (_Bool)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;	// IMP=0x0000000000045f58
- (_Bool)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4;	// IMP=0x0000000000045d4e
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;	// IMP=0x0000000000045cb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
