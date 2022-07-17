//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TPSTimeframeRecordUtilities : NSObject
{
    NSDate *_date;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000242a9
+ (id)keyOrder;	// IMP=0x0000000000023b05
- (void).cxx_destruct;	// IMP=0x000000000002436f
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024342
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000242b1
@property(readonly, nonatomic) _Bool isNight;
@property(readonly, nonatomic) _Bool isEvening;
@property(readonly, nonatomic) _Bool isAfternoon;
@property(readonly, nonatomic) _Bool isMorning;
@property(readonly, nonatomic) _Bool isSunday;
@property(readonly, nonatomic) _Bool isSaturday;
@property(readonly, nonatomic) _Bool isFriday;
@property(readonly, nonatomic) _Bool isThursday;
@property(readonly, nonatomic) _Bool isWednesday;
@property(readonly, nonatomic) _Bool isTuesday;
@property(readonly, nonatomic) _Bool isMonday;
@property(readonly, nonatomic) _Bool isWeekend;
@property(readonly, nonatomic) _Bool isWeekday;
- (id)description;	// IMP=0x0000000000023b55
- (id)recordInfo;	// IMP=0x00000000000236d6
- (id)initWithDate:(id)arg1;	// IMP=0x000000000002363e

@end
