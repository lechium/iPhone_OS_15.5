//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKRemoteShareableCredentialsMessageComposeViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKRemoteShareableCredentialsMessageComposeViewController : _UIRemoteViewController <PKRemoteShareableCredentialsMessageComposeViewControllerProtocol>
{
    _Bool _finished;	// 8 = 0x8
    id <PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;	// 16 = 0x10
}

+ (id)serviceViewControllerInterface;	// IMP=0x00000000000abdc2
+ (id)exportedInterface;	// IMP=0x00000000000abda2
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x00000000000abd9a
- (void).cxx_destruct;	// IMP=0x00000000000abf13
@property(nonatomic) __weak id <PKShareableCredentialsMessageComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)messageComposeViewControllerDidFinishWithResult:(_Bool)arg1;	// IMP=0x00000000000abe57
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000000abe02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
