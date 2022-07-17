//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RideBookingPlanningSession;

__attribute__((visibility("hidden")))
@interface RideSharingSessionDirectionsPlanBuilder : NSObject
{
    RideBookingPlanningSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000054d857
@property(readonly, nonatomic) RideBookingPlanningSession *session; // @synthesize session=_session;
- (void)_addOriginDestinationToPlan:(id)arg1;	// IMP=0x001000000054d5ec
- (id)buildDirectionsPlan;	// IMP=0x001000000054d4f1
- (id)initWithRideBookingPlanningSession:(id)arg1;	// IMP=0x001000000054d486

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
