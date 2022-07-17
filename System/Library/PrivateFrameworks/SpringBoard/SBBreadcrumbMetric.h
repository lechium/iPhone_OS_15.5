//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETGoalConversionEventTracker;

@interface SBBreadcrumbMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETGoalConversionEventTracker *_leftTracker;	// 8 = 0x8
    PETGoalConversionEventTracker *_rightTracker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000612202
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x000000000002d7a2
- (id)init;	// IMP=0x0000000000611fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
