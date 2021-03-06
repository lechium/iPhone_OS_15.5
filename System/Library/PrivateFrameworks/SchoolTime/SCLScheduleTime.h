//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSMutableCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface SCLScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _hour;	// 8 = 0x8
    unsigned long long _minute;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029293
@property(readonly, nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) unsigned long long hour; // @synthesize hour=_hour;
- (long long)compare:(id)arg1;	// IMP=0x0000000000029720
- (unsigned long long)hash;	// IMP=0x00000000000296e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029622
@property(readonly, copy, nonatomic) NSDateComponents *dateComponents;
- (id)description;	// IMP=0x00000000000294b5
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029487
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002947c
- (id)initWithScheduleTime:(id)arg1;	// IMP=0x00000000000293fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002938c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000292f9
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;	// IMP=0x00000000000292b1
- (id)init;	// IMP=0x000000000002929b

@end

