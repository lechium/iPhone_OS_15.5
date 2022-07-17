//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class SCLScheduleTime;

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding>
{
    SCLScheduleTime *_startTime;	// 8 = 0x8
    SCLScheduleTime *_endTime;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d317
- (void).cxx_destruct;	// IMP=0x000000000001db5f
@property(readonly, copy, nonatomic) SCLScheduleTime *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) SCLScheduleTime *startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x000000000001d9f3
- (unsigned long long)hash;	// IMP=0x000000000001d966
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d81b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d810
- (_Bool)intersectsTimeInterval:(id)arg1;	// IMP=0x000000000001d663
- (_Bool)containsScheduleTime:(id)arg1;	// IMP=0x000000000001d564
- (_Bool)crossesDayBoundary;	// IMP=0x000000000001d467
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d3f9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d31f
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;	// IMP=0x000000000001d25e

@end
