//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, VOTQuickSettingsViewController;

@interface VOTQuickSettingsViewServiceAdaptorViewController : SBUIRemoteAlertServiceViewController
{
    VOTQuickSettingsViewController *_rootViewController;	// 8 = 0x8
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000001be6
- (void).cxx_destruct;	// IMP=0x0020000000002085
@property(retain, nonatomic) VOTQuickSettingsViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)_dismiss;	// IMP=0x0010000000001f87
- (void)_setupRemoteProxy;	// IMP=0x0010000000001f15
- (void)quickSettingsViewControllerWasDismissed:(id)arg1;	// IMP=0x0010000000001f03
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001c81
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001bf6
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000001bee
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000001ba5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000001a72
- (void)viewDidLoad;	// IMP=0x00100000000019d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
