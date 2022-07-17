//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKARWalkingCameraController <VKGesturingCameraController>
{
    void *_arLogic;	// 96 = 0x60
    void *_elevationLogic;	// 104 = 0x68
    struct Quaternion<double> _rotationCorrectionQuaternion;	// 112 = 0x70
    Coordinate3D_c88e9767 _coordinate;	// 144 = 0x90
    struct EulerAngles _eulerAngles;	// 168 = 0xa8
    Unit_57582783 _heading;	// 192 = 0xc0
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> _gestures;	// 200 = 0xc8
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _maxClipDistance;	// 224 = 0xe0
}

- (id).cxx_construct;	// IMP=0x0000000000852e50
- (void).cxx_destruct;	// IMP=0x0000000000852e11
- (void)stopTrackingAnnotation;	// IMP=0x0000000000852e0b
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000852e05
- (double)maxPitch;	// IMP=0x0000000000852dfc
- (double)minPitch;	// IMP=0x0000000000852df3
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000852de5
- (double)currentZoomLevel;	// IMP=0x0000000000852dd7
- (double)maximumZoomLevel;	// IMP=0x0000000000852dc9
- (double)minimumZoomLevel;	// IMP=0x0000000000852dbb
- (_Bool)usesVKCamera;	// IMP=0x0000000000852db3
- (double)pitch;	// IMP=0x0000000000852d47
- (void)setPitch:(double)arg1;	// IMP=0x0000000000852cdb
- (double)presentationHeading;	// IMP=0x0000000000852cc9
- (double)heading;	// IMP=0x0000000000852c5d
- (void)setHeading:(double)arg1;	// IMP=0x0000000000852bf1
- (void)setAltitude:(double)arg1;	// IMP=0x0000000000852afe
- (double)altitude;	// IMP=0x0000000000852af5
- (double)distanceFromCenterCoordinate;	// IMP=0x0000000000852a91
- (void)setDistanceFromCenterCoordinate:(double)arg1;	// IMP=0x0000000000852a2d
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x000000000085291c
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000008528a6
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000008527f1
- (void)setVkCamera:(id)arg1;	// IMP=0x00000000008527c2
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000852754
- (void)_updateDebugOverlay:(void *)arg1;	// IMP=0x000000000085239e
- (id)_buildDebugString:(void *)arg1;	// IMP=0x00000000008522cb
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000852289
- (void)_updateClipPlanes;	// IMP=0x00000000008521ff
- (void *)_locationProvider;	// IMP=0x00000000008521e7
- (void)pushGesture:(void *)arg1;	// IMP=0x0000000000851fa8
- (void)dealloc;	// IMP=0x0000000000851f5a
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 arLogic:(void *)arg6 elevationLogic:(void *)arg7;	// IMP=0x0000000000851d89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
