//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol>
{
    id <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0000000000259d92
+ (id)exportedInterface;	// IMP=0x0000000000259d72
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x0000000000259d6a
- (void).cxx_destruct;	// IMP=0x0000000000259f5d
@property(nonatomic) __weak id <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1;	// IMP=0x0000000000259ed3
- (void)passcodeViewControllerDidCancel;	// IMP=0x0000000000259e9f
- (void)passcodeViewControllerDidEndSessionExchange;	// IMP=0x0000000000259e6b
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000259e0e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000259db2
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000259d62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

