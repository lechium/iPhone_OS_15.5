//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface SLRemoteComposeViewController : _UIRemoteViewController
{
    id <SLRemoteComposeViewControllerDelegateProtocol> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c2ac
@property(nonatomic) __weak id <SLRemoteComposeViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000001c277
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000001c1cc

@end
