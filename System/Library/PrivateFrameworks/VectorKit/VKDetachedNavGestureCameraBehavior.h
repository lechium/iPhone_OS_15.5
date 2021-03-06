//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKDetachedNavGestureCameraBehavior
{
    VKNavCameraController *_navCameraController;	// 176 = 0xb0
    double _startZoomScale;	// 184 = 0xb8
    Unit_3d259e8a _startPitch;	// 192 = 0xc0
    VKTimedAnimation *_tapZoomAnimation;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x000000000085d7b5
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x000000000085d491
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x000000000085d167
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x000000000085d0f4
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000085ce3e
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000085cae9
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x000000000085c635
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000085c38d
- (void)dealloc;	// IMP=0x000000000085c32e
- (id)initWithNavCameraController:(id)arg1;	// IMP=0x000000000085c2bf

@end

