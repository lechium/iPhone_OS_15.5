//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETScalarEventTracker;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETScalarEventTracker *_pinGestureCompletionTracker;	// 8 = 0x8
    PETScalarEventTracker *_unpinGestureCompletionTracker;	// 16 = 0x10
    PETScalarEventTracker *_movePIPGestureCompletionTracker;	// 24 = 0x18
    PETScalarEventTracker *_moveSideGestureCompletionTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000229ac4
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x000000000002dab2
- (unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2;	// IMP=0x0000000000229a79
- (unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2;	// IMP=0x0000000000229a34
- (id)init;	// IMP=0x00000000002295a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
