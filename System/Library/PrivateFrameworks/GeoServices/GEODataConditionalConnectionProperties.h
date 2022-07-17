//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding>
{
    unsigned long long _workLoad;	// 8 = 0x8
    double _timeWindowStartTime;	// 16 = 0x10
    double _timeWindowDuration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000012bde45
@property(readonly, nonatomic) double timeWindowDuration; // @synthesize timeWindowDuration=_timeWindowDuration;
@property(readonly, nonatomic) double timeWindowStartTime; // @synthesize timeWindowStartTime=_timeWindowStartTime;
@property(readonly, nonatomic) unsigned long long workLoad; // @synthesize workLoad=_workLoad;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000012bdfa3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000012bdef6
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2;	// IMP=0x00000000012bdea8
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3;	// IMP=0x00000000012bde4d

@end
