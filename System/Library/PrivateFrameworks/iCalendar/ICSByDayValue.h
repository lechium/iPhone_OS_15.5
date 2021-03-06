//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface ICSByDayValue : NSObject <NSSecureCoding>
{
    NSNumber *_number;	// 8 = 0x8
    long long _weekday;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002eaaa
+ (id)byDayValueFromICSString:(id)arg1;	// IMP=0x000000000001f0f9
+ (long long)weekdayFromICSString:(id)arg1;	// IMP=0x000000000001eff7
- (void).cxx_destruct;	// IMP=0x000000000002ec07
@property(nonatomic) long long weekday; // @synthesize weekday=_weekday;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eb24
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002eab2
@property(retain, nonatomic) NSNumber *number;
- (id)initWithWeekday:(long long)arg1 number:(id)arg2;	// IMP=0x000000000002e9aa
- (id)initWithWeekday:(long long)arg1;	// IMP=0x000000000002e996
- (long long)compare:(id)arg1;	// IMP=0x00000000000198e8
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;	// IMP=0x00000000000197a3

@end

