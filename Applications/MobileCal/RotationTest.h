//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RotationTest
{
    unsigned long long _iterations;	// 8 = 0x8
    long long _currentTargetOrientation;	// 16 = 0x10
    _Bool _inputInvalid;	// 24 = 0x18
    _Bool _useNotifications;	// 25 = 0x19
}

- (void)_setupViewToDate:(id)arg1;	// IMP=0x002000000003f415
- (void)_rotationAnimationCompleted:(id)arg1;	// IMP=0x001000000003f306
- (void)_rotationAnimationStarted:(id)arg1;	// IMP=0x001000000003f1f4
- (void)_rotationTest;	// IMP=0x001000000003ef54
- (void)_finishTest;	// IMP=0x001000000003ee9a
- (void)_startTest;	// IMP=0x001000000003ec3e
- (void)runTest;	// IMP=0x001000000003e974
- (id)checkTestPreconditions;	// IMP=0x001000000003e96c
- (id)rotationAnimationCompleteNotificationName;	// IMP=0x001000000003e964
- (id)rotationAnimationStartedNotificationName;	// IMP=0x001000000003e95c
- (id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3;	// IMP=0x001000000003e82a
- (id)delaySubTestName;	// IMP=0x001000000003e81d
- (id)_subTestNameForTargetInterfaceOrientation:(long long)arg1;	// IMP=0x001000000003e801

@end
