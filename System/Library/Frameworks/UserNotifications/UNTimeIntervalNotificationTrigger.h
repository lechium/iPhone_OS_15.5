//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UNTimeIntervalNotificationTrigger
{
    double _timeInterval;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000528e
+ (id)triggerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2;	// IMP=0x0000000000004cd2
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005319
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005296
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;	// IMP=0x0000000000005065
- (id)nextTriggerDate;	// IMP=0x0000000000005027
- (id)description;	// IMP=0x0000000000004f8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004edf
- (unsigned long long)hash;	// IMP=0x0000000000004e4a
- (id)_initWithTimeInterval:(double)arg1 repeats:(_Bool)arg2;	// IMP=0x0000000000004d09

@end

