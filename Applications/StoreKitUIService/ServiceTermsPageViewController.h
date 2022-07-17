//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, SKTermsPageViewController, ServiceAlertProxy;

@interface ServiceTermsPageViewController : SBUIRemoteAlertServiceViewController
{
    ServiceAlertProxy *_remoteAlertProxy;	// 8 = 0x8
    SKTermsPageViewController *_underlyingViewController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000cae4
- (void).cxx_destruct;	// IMP=0x002000000000d938
- (void)_showViewControllerForAlertProxy:(id)arg1;	// IMP=0x001000000000d4ee
- (id)_remoteViewControllerProxy;	// IMP=0x001000000000d4b0
- (void)_dismissWithAcceptance:(_Bool)arg1;	// IMP=0x001000000000d441
- (void)_dismissClientViewController;	// IMP=0x001000000000d3b3
- (void)_dismiss;	// IMP=0x001000000000d309
- (_Bool)_checkEntitlementsWithError:(id *)arg1;	// IMP=0x001000000000d249
- (void)termsPageViewControllerDidFinish:(id)arg1 withAcceptance:(_Bool)arg2;	// IMP=0x001000000000d235
- (void)termsPageViewControllerDidFinish:(id)arg1;	// IMP=0x001000000000d223
- (void)handleHomeButtonPressed;	// IMP=0x001000000000d211
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x001000000000d096
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x001000000000d001
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000cf7a
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x001000000000ce12
- (void)viewDidLoad;	// IMP=0x001000000000cd7a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000caec
- (void)dealloc;	// IMP=0x001000000000ca77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
