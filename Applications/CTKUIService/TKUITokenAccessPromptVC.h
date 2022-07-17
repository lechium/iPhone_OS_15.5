//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSXPCConnection, TKTokenAccessUserPromptInfo;

@interface TKUITokenAccessPromptVC : SBUIRemoteAlertServiceViewController
{
    TKTokenAccessUserPromptInfo *_info;	// 8 = 0x8
    NSXPCConnection *_uiServerConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000001ea6
- (void)_invalidate;	// IMP=0x0010000000001df3
- (void)_finishWithPermissionGranted:(_Bool)arg1;	// IMP=0x0010000000001b81
- (void)_grantTokenAccess;	// IMP=0x0010000000001b6a
- (void)_denyTokenAccess;	// IMP=0x0010000000001b56
- (void)_connectToHostWithEndpoint:(id)arg1;	// IMP=0x00100000000019f3
- (void)_presentAlertWithClientName:(id)arg1 providerName:(id)arg2;	// IMP=0x001000000000157e
- (void)_presentAlert;	// IMP=0x00100000000014e4
- (void)dealloc;	// IMP=0x001000000000149b
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001274
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001150
- (long long)preferredStatusBarStyle;	// IMP=0x00100000000010d1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000001090

@end
