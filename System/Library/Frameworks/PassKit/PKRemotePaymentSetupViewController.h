//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKit/PKRemotePaymentSetupViewControllerProtocol-Protocol.h>

@class NSString;

@interface PKRemotePaymentSetupViewController : _UIRemoteViewController <PKRemotePaymentSetupViewControllerProtocol>
{
}

+ (id)serviceViewControllerInterface;	// IMP=0x000000000000b625
+ (id)exportedInterface;	// IMP=0x000000000000b605
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x000000000000b5fd
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000000b6e5
- (void)paymentSetupDidFinish;	// IMP=0x000000000000b645

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

