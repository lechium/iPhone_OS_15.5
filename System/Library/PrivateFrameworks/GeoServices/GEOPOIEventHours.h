//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface GEOPOIEventHours : NSObject <NSSecureCoding>
{
    NSDateInterval *_dateInterval;	// 8 = 0x8
    NSArray *_hours;	// 16 = 0x10
}

+ (id)eventHoursForDateTimeRanges:(id)arg1;	// IMP=0x000000000107e862
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000107e85a
- (void).cxx_destruct;	// IMP=0x000000000107ef35
@property(retain, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000107ee91
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000107ed70
- (id)initWithDateTimeRange:(id)arg1;	// IMP=0x000000000107eb02
- (id)initWithDateInterval:(id)arg1;	// IMP=0x000000000107ea97
- (id)init;	// IMP=0x000000000107ea6d

@end
