//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPTimeAsleepTrackerAutoTrackingState
{
}

- (void)startWakeDetectionOccurred;	// IMP=0x00000000000339e2
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;	// IMP=0x00000000000338fc
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;	// IMP=0x000000000003356f
- (id)stateName;	// IMP=0x0000000000033562
- (void)_updateStateSpecific;	// IMP=0x0000000000033474

@end
