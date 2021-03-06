//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol MuninPIPDataCoordinator;

@protocol MuninPIPDataCoordinatorObserver <NSObject>

@optional
- (void)muninPIPDataCoordinatorDidSelectMapItem:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidDoubleTapZoomOutMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidDoubleTapZoomInMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidSingleFingerZoomOutMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidSingleFingerZoomInMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidPinchZoomOutMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidPinchZoomInMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidExitMuninPIP:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorWillExitMuninPIP:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidEndMovingMuninView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidSynchronizeMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorIsMovingMuninView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidStartMovingMuninView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidPanMuninView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidEndRotatingMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorIsRotatingMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidStartRotatingMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidEndPanningMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorIsPanningMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidStartPanningMapView:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidChangeMuninAvailability:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorFailedToEnterMuninPIP:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorDidEnterMuninPIP:(id <MuninPIPDataCoordinator>)arg1;
- (void)muninPIPDataCoordinatorWillEnterMuninPIP:(id <MuninPIPDataCoordinator>)arg1;
@end

