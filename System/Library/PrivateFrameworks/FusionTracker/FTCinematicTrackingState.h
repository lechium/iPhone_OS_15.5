//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCinematicHighPriorityTrackerState, FTCinematicInput;

@interface FTCinematicTrackingState : NSObject
{
    shared_ptr_0abad622 _tracker;	// 8 = 0x8
    unsigned long long _commitToken;	// 24 = 0x18
    shared_ptr_a4dcdb7c _frame;	// 32 = 0x20
    _Bool _isTapToTrackOverlapWithIspMitigationEnabled;	// 48 = 0x30
    FTCinematicHighPriorityTrackerState *_highPriorityTrackerState;	// 56 = 0x38
    FTCinematicInput *_input;	// 64 = 0x40
}

+ (id)stateWithTracker:(shared_ptr_0abad622)arg1 frame:(shared_ptr_a4dcdb7c)arg2 input:(id)arg3;	// IMP=0x000000000000e4b0
- (id).cxx_construct;	// IMP=0x000000000000f820
- (void).cxx_destruct;	// IMP=0x000000000000f790
@property(readonly, nonatomic) FTCinematicInput *input; // @synthesize input=_input;
@property(readonly, nonatomic) FTCinematicHighPriorityTrackerState *highPriorityTrackerState; // @synthesize highPriorityTrackerState=_highPriorityTrackerState;
- (id)commit;	// IMP=0x000000000000e6d0

@end
