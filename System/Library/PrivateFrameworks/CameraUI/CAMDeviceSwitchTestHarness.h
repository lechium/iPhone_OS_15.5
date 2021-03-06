//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness
{
    _Bool _testingAnimation;	// 8 = 0x8
    CAMViewfinderViewController *_viewfinderViewController;	// 16 = 0x10
    long long _desiredDevicePosition;	// 24 = 0x18
    long long _startingCaptureMode;	// 32 = 0x20
    double _testExtensionSeconds;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010de1e
@property(readonly, nonatomic) double testExtensionSeconds; // @synthesize testExtensionSeconds=_testExtensionSeconds;
@property(readonly, nonatomic, getter=isTestingAnimation) _Bool testingAnimation; // @synthesize testingAnimation=_testingAnimation;
@property(readonly, nonatomic) long long startingCaptureMode; // @synthesize startingCaptureMode=_startingCaptureMode;
@property(readonly, nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
- (void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(CDUnknownBlockType)arg3;	// IMP=0x000000000010dccc
- (void)_internalStopTesting;	// IMP=0x000000000010dc08
- (void)handleDidOpenViewfinderForReason:(long long)arg1;	// IMP=0x000000000010db92
- (void)startTesting;	// IMP=0x000000000010d9b9
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(_Bool)arg4 startingCaptureMode:(long long)arg5 testExtensionSeconds:(double)arg6;	// IMP=0x000000000010d8e6

@end

