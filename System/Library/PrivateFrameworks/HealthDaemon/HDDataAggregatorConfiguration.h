//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataAggregatorConfiguration : NSObject <NSCopying>
{
    _Bool _hasActiveWorkout;	// 8 = 0x8
    _Bool _hasForegroundObserver;	// 9 = 0x9
    double _collectionLatency;	// 16 = 0x10
    double _aggregationInterval;	// 24 = 0x18
    double _maximumSeriesDuration;	// 32 = 0x20
}

+ (id)configurationWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(_Bool)arg4 foregroundObserver:(_Bool)arg5;	// IMP=0x00000000004216e3
@property(nonatomic) _Bool hasForegroundObserver; // @synthesize hasForegroundObserver=_hasForegroundObserver;
@property(readonly, nonatomic) _Bool hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
@property(readonly, nonatomic) double maximumSeriesDuration; // @synthesize maximumSeriesDuration=_maximumSeriesDuration;
@property(readonly, nonatomic) double aggregationInterval; // @synthesize aggregationInterval=_aggregationInterval;
@property(readonly, nonatomic) double collectionLatency; // @synthesize collectionLatency=_collectionLatency;
- (id)description;	// IMP=0x0000000000056c9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005959b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056cf5

@end

