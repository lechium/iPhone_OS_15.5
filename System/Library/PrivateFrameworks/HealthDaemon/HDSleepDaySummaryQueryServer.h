//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSleepDaySummaryQueryConfiguration;

@interface HDSleepDaySummaryQueryServer
{
    HKSleepDaySummaryQueryConfiguration *_configuration;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0000000000504b6d
+ (Class)queryClass;	// IMP=0x0000000000504b5c
- (void).cxx_destruct;	// IMP=0x00000000005057d5
- (void)_queue_start;	// IMP=0x0000000000504c28
- (id)objectTypes;	// IMP=0x0000000000504bd7
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000504acf

@end

