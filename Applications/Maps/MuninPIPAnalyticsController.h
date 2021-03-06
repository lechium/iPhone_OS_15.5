//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol MuninPIPDataCoordinator;

__attribute__((visibility("hidden")))
@interface MuninPIPAnalyticsController : NSObject
{
    id <MuninPIPDataCoordinator> _dataCoordinator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000093e61d
@property(nonatomic) __weak id <MuninPIPDataCoordinator> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (int)_targetForMuninPIPDataCoordinator:(id)arg1;	// IMP=0x001000000093e59f
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;	// IMP=0x001000000093e3c8
- (void)muninPIPDataCoordinatorDidEndPanningMapView:(id)arg1;	// IMP=0x001000000093e390
- (void)muninPIPDataCoordinatorDidEndRotatingMapView:(id)arg1;	// IMP=0x001000000093e358
- (void)muninPIPDataCoordinatorDidSelectMapItem:(id)arg1;	// IMP=0x001000000093e24a
- (void)muninPIPDataCoordinatorDidDoubleTapZoomOutMapView:(id)arg1;	// IMP=0x001000000093e212
- (void)muninPIPDataCoordinatorDidDoubleTapZoomInMapView:(id)arg1;	// IMP=0x001000000093e1da
- (void)muninPIPDataCoordinatorDidSingleFingerZoomOutMapView:(id)arg1;	// IMP=0x001000000093e1a2
- (MISSING_TYPE *)muninPIPDataCoordinatorDidSingleFingerZoomInMapView: /* Error: Ran out of types for this method. */;	// IMP=0x001000000093e16a
- (void)muninPIPDataCoordinatorDidPinchZoomOutMapView:(id)arg1;	// IMP=0x001000000093e132
- (void)muninPIPDataCoordinatorDidPinchZoomInMapView:(id)arg1;	// IMP=0x001000000093e0fa
- (void)muninPIPDataCoordinatorDidRotateMapView:(id)arg1;	// IMP=0x001000000093e0c2
- (void)muninPIPDataCoordinatorDidEnterMuninPIP:(id)arg1;	// IMP=0x001000000093e0a6
- (id)initWithDataCoordinator:(id)arg1;	// IMP=0x001000000093e026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

