//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BroadwayActivationDoneViewController, BroadwayActivationFailedNoConnectivityViewController, BroadwayActivationFailedViewController, BroadwayActivationStartViewController, PKPhysicalCard, SVSCommonNavController, UIStoryboard;

__attribute__((visibility("hidden")))
@interface BroadwayActivationMainController
{
    _Bool _appeared;	// 24 = 0x18
    _Bool _dismissed;	// 25 = 0x19
    UIStoryboard *_storyboard;	// 32 = 0x20
    SVSCommonNavController *_vcNav;	// 40 = 0x28
    BroadwayActivationDoneViewController *_vcDone;	// 48 = 0x30
    BroadwayActivationFailedViewController *_vcFailed;	// 56 = 0x38
    BroadwayActivationFailedNoConnectivityViewController *_vcFailedNoConnectivity;	// 64 = 0x40
    BroadwayActivationStartViewController *_vcStart;	// 72 = 0x48
    _Bool _test;	// 80 = 0x50
    _Bool _noCardTest;	// 81 = 0x51
    PKPhysicalCard *_physicalCard;	// 88 = 0x58
    long long _forcedActivationResult;	// 96 = 0x60
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00400000001d9cbc
- (void).cxx_destruct;	// IMP=0x00200000001d99f0
@property(nonatomic) _Bool noCardTest; // @synthesize noCardTest=_noCardTest;
@property(nonatomic) long long forcedActivationResult; // @synthesize forcedActivationResult=_forcedActivationResult;
@property(nonatomic) _Bool test; // @synthesize test=_test;
@property(copy, nonatomic) PKPhysicalCard *physicalCard; // @synthesize physicalCard=_physicalCard;
- (void)retryActivation;	// IMP=0x00100000001d98a0
- (void)showCompletedUI:(long long)arg1;	// IMP=0x00100000001d967b
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000001d94d7
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d93b3
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d9397
- (void)dismiss:(int)arg1;	// IMP=0x00100000001d9383
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001d91c0
- (void)presentAppropriateViewControllerIfReady;	// IMP=0x00100000001d8dbd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001d8d1e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001d8c9d
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d8a3d
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001d8a35

@end
