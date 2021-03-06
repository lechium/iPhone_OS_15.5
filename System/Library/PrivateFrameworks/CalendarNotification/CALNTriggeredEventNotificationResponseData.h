//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding>
{
    EKTravelEngineHypothesis *_hypothesis;	// 8 = 0x8
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000050175
- (void).cxx_destruct;	// IMP=0x0000000000050465
@property(readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(readonly, nonatomic) EKTravelEngineHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
- (id)description;	// IMP=0x000000000005039b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000502ed
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000050228
- (id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2;	// IMP=0x000000000005017d

@end

