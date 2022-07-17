//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsAppTestCirclePan;

__attribute__((visibility("hidden")))
@interface MapsAppTestJump
{
    MapsAppTestCirclePan *_subTest;	// 8 = 0x8
    _Bool _altitudeIsRegionSize;	// 16 = 0x10
    _Bool _savedDebugDrawContinuously;	// 17 = 0x11
    double _pitch;	// 24 = 0x18
    double _yaw;	// 32 = 0x20
    CDStruct_071ac149 _endPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000082f3a3
@property(nonatomic) _Bool savedDebugDrawContinuously; // @synthesize savedDebugDrawContinuously=_savedDebugDrawContinuously;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) _Bool altitudeIsRegionSize; // @synthesize altitudeIsRegionSize=_altitudeIsRegionSize;
@property(nonatomic) CDStruct_39925896 endPoint; // @synthesize endPoint=_endPoint;
- (void)finishedFps;	// IMP=0x001000000082edc8
- (void)startTimingFps;	// IMP=0x001000000082ecb8
- (void)didFinishJumping;	// IMP=0x001000000082e91d
- (void)jumpToCupertino;	// IMP=0x001000000082e89f
- (void)jumpToBayArea;	// IMP=0x001000000082e821
- (_Bool)runTest;	// IMP=0x001000000082e501
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x001000000082e385

@end
