//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXAVRouteInfo, AVRoutingSessionManager;

@interface ATXAVRoutingSessionHelper : NSObject
{
    float _threshold;	// 8 = 0x8
    AVRoutingSessionManager *_avRoutingSessionManager;	// 16 = 0x10
    ATXAVRouteInfo *_internalPredictedRouteInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000055a81
- (id)_atxAVRouteInfoWithRoute:(id)arg1;	// IMP=0x0000000000055879
- (id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2;	// IMP=0x00000000000557cd
- (id)_selectedOrPendingRoute;	// IMP=0x0000000000055707
- (id)_predictedRouteWithAcceptThreshold:(float)arg1;	// IMP=0x0000000000055659
- (id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(_Bool)arg2;	// IMP=0x0000000000055548
@property(readonly, nonatomic) float acceptThreshod;
@property(readonly, nonatomic) ATXAVRouteInfo *predictedRouteInfo;
- (id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2;	// IMP=0x000000000005541e
- (id)init;	// IMP=0x0000000000055407

@end
