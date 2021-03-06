//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKTravelEngineHypothesis, NSDate;

@protocol CALNTravelAdvisoryTimelinessAuthority <NSObject>
- (NSDate *)startOfRunningLatePeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (NSDate *)startOfLeaveNowPeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (unsigned long long)periodForHypothesis:(EKTravelEngineHypothesis *)arg1;
@end

