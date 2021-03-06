//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutRoute;

@interface HDWorkoutRouteQueryServer
{
    unsigned long long _batchThreshold;	// 8 = 0x8
    HKWorkoutRoute *_locationSeries;	// 16 = 0x10
}

+ (id)requiredEntitlements;	// IMP=0x00000000003b496f
+ (Class)queryClass;	// IMP=0x00000000003b495e
- (void).cxx_destruct;	// IMP=0x00000000003b4f9a
- (void)_queue_start;	// IMP=0x00000000003b497c
- (void)unitTest_setBatchThreshold:(unsigned long long)arg1;	// IMP=0x00000000003b494d
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000003b489b

@end

