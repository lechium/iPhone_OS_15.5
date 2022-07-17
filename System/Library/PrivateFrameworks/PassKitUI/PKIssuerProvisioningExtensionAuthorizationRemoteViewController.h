//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKIssuerProvisioningExtensionAuthorizationRemoteViewController-Protocol.h>

@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    long long _result;	// 16 = 0x10
    _Bool _finished;	// 24 = 0x18
}

+ (id)exportedInterface;	// IMP=0x00000000001c6906
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x00000000001c68fe
- (void).cxx_destruct;	// IMP=0x00000000001c6b6c
- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c6ae3
- (void)pkui_finish;	// IMP=0x00000000001c6a88
- (void)serviceViewControllerDidCompleteWithResult:(long long)arg1;	// IMP=0x00000000001c6a6b
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000001c6a2a
- (_Bool)_isPresentationContextByDefault;	// IMP=0x00000000001c6a22
- (void)dealloc;	// IMP=0x00000000001c6953
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001c6910

@end
