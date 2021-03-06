//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VKMapView;
@protocol MapsAppTesting, PPTTestCoordinatorProtocol;

__attribute__((visibility("hidden")))
@interface MapsAppTest : NSObject
{
    NSString *_testName;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    id <MapsAppTesting> _app;	// 24 = 0x18
    NSMutableDictionary *_results;	// 32 = 0x20
    unsigned long long _currentSubTestIndex;	// 40 = 0x28
    double _currentSubTestStartTime;	// 48 = 0x30
    NSMutableArray *_fullyDrawnCallbacks;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000007aeb3c
@property(retain, nonatomic) NSMutableArray *fullyDrawnCallbacks; // @synthesize fullyDrawnCallbacks=_fullyDrawnCallbacks;
@property(readonly, nonatomic) double currentSubTestStartTime; // @synthesize currentSubTestStartTime=_currentSubTestStartTime;
@property(readonly, nonatomic) unsigned long long currentSubTestIndex; // @synthesize currentSubTestIndex=_currentSubTestIndex;
@property(retain, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
- (id)app;	// IMP=0x00100000007aeae7
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (void)didEndGEOPPTTest_Manifest_HandleMessage:(id)arg1;	// IMP=0x00100000007aea33
- (void)willBeginGEOPPTTest_Manifest_HandleMessage:(id)arg1;	// IMP=0x00100000007ae98c
- (void)didEndGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1;	// IMP=0x00100000007ae8ec
- (void)willBeginGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1;	// IMP=0x00100000007ae845
- (void)didEndGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1;	// IMP=0x00100000007ae7a5
- (void)willBeginGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1;	// IMP=0x00100000007ae6fe
- (void)didEndGEOPPTTest_Manifest_SetManifestToken:(id)arg1;	// IMP=0x00100000007ae65e
- (void)willBeginGEOPPTTest_Manifest_SetManifestToken:(id)arg1;	// IMP=0x00100000007ae5b7
- (void)didEndGEOPPTTest_Manifest_GetResourceManifest:(id)arg1;	// IMP=0x00100000007ae517
- (void)willBeginGEOPPTTest_Manifest_GetResourceManifest:(id)arg1;	// IMP=0x00100000007ae470
- (void)didEndGEOPPTTest_Manifest_ForcedUpdate:(id)arg1;	// IMP=0x00100000007ae3d0
- (void)willBeginGEOPPTTest_Manifest_ForcedUpdate:(id)arg1;	// IMP=0x00100000007ae329
- (void)didEndGEOPPTTest_Manifest_Update:(id)arg1;	// IMP=0x00100000007ae289
- (void)willBeginGEOPPTTest_Manifest_Update:(id)arg1;	// IMP=0x00100000007ae1e2
- (void)didEndGEOPPTTest_Manifest_SetupConnection:(id)arg1;	// IMP=0x00100000007ae142
- (void)willBeginGEOPPTTest_Manifest_SetupConnection:(id)arg1;	// IMP=0x00100000007ae09b
- (void)didEndGEOPPTTest_Manifest:(id)arg1;	// IMP=0x00100000007adffb
- (void)willBeginGEOPPTTest_Manifest:(id)arg1;	// IMP=0x00100000007adf54
- (void)registerGEOManifestSubtests;	// IMP=0x00100000007ad878
- (void)setupForVKTest;	// IMP=0x00100000007ad82c
- (void)setupForVKTestWithMapView:(id)arg1;	// IMP=0x00100000007ad5f2
- (void)setupFullyDrawnNotification:(SEL)arg1;	// IMP=0x00100000007ad58d
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000007ad453
- (void)vkMapViewFullyDrawn:(id)arg1;	// IMP=0x00100000007ad1f8
- (void)onFullyDrawn:(id)arg1;	// IMP=0x00100000007ad083
- (void);	// IMP=0x00100000007ace57
@property(readonly, nonatomic) NSArray *serialSubTests;
- (void)failedTestWithReason:(id)arg1;	// IMP=0x00100000007acd29
- (void)failedTest;	// IMP=0x00100000007acc70
- (void)finishedTestWithExtraResults:(id)arg1;	// IMP=0x00100000007aca98
- (void)finishedTest;	// IMP=0x00100000007aca84
- (void)finishedSerialSubTest:(id)arg1;	// IMP=0x00100000007ac6a7
- (void)finishedSubTest:(id)arg1;	// IMP=0x00100000007ac5d5
- (void)startedSubTest:(id)arg1 withMetrics:(id)arg2;	// IMP=0x00100000007ac4e2
- (void)startedSerialSubTest:(id)arg1;	// IMP=0x00100000007ac40c
- (void)startedSubTest:(id)arg1;	// IMP=0x00100000007ac336
- (void)startedTest;	// IMP=0x00100000007ac27b
- (void)cleanup:(_Bool)arg1;	// IMP=0x00100000007ac1cc
- (_Bool)runTest;	// IMP=0x00100000007ac1c4
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000007ac085
- (void)_presentDirectionDetailsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d885f
- (void)rotateDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a31a2
- (void)rotateDeviceWithSubtestName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a309e
- (void)popToRootTrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a2eeb
- (void)dismissTrayWithAssertTrayType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a2dfb
- (void)dismissTrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a2de4
- (void)dismissTrayWithSubtestName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a2d1b
- (void)_presentDismissTrayTestWithLatencySubTestName:(id)arg1 animationSubTestName:(id)arg2 presenter:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000007a27ea
- (void)_presentDismissTrayTestWithCount:(unsigned long long)arg1 numberOfRounds:(unsigned long long)arg2 latencySubTestName:(id)arg3 animationSubTestName:(id)arg4 presenter:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000007a2661
- (void)_presentDismissTrayTestWithNumberOfRounds:(unsigned long long)arg1 latencySubTestName:(id)arg2 animationSubTestName:(id)arg3 presenter:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000007a2638
- (void)presentDismissTrayTestAndSubTestsWithPrefix:(id)arg1 presenter:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007a255a
- (void)presentDismissTrayTestWithPresenter:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a2540
- (void)updateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007a23ad
- (void)_updateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2 latencySubTestName:(id)arg3 animationSubTestName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000007a2164
- (void)updateTrayLayout:(unsigned long long)arg1 withSubtestName:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000007a2051
@property(readonly, nonatomic) _Bool canUpdateTrayLayout;
- (void)_resizingTrayWithLatencySubTestName:(id)arg1 animationSubTestName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007a1b4c
- (void)_resizingTestWithCount:(unsigned long long)arg1 numbeorOfRounds:(unsigned long long)arg2 latencySubTestName:(id)arg3 animationSubTestName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000007a19f9
- (void)_resizingTestWithNumberOfRounds:(unsigned long long)arg1 latencySubTestName:(id)arg2 animationSubTestName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000007a19cc
- (void)resizingTestAndSubTestsWithPrefix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a190c
- (void)resizingTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a18f5
@property(readonly, nonatomic) id <PPTTestCoordinatorProtocol> testCoordinator;
- (_Bool)isRunningOnCarPlay;	// IMP=0x00100000007a17ee
- (void)didTearDownForVKTest;	// IMP=0x00100000007a1793
- (void)willSetupForVKTest;	// IMP=0x00100000007a16f4
- (void)switchToMapType:(unsigned long long)arg1;	// IMP=0x00100000007a165a
@property(readonly, nonatomic) VKMapView *mainVKMapView;
@property(readonly, nonatomic) MKMapView *mainMKMapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

