//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class BPSIllustratedWatchView, COSDiscoverListViewController, COSWatchView, NSArray, NSString, PBBridgeProgressView, PSYInitialSyncStateObserver, UILabel;
@protocol COSBuddyControllerDelegate;

@interface COSSetupFinishedViewController : BPSWelcomeOptinViewController
{
    _Bool _isDeviceActivated;	// 8 = 0x8
    _Bool _isRemotePreparedForInitialSync;	// 9 = 0x9
    _Bool _syncCompletedBeforeActivation;	// 10 = 0xa
    _Bool _isSyncComplete;	// 11 = 0xb
    _Bool _alertDismissed;	// 12 = 0xc
    _Bool _userDidAbortSync;	// 13 = 0xd
    PBBridgeProgressView *_progressView;	// 16 = 0x10
    COSWatchView *_deviceSyncView;	// 24 = 0x18
    BPSIllustratedWatchView *_illustratedSyncView;	// 32 = 0x20
    UILabel *_progress;	// 40 = 0x28
    double _totalProgress;	// 48 = 0x30
    PSYInitialSyncStateObserver *_initialSyncStateObserver;	// 56 = 0x38
    NSArray *_architectureIncompatibleApps;	// 64 = 0x40
    COSDiscoverListViewController *_discoverIntro;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007aea0
@property(retain, nonatomic) COSDiscoverListViewController *discoverIntro; // @synthesize discoverIntro=_discoverIntro;
@property(retain, nonatomic) NSArray *architectureIncompatibleApps; // @synthesize architectureIncompatibleApps=_architectureIncompatibleApps;
@property(retain, nonatomic) PSYInitialSyncStateObserver *initialSyncStateObserver; // @synthesize initialSyncStateObserver=_initialSyncStateObserver;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(nonatomic) _Bool userDidAbortSync; // @synthesize userDidAbortSync=_userDidAbortSync;
@property(nonatomic) _Bool alertDismissed; // @synthesize alertDismissed=_alertDismissed;
@property(retain, nonatomic) UILabel *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) BPSIllustratedWatchView *illustratedSyncView; // @synthesize illustratedSyncView=_illustratedSyncView;
@property(retain, nonatomic) COSWatchView *deviceSyncView; // @synthesize deviceSyncView=_deviceSyncView;
@property(retain, nonatomic) PBBridgeProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete=_isSyncComplete;
@property(nonatomic) _Bool syncCompletedBeforeActivation; // @synthesize syncCompletedBeforeActivation=_syncCompletedBeforeActivation;
@property(nonatomic) _Bool isRemotePreparedForInitialSync; // @synthesize isRemotePreparedForInitialSync=_isRemotePreparedForInitialSync;
@property(nonatomic) _Bool isDeviceActivated; // @synthesize isDeviceActivated=_isDeviceActivated;
- (void)updateAppsIfNeededWithArchitectureIncompatibleApps:(id)arg1;	// IMP=0x001000000007a7d7
- (void)determineArchitectureCompatibilityIfNeeded;	// IMP=0x001000000007a010
- (void)globalAlertPresentationCoordinator:(id)arg1 dismissAlert:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079d8e
- (void)globalAlertPresentationCoordinator:(id)arg1 presentAlert:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079cb2
- (void)globalAlertPresentationCoordinator:(id)arg1 syncProgressDidUpdate:(double)arg2;	// IMP=0x00100000000799f3
- (_Bool)isMigrating;	// IMP=0x00100000000798d8
- (void)deviceBecameActive:(id)arg1;	// IMP=0x001000000007987c
- (void)userAbortedPairing;	// IMP=0x001000000007954a
- (_Bool)controllerAllowsNavigatingBackFrom;	// IMP=0x0010000000079542
- (void)_updateProgressUI;	// IMP=0x00100000000794b3
- (_Bool)_isSyncComplete;	// IMP=0x001000000007931c
- (void)deviceDidPair:(id)arg1;	// IMP=0x0010000000079090
- (_Bool)isTinkerWatch;	// IMP=0x001000000007901d
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000078e0a
- (void)setupSyncMonitorIfNeeded;	// IMP=0x0010000000078d0c
- (void)_pushToSetupFinished;	// IMP=0x0010000000078b58
- (void)continuePairedSync;	// IMP=0x00100000000786ea
- (void)dismissDiscoverIntro:(id)arg1;	// IMP=0x0010000000078669
- (void)okayButtonPressed:(id)arg1;	// IMP=0x00100000000784b5
- (id)okayButtonTitle;	// IMP=0x0010000000078449
- (id)detailString;	// IMP=0x00100000000783dd
- (id)titleString;	// IMP=0x0010000000078371
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000077944
- (void)viewDidLoad;	// IMP=0x0010000000077679
- (void)checkHoldReleaseConditions;	// IMP=0x00100000000775b0
- (void)finishedInitialSyncPrep;	// IMP=0x001000000007752c
- (void)finishedActivating;	// IMP=0x0010000000077427
- (void)didEstablishHold;	// IMP=0x0010000000077352
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000076fd1
- (id)watchProgressView;	// IMP=0x0010000000076f70
- (void)dealloc;	// IMP=0x0010000000076ec1
- (id)init;	// IMP=0x00100000000767df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
