//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness
{
    _Bool _testingAnimation;	// 8 = 0x8
    CAMViewfinderViewController *_viewfinderViewController;	// 16 = 0x10
    long long _desiredMode;	// 24 = 0x18
    double _testExtensionSeconds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001776eb
@property(readonly, nonatomic) double testExtensionSeconds; // @synthesize testExtensionSeconds=_testExtensionSeconds;
@property(readonly, nonatomic, getter=isTestingAnimation) _Bool testingAnimation; // @synthesize testingAnimation=_testingAnimation;
@property(readonly, nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
- (void)_ensureCaptureMode:(long long)arg1 thenPerform:(CDUnknownBlockType)arg2;	// IMP=0x00000000001775c0
- (void)handleDidOpenViewfinderForReason:(long long)arg1;	// IMP=0x000000000017754a
- (void)_internalStopTesting;	// IMP=0x0000000000177486
- (void)_startTestingAfterModeSwitchIsTestingAnimation:(_Bool)arg1;	// IMP=0x0000000000177369
- (void)startTesting;	// IMP=0x00000000001771bf
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(_Bool)arg4 testExtensionSeconds:(double)arg5;	// IMP=0x00000000001770fb

@end

