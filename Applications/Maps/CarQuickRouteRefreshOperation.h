//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSOperationQueue, _MKQuickRouteManager;

__attribute__((visibility("hidden")))
@interface CarQuickRouteRefreshOperation : NSOperation
{
    _MKQuickRouteManager *_quickRouteManager;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (_Bool)isFullThrottleEngaged;	// IMP=0x004000000015d764
+ (void)engageFullThrottleForInterval:(double)arg1;	// IMP=0x001000000015d6b3
+ (void)suspendQueues:(_Bool)arg1;	// IMP=0x001000000015d5ea
+ (id)throttleStateDescription;	// IMP=0x001000000015d450
+ (unsigned long long)throttlePreventionLevel;	// IMP=0x001000000015d35c
+ (unsigned long long)throttlePreventionLevelForAvailableRequestCount:(unsigned int)arg1;	// IMP=0x001000000015d1d0
+ (void)initialize;	// IMP=0x001000000015d0d3
- (void).cxx_destruct;	// IMP=0x002000000015db2d
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) _MKQuickRouteManager *quickRouteManager; // @synthesize quickRouteManager=_quickRouteManager;
- (void)main;	// IMP=0x001000000015d924
- (id)initWithQuickRoute:(id)arg1;	// IMP=0x001000000015d884
- (id)description;	// IMP=0x001000000015d770

@end
