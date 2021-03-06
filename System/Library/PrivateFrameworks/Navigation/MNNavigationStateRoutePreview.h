//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNNavigationSessionManager, NSArray;

@interface MNNavigationStateRoutePreview
{
    NSArray *_previewRoutes;	// 8 = 0x8
    unsigned long long _selectedRouteIndex;	// 16 = 0x10
    MNNavigationSessionManager *_navigationSessionManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f5910
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f58f3
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f58d6
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000f581e
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f5748
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000f572b
- (void)leaveState;	// IMP=0x00000000000f56ca
- (void)enterState;	// IMP=0x00000000000f558e
- (id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3;	// IMP=0x00000000000f5504
- (id)simulationLocationProvider;	// IMP=0x00000000000f54e7
- (id)traceManager;	// IMP=0x00000000000f54ca
- (_Bool)shouldClearStoredRoutes;	// IMP=0x00000000000f54c2
- (unsigned long long)desiredLocationProviderType;	// IMP=0x00000000000f54ba
- (_Bool)requiresHighMemoryThreshold;	// IMP=0x00000000000f54b2
- (unsigned long long)type;	// IMP=0x00000000000f54a7

@end

