//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@interface ICSDateValue : NSObject <NSSecureCoding>
{
    long long _year;	// 8 = 0x8
    long long _month;	// 16 = 0x10
    long long _day;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a9a2
+ (id)dateFromICSString:(id)arg1;	// IMP=0x000000000002a644
+ (id)dateFromICSUTF8String:(const char *)arg1;	// IMP=0x000000000002aaf2
@property(readonly) long long day; // @synthesize day=_day;
@property(readonly) long long month; // @synthesize month=_month;
@property(readonly) long long year; // @synthesize year=_year;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002aa2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a9aa
- (id)description;	// IMP=0x000000000002a98e
- (id)icsString;	// IMP=0x000000000002a97a
- (long long)compare:(id)arg1;	// IMP=0x000000000002a798
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a73b
- (id)components;	// IMP=0x000000000002a6d3
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;	// IMP=0x000000000002a680
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;	// IMP=0x000000000001a6b4
- (int)dateType;	// IMP=0x000000000002ad40

@end

