//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteTrafficFeatureCalculator : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSMapTable *_completionHandlers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000808d0e
@property(retain, nonatomic) NSMapTable *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
- (void)_calculateCameraFeaturesForRoute:(id)arg1;	// IMP=0x00100000008081fc
- (void)_startCalculationTaskForRoute:(id)arg1 completion:(id)arg2;	// IMP=0x0010000000807f3a
- (void)trafficFeaturesForRoute:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000807bb4
- (void)clearCachedTrafficFeaturesForRoute:(id)arg1;	// IMP=0x00100000008079e8
- (id)cachedTrafficFeaturesForRoute:(id)arg1;	// IMP=0x0010000000807929
- (id)init;	// IMP=0x00100000008077e3

@end
