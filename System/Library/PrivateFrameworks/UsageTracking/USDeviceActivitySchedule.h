//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSDateInterval;

@interface USDeviceActivitySchedule : NSObject <NSSecureCoding>
{
    _Bool _repeats;	// 8 = 0x8
    NSDateComponents *_intervalStart;	// 16 = 0x10
    NSDateComponents *_intervalEnd;	// 24 = 0x18
    NSDateComponents *_warningTime;	// 32 = 0x20
}

+ (id)nextWarningDateForComponents:(id)arg1 referenceDate:(id)arg2;	// IMP=0x0000000000001cf7
+ (id)nextIntervalForStartComponents:(id)arg1 endComponents:(id)arg2;	// IMP=0x00000000000019c4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000192e
- (void).cxx_destruct;	// IMP=0x00000000000022f1
@property(readonly, copy) NSDateComponents *warningTime; // @synthesize warningTime=_warningTime;
@property(readonly) _Bool repeats; // @synthesize repeats=_repeats;
@property(readonly, copy) NSDateComponents *intervalEnd; // @synthesize intervalEnd=_intervalEnd;
@property(readonly, copy) NSDateComponents *intervalStart; // @synthesize intervalStart=_intervalStart;
- (id)description;	// IMP=0x0000000000002192
- (unsigned long long)hash;	// IMP=0x00000000000020ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001ed6
@property(readonly, copy) NSDateInterval *nextInterval;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001894
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000016df
- (id)initWithIntervalStart:(id)arg1 intervalEnd:(id)arg2 repeats:(_Bool)arg3 warningTime:(id)arg4;	// IMP=0x00000000000015f2

@end
