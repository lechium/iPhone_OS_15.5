//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _GoalDetailCollator : NSObject
{
    long long _entryCount;	// 8 = 0x8
    long long _entriesExceedingGoal;	// 16 = 0x10
    double _totalPercentFromGoal;	// 24 = 0x18
}

- (id)detailStringWithTimeScope:(long long)arg1;	// IMP=0x0000000000226d54
- (id)activitySummaryDetailStringWithActivitySummary:(id)arg1 unitPreferenceController:(id)arg2 activityValue:(long long)arg3 displayTypeController:(id)arg4;	// IMP=0x00000000002267bc
- (void)processCoordinateUserInfo:(id)arg1;	// IMP=0x000000000022646c
- (id)init;	// IMP=0x0000000000226429

@end
